///把 "glm.h" 放到 桌面\week06-3_glm_obj_model 目錄裡
///把 "glm.c" 放到 桌面\week06-3_glm_obj_model 目錄裡，改檔名為 "glm.cpp"
///在專案裡按右鍵 Add Files，加入 glm.cpp
///要把 data 資料夾放到 桌面\freeglut\bin 目錄裡

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
