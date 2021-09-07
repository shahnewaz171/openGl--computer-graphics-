#include<windows.h>
#include <GL/glut.h>
#include<stdio.h>

void circle()
{
    glPushMatrix();

    glColor3f(0.000,0.000,0.000);

    glScalef(1,2,0);
    glutSolidSphere(20,100,10);

    glPopMatrix();
    glEnd();
}


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();
	circle();
	glPopMatrix();

	glutSwapBuffers();
	glFlush();
}

void base (void)

{
    glClearColor (1.1, 1.1, 1.1,1.1);
    glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 400);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Art");
    base();
    glutDisplayFunc(display);


    glutMainLoop();
    return 0;
}

