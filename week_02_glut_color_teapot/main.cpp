#include <GL/glut.h> ///�K�W�W�P��10��{���X

void display()
{
    glColor3f(247/255.0, 180/255.0 , 171/255.0); ///�s�W�C��
    glutSolidTeapot(0.3);


    glColor3f(251/255.0, 233/255.0 , 219/255.0); ///�s�W�ĤG���C��
    glutSolidTeapot(0.2);

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
