#include <math.h>
#include <GL/glut.h>

//Intialize OpenGL
void init(void){
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0, 300.0, 0.0, 300.0);
}
void drawpoint(void){
glClear(GL_COLOR_BUFFER_BIT);
glcolor3f(1.0,0.4,0.2);
glPointSize(5.0);
glVertex2d(100, 100);
glVertex2d(150, 100);
glVertex2d(200, 100);
glVertex2d(180, 100);
glBegin(GL_POINTS);



