#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

static float	tx	=  0.0;
static float	ty	=  0.0;

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glOrtho(-15,15,-15,15,-15,5);
}
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_POLYGON);
    glVertex2f(cx,cy);

    for(int i=0;i<=360;i++)

    {
        float angle = i * 3.1416/180;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}


void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);





    glColor3f(0.0f, 0.0f, 0.0f);

    circle(5,5,0,0);


    glColor3f(1.0f,1.0f,1.0f);

    circle(5,5,2,2);


    glFlush();
}
int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Half Moon: 171-15-1367");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
