#include <GL/glut.h> ///week02_glut_cos_sin_circle
///貼上剛剛的week02_glut_color_teapot
#include <math.h>
void myCircle(float x, float y, float r){
    glBegin(GL_POLYGON); ///開始畫多邊形
    for(float a=0; a<3.1415*2; a+=0.1 ){
        glVertex2f(r*cos(a)+x, r*sin(a)+y);
    }
    glEnd(); ///結束畫
}
void display()
{
    myCircle(0.5, 0.5, 0.3);
    myCircle(-0.5, 0.5, 0.3);
    myCircle(0, -0.1, 0.6);
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


