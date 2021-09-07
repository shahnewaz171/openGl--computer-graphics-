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


	glColor3f(1.0, 0.0, 1.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(50, 25);
		glVertex2i(350, 25);

		glVertex2i(350, 200);
		glVertex2i(50, 200);

		glVertex2i(350, 25);
		glVertex2i(350, 200);

		glVertex2i(50, 200);
		glVertex2i(50, 25);
    glEnd();

    glColor3f(0.0, 0.0, 1.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(175, 25);
		glVertex2i(225, 25);

		glVertex2i(225, 25);
		glVertex2i(225, 175);

		glVertex2i(225, 175);
		glVertex2i(175, 175);

		glVertex2i(175, 175);
		glVertex2i(175, 25);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(75, 75);
		glVertex2i(150, 75);

		glVertex2i(150, 75);
		glVertex2i(150, 140);

		glVertex2i(150, 140);
		glVertex2i(75, 140);

		glVertex2i(75, 140);
		glVertex2i(75, 75);
    glEnd();

     glColor3f(1.0, 0.0, 0.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(250, 75);
		glVertex2i(325, 75);

		glVertex2i(325, 75);
		glVertex2i(325, 140);

		glVertex2i(325, 140);
		glVertex2i(250, 140);

		glVertex2i(250, 140);
		glVertex2i(250, 75);
    glEnd();

    glColor3f(0.0, 1.0, 0.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(50, 200);
		glVertex2i(350, 200);

		glVertex2i(350, 200);
		glVertex2i(200, 325);

		glVertex2i(200, 325);
		glVertex2i(50, 200);
    glEnd();

    glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

	glutInitWindowPosition(100, 100);
	glutInitWindowSize(350, 350);
	glutCreateWindow("An Example rectangle & triangle");

	init();
	glutDisplayFunc(drawShapes);
	glutMainLoop();

	return 0;
}

