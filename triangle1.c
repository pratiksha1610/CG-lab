#include<GL/glut.h>
void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_LINE_LOOP);
glVertex2i(10,10);

glVertex2i(50,100);
glVertex2i(100,10);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2i(25,50);

glVertex2i(75,50);
glVertex2i(50,15);




glEnd();
glFlush();
}
int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(50,20);
glutInitWindowSize(500,250);
glutCreateWindow("sample");
glClearColor(1.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,200.0,0.0,150.0);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
