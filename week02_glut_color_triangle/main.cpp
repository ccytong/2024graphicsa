#include <GL/glut.h> ///�K�W�W�P��10��{���X
///�K�W��誺week02_glut_color_teapot
void display()
{
    glBegin(GL_POLYGON); ///�}�l�e�h���
        glColor3f(1,0,0); glVertex2f(0,1);
        glColor3f(0,1,0); glVertex2f(1,-0.6);
        glColor3f(0,0,1); glVertex2f(-1,-0.6);
    glEnd(); ///�����e


    glutSwapBuffers();
}
int main(int argc, char *argv[]) ///138��Amain�禡
{
    glutInit(&argc, argv);///140��A�}��glut�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��A�]�w��ܼҦ�
    glutCreateWindow("week02_color_teapot");///145��A�}glut����
    glutDisplayFunc(display);///148��A��display()�禡�ӵe��

    glutMainLoop();///174��A�D�n���j��A�b�o�̤@���B�@�A������
}

