///�K�Wweek10-7�{���X
#include <GL/glut.h>
void myBody()
{
    glPushMatrix();
        ///glTranslatef(0.0,-0.3,0);
        glColor3f(1,0,0); ///red
        glutWireCube(0.6); ///myBody()
	glPopMatrix();
}
void myArm(){

	glPushMatrix();
        glColor3f(0,1,0); ///green
        glScalef(1,0.4,0.4);
        glutWireCube(0.3); ///myArm()
	glPopMatrix();
}
float angle = 0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    myBody();
    glPushMatrix(); ///�k�b��
        glTranslatef(0.3, 0.3, 0); ///Step3:���u����ӤW
        glRotatef(angle,0,0,1); ///Step2:���઺����
        glTranslatef(0.15,0,0); ///Step1:(�k��)����त�ߩ�b�e��������
        myArm();

        glPushMatrix();
            glTranslatef(0.15, 0, 0); ///Step3:���u�����y�W
            glRotatef(angle,0,0,1); ///Step2:���઺����
            glTranslatef(0.15,0,0); ///Step1:(�k��)����त�ߩ�b�e��������
            myArm();
        glPopMatrix();
    glPopMatrix();

    glPushMatrix(); ///���b��
        glTranslatef(-0.3, 0.3, 0); ///Step3:���u����ӤW
        glRotatef(-angle,0,0,1); ///Step2:���઺����
        glTranslatef(-0.15,0,0); ///Step1:(�k��)����त�ߩ�b�e��������
        myArm();

        glPushMatrix();
            glTranslatef(-0.15, 0, 0); ///Step3:���u�����y�W
            glRotatef(-angle,0,0,1); ///Step2:���઺����
            glTranslatef(-0.15,0,0); ///Step1:(�k��)����त�ߩ�b�e��������
            myArm();
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
}
void motion(int x, int y){
    angle = x;
    glutPostRedisplay(); ///�i�DGLUT�A�K�W�K�Q�K�A��GLUT���ŮɡA�N�n���e�e��
}

int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week10");

	glutDisplayFunc(display);
	glutMotionFunc(motion); ///week10-7 �[�W mouse motion
	glutIdleFunc(display); ///���ŴN����
	glutMainLoop();
}
