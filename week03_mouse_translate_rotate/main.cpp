///�{���qweek03_mouse copy
#include <GL/glut.h>
#include <stdio.h> ///���Fprint
float teapotX = 0, teapotY = 0;
float angle = 0;
int method = 1; /// 1��� 2����
int oldX = 0, oldY = 0; ///�ª��y��
void mouse(int button, int state, int x, int y)
{
    oldX = x;
    oldY = y;
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef(teapotX, teapotY, 0);
        glRotatef(angle, 0, 0, 1); ///��z�b��
        ///glTranslatef(teapotX, teapotY, 0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void motion(int x, int y)
{
    if(method == 1){ ///���angle
        angle += x - oldX;
    }else if(method == 2){
        teapotX += (x-oldX)/150.0;
        teapotY += (y-oldY)/150.0;
    }
    oldX = x;
    oldY = y;
    display();
}
void keyboard(unsigned char key, int x, int y)
{
    if(key == 'e') method = 1; ///���
    if(key == 'w') method = 2; ///����
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03_mouse_translate_rotate");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion); ///���Umouse���禡
    glutKeyboardFunc(keyboard); ///����

    glutMainLoop();
}