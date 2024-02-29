#include <GL/glut.h> ///貼上上周的10行程式碼

void display()
{
    glColor3f(247/255.0, 180/255.0 , 171/255.0); ///新增顏色
    glutSolidTeapot(0.3);


    glColor3f(251/255.0, 233/255.0 , 219/255.0); ///新增第二個顏色
    glutSolidTeapot(0.2);

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
