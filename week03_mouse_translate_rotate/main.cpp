///程式從week03_mouse copy
#include <GL/glut.h>
#include <stdio.h> ///為了print
float teapotX = 0, teapotY = 0;
float angle = 0;
int method = 1; /// 1轉動 2移動
int oldX = 0, oldY = 0; ///舊的座標
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
        glRotatef(angle, 0, 0, 1); ///對z軸轉
        ///glTranslatef(teapotX, teapotY, 0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void motion(int x, int y)
{
    if(method == 1){ ///轉動angle
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
    if(key == 'e') method = 1; ///轉動
    if(key == 'w') method = 2; ///移動
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03_mouse_translate_rotate");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion); ///註冊mouse的函式
    glutKeyboardFunc(keyboard); ///按鍵

    glutMainLoop();
}
