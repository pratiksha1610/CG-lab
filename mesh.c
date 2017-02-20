#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#define dx 10
#define dy 10
GLfloat r=0.0,g=0.0,b=0.0,br=1,bg=1,bb=1;
void display()
{
GLint i,j;

glClear(GL_COLOR_BUFFER_BIT);
glColor3f(r,g,b);
for(i=10;i<300;i+=dx)
for(j=10;j<300;j+=dy)
{
glBegin(GL_LINE_LOOP);
glVertex2i(i,j);
glVertex2i(i+dx,j);
glVertex2i(i+dx,j+dy);
glVertex2i(i,j+dy);
glEnd();
}
glFlush();
}
int main(int argc,char **argv)
{
printf("enter line color values");
scanf("%f%f%f",&r,&g,&b);
printf("enter background color values");
scanf("%f%f%f",&br,&bg,&bb);
  glutInit(&argc, argv);
  //Simple buffer
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
  glutInitWindowPosition(50,25);
  glutInitWindowSize(500,250);
  glutCreateWindow("rectangular mesh");
  glClearColor(br,bg,bb,0.0);
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0.0,500.0,0.0,500.0);
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
