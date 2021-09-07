#include<windows.h>
#include <GL/glut.h>
#include<GL/gl.h>


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);


    bool color_change=false;
    for(int x=0; x<=800; x+=100)
    {
        for(int y=0; y<=800; y+=100)
        {
            if(color_change)
            {
                glColor3f(1.1,1.1,1.1);
                color_change=!color_change;
            }
            else
            {
                glColor3f(0.0,0.0,0.0);
                color_change=!color_change;
            }
            glBegin(GL_QUADS);
            glVertex2i(x,y);
            glVertex2i(x,y+100);
            glVertex2i(x+100,y+100);
            glVertex2i(x+100,y);
            glEnd();
            glFlush();
        }
    }


}

void init (void)

{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (400, 400);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Chess Board");
    init();
    glutDisplayFunc(display);


    glutMainLoop();
    return 0;
}

