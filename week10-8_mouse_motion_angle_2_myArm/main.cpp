///貼上week10-7程式碼
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
    glPushMatrix(); ///右半邊
        glTranslatef(0.3, 0.3, 0); ///Step3:手臂移到肩上
        glRotatef(angle,0,0,1); ///Step2:旋轉的角度
        glTranslatef(0.15,0,0); ///Step1:(右移)把旋轉中心放在畫面正中心
        myArm();

        glPushMatrix();
            glTranslatef(0.15, 0, 0); ///Step3:手臂掛到手肘上
            glRotatef(angle,0,0,1); ///Step2:旋轉的角度
            glTranslatef(0.15,0,0); ///Step1:(右移)把旋轉中心放在畫面正中心
            myArm();
        glPopMatrix();
    glPopMatrix();

    glPushMatrix(); ///左半邊
        glTranslatef(-0.3, 0.3, 0); ///Step3:手臂移到肩上
        glRotatef(-angle,0,0,1); ///Step2:旋轉的角度
        glTranslatef(-0.15,0,0); ///Step1:(右移)把旋轉中心放在畫面正中心
        myArm();

        glPushMatrix();
            glTranslatef(-0.15, 0, 0); ///Step3:手臂掛到手肘上
            glRotatef(-angle,0,0,1); ///Step2:旋轉的角度
            glTranslatef(-0.15,0,0); ///Step1:(右移)把旋轉中心放在畫面正中心
            myArm();
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
}
void motion(int x, int y){
    angle = x;
    glutPostRedisplay(); ///告訴GLUT，貼上便利貼，請GLUT有空時，就要重畫畫面
}

int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week10");

	glutDisplayFunc(display);
	glutMotionFunc(motion); ///week10-7 加上 mouse motion
	glutIdleFunc(display); ///有空就旋轉
	glutMainLoop();
}
