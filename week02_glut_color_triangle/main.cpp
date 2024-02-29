#include <GL/glut.h> ///貼上上周的10行程式碼
///貼上剛剛的week02_glut_color_teapot
void display()
{
    glBegin(GL_POLYGON); ///開始畫多邊形
        glColor3f(1,0,0); glVertex2f(0,1);
        glColor3f(0,1,0); glVertex2f(1,-0.6);
        glColor3f(0,0,1); glVertex2f(-1,-0.6);
    glEnd(); ///結束畫


    glutSwapBuffers();
}
int main(int argc, char *argv[]) ///138行，main函式
{
    glutInit(&argc, argv);///140行，開啟glut功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行，設定顯示模式
    glutCreateWindow("week02_color_teapot");///145行，開glut視窗
    glutDisplayFunc(display);///148行，用display()函式來畫圖

    glutMainLoop();///174行，主要的迴圈，在這裡一直運作，不結束
}

