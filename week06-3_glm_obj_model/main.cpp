///�� "glm.h" ��� �ୱ\week06-3_glm_obj_model �ؿ���
///�� "glm.c" ��� �ୱ\week06-3_glm_obj_model �ؿ��̡A���ɦW�� "glm.cpp"
///�b�M�׸̫��k�� Add Files�A�[�J glm.cpp
///�n�� data ��Ƨ���� �ୱ\freeglut\bin �ؿ���

#include <GL/glut.h>
#include "glm.h"
GLMmodel* pmodel = NULL;

void
drawmodel(void)
{
    if (!pmodel) {
	pmodel = glmReadOBJ("data/flowers.obj");
	if (!pmodel) exit(0);
	glmUnitize(pmodel);
	glmFacetNormals(pmodel);
	glmVertexNormals(pmodel, 90.0);
    }

    glmDraw(pmodel, GLM_SMOOTH | GLM_MATERIAL);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    drawmodel();
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow(" week06-1_lighting ");
    glutDisplayFunc(display);

    glutMainLoop();
}
