#include <GL/glut.h> ///貼上上周的10行程式碼
///貼上剛剛的week02_glut_color_teapot
void display()
{
    glBegin(GL_POLYGON); ///開始畫多邊形
        glVertex2f((34-200)/200.0,-(76-200)/200.0);
        glVertex2f((48-200)/200.0,-(131-200)/200.0);
        glVertex2f((85-200)/200.0,-(25-200)/200.0);
    glEnd(); ///結束畫

    glBegin(GL_POLYGON); ///開始畫多邊形
        glVertex2f((383-200)/200.0,-(79-200)/200.0);
        glVertex2f((348-200)/200.0,-(146-200)/200.0);
        glVertex2f((312-200)/200.0,-(55-200)/200.0);
    glEnd(); ///結束畫
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week02_color_teapot");
    glutDisplayFunc(display);

    glutMainLoop();
}
