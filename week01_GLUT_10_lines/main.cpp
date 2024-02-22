#include <GL/glut.h> ///18行留下，使用GLUT外掛

void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
int main(int argc, char *argv[]) ///138行，main函式
{
    glutInit(&argc, argv);///140行，開啟glut功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行，設定顯示模式
    glutCreateWindow("2024電腦圖學第01週");///145行，開glut視窗
    glutDisplayFunc(display);///148行，用display()函式來畫圖

    glutMainLoop();///174行，主要的迴圈，在這裡一直運作，不結束
}
