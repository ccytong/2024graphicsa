///貼上11行 GLUT 程式碼  目標 : 能移動、旋轉、陣列
#include <GL/glut.h>
#include <stdio.h>
float angleX[10]={}, angleY[10]={}; ///陣列
float teapotX=0, teapotY=0; ///week3、4 教的技巧
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidSphere(0.02, 30, 30); ///中心點

    glPushMatrix();
        ///glTranslatef(teapotX, teapotY, 0);
        glRotatef(angleX[0],0,0,1);
        glTranslatef(-0.520, -0.133, 0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
int oldX=0, oldY=0;
void mouse(int button, int state, int x, int y){
    oldX = x;
    oldY = y;
}
void motion(int x, int y){
    ///teapotX += (x-oldX)/150.0;
    ///teapotY -= (y-oldY)/150.0;
    ///printf("glTranslaref(%.3f,%.3f,0);\n",teapotX,teapotY);
    angleX[0] += (x-oldX);
    oldX = x;
    oldY = y;
    glutPostRedisplay();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week15-4");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);

    glutMainLoop();
}
