#include<windows.h>
#include <GL/glut.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);	// Set display window colour to black
	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}
void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window


	glColor3f(0.0, 0.0, 1.0);
	glPointSize(10.0);


    glColor3f(0.8, 0.0, 0.0);

	glBegin(GL_POLYGON);
        glVertex2i(75, 75);
		glVertex2i(200, 200);
		glVertex2i(200, 200);
		glVertex2i(75, 325);
		glVertex2i(75, 325);
		glVertex2i(75, 75);

	glEnd();



	glColor3f(0.0, 0.3, 0.0);

	glBegin(GL_POLYGON);
        glVertex2i(75, 75);
		glVertex2i(325, 75);
		glVertex2i(325, 75);
		glVertex2i(325, 150);
		glVertex2i(325, 150);
		glVertex2i(150, 150);
		glVertex2i(150, 150);
		glVertex2i(75, 75);

	glEnd();


	glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_POLYGON);
        glVertex2i(75, 325);
		glVertex2i(150, 250);
		glVertex2i(150, 250);
		glVertex2i(325, 250);
		glVertex2i(325, 275);
		glVertex2i(325, 325);
		glVertex2i(325, 325);
		glVertex2i(75, 325);

	glEnd();


	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);
        glVertex2i(122, 185);
		glVertex2i(125, 170);
		glVertex2i(125, 170);
		glVertex2i(133, 187.5);
		glVertex2i(133, 187.5);
		glVertex2i(140, 180);
		glVertex2i(140, 180);
		glVertex2i(134, 199);
		glVertex2i(134, 199);
		glVertex2i(142, 200);
		glVertex2i(142, 200);
		glVertex2i(133, 204);
		glVertex2i(133, 204);
		glVertex2i(134.5, 220);
		glVertex2i(134.5, 220);
		glVertex2i(127, 205);
		glVertex2i(127, 205);
		glVertex2i(120, 220);
		glVertex2i(120, 220);
		glVertex2i(124, 202);
		glVertex2i(124, 202);
		glVertex2i(112.5, 205);
		glVertex2i(112.5, 205);
		glVertex2i(118, 194);
		glVertex2i(118, 194);
		glVertex2i(111.5, 180);
		glVertex2i(111.5, 180);
		glVertex2i(122, 185);


	glEnd();
    glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode
	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(350, 350);					// Set window size
	glutCreateWindow("An Example OpenGL Program");	// Create display window
	init();							// Execute initialisation procedure
	glutDisplayFunc(drawShapes);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait
	return 0;
}
