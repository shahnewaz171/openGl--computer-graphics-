#include<windows.h>
#include <GL/glut.h>


void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);

	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(10.0);



    glColor3f(255.0, 255.0, 255.0);
	glBegin(GL_QUADS);
		glVertex2i(25, 15);
		glVertex2i(25, 125);
        glVertex2i(375, 125);
		glVertex2i(375, 15);

	glEnd();


	glColor3f(0.0, 128.0, 0.0);
	glBegin(GL_TRIANGLES);
        glVertex2i(25, 125);
		glVertex2i(200, 225);
        glVertex2i(375, 125);

    glEnd();


    glColor3f(1.0, 0.0, 0.0);
	    glBegin(GL_QUADS);
		glVertex2i(50, 50);
		glVertex2i(50, 100);
        glVertex2i(125, 100);
		glVertex2i(125, 50);

	glEnd();


    glColor3f(0.0, 0.0, 255.0);
	    glBegin(GL_QUADS);
		glVertex2i(150, 15);
		glVertex2i(150, 110);
        glVertex2i(250, 110);
		glVertex2i(250, 15);

	glEnd();


    glColor3f(1.0, 0.0, 0.0);
	    glBegin(GL_QUADS);
		glVertex2i(275, 50);
		glVertex2i(275, 100);
        glVertex2i(350, 100);
		glVertex2i(350, 50);

	glEnd();
	glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

	glutInitWindowPosition(100, 100);
	glutInitWindowSize(350, 350);
	glutCreateWindow("171-15-1367");

	init();
	glutDisplayFunc(drawShapes);
	glutMainLoop();

	return 0;
}
