#include<windows.h>
#include <GL/glut.h>


void init(void)
{
	glClearColor(1.1, 1.1, 1.1, 1.1);

	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.0, 0.0, 0.0);

	glPointSize(10.0);


	glColor3f(0.70, 0.0, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(200, 175);
		glVertex2i(300, 175);
		glVertex2i(285, 187.5);
		glVertex2i(300, 215);
		glVertex2i(262.5, 200);
		glVertex2i(262.5, 225);
		glVertex2i(230, 170);
		glVertex2i(250, 250);
		glVertex2i(225, 237.5);
		glVertex2i(200, 275);


	glEnd();
	glFlush();


	glColor3f(0.85, 0.0, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(200, 175);
		glVertex2i(300, 175);
		glVertex2i(250, 125);
		glVertex2i(275, 50);
		glVertex2i(200, 100);

	glEnd();
	glFlush();


	glColor3f(0.70, 0.0, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(200, 175);
		glVertex2i(200, 100);
		glVertex2i(125, 50);
		glVertex2i(150, 125);
		glVertex2i(100, 175);

	glEnd();
	glFlush();


	glColor3f(0.85, 0.0, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(200, 175);
		glVertex2i(100, 175);
		glVertex2i(120, 187.5);
		glVertex2i(100, 215);
		glVertex2i(137.5, 200);
		glVertex2i(137.5, 225);
		glVertex2i(165, 190);
		glVertex2i(150, 250);
		glVertex2i(175, 237.5);
		glVertex2i(200, 275);


	glEnd();
	glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

	glutInitWindowPosition(100, 100);
	glutInitWindowSize(350, 350);
	glutCreateWindow("Polygon = 171-15-1367");

	init();
	glutDisplayFunc(drawShapes);
	glutMainLoop();

	return 0;
}
