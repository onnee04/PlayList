#include<windows.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.1416
static float	cx	=  0.0;
static float	cy	=  0.0;
static float	tx	=  12.5;
static float	ty	=  -9.0;
static float	ax	=  -12.5;
static float	ay	=  -9.0;
static float	hx	=  -17.5;
static float	hy	=  -2.0;
static float	kx	=  18.5;
static float	ky	=  -3.0;
float spin1 = 0.0;
float p=12.0;

void init(void)
{
	glClearColor(0.74f, 0.74f, 0.74f, 1.0f);
	 glOrtho(-12,12,-12,12,-12,12);
}
void circle(float radius_x, float radius_y)
{
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
		    angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius_x, sin(angle) * radius_y);

		}

	glEnd();
}
void halfcircle(float radius_x, float radius_y)
{
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius_x, sin(angle) * radius_y);
		}

	glEnd();
}
void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);



    glPushMatrix();   //borosha
    glTranslatef(-11.5,p+9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-11.5,p+7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-11.5,p+5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-11.5,p+2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-11.5,p-.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-11.5,p-3,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-11.5,p-5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-11.5,p-7.2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(-11.5,p-10.3,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-11.5,p-13,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-11.5,p-14.8,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-11.5,p-17,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-11.5,p-19.2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-11.5,p-20.7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-11.5,p-22.9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-9,p+9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-9,p+7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-9,p+5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-9,p+2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-9,p-.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-9,p-2.9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-9,p-6.7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-9,p-9.2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-9,p-11.7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-9,p-15,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-9,p-17.4,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-9,p-19,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-9,p-22,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-6.5,p+9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p+7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p+5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p+2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p-.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p-2.6,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p-4.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p-6,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p-8.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p-9.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p-11,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p-13.4,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p-14.6,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p-16,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p-17.8,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p-19.3,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p-21.6,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-6.5,p-23,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-4,p+9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4,p+7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4,p+5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4,p+2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4,p-.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4,p-1.7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4,p-3.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4,p-5.2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4,p-8.1,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4,p-10.3,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4,p-12.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4,p-15.1,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4,p-17.4,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4,p-19.2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4,p-21.9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4,p-23.1,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.5,p+9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p+7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p+5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p+2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p-.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p-2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p-3.1,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p-5.3,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p-7.8,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p-9.2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p-11.4,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p-13.4,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p-15.6,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p-16.7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p-18.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p-19.3,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p-20.8,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p-21.8,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.5,p-23.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1,p+9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1,p+7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1,p+5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1,p+2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(1,p-1,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1,p-3,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1,p-4.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1,p-5.6,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(1,p-7.8,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1,p-9.2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1,p-11.2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1,p-14,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1,p-15.6,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1,p-16.7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1,p-18,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1,p-19,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1,p-21.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1,p-22.8,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3.5,p+9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p+7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p+5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p+2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p-.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p-2.9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p-4.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p-5.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p-7.3,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p-8.2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p-10,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p-12,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(3.5,p-13.4,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p-15,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p-16.8,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p-18,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p-19.6,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p-22,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.5,p-23.6,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();

     glPushMatrix();
    glTranslatef(6,p+9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,p+7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,p+5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,p+2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(6,p-.8,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,p-1.9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,p-3.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,p-4.9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,p-6.1,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,p-7.9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,p-9.8,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,p-12,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,p-14.1,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,p-15.7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,p-17.8,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,p-19,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,p-21,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6,p-23,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(8.5,p+9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p+7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p+5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p+2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p-.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p-2.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p-4,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p-5.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p-7.1,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p-8,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p-9.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p-11.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p-13.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p-15,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p-16.2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p-18.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p-20.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p-21.9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.5,p-23.3,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();

     glPushMatrix();
    glTranslatef(11,p+9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(11,p+7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(11,p+5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(11,p+2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(11,p-.7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(11,p-1.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(11,p-3,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(11,p-4.7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(11,p-6.7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(11,p-8.3,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(11,p-9.2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(11,p-11.7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(11,p-13.4,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(11,p-16,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(11,p-18.2,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(11,p-20,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(11,p-21.7,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(11,p-22.5,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(11,p-23.9,0);
    glColor3f(1.0f,1.0f,1.0f);
    circle(.25,.25);
    glPopMatrix();




    glPushMatrix();   //body gola
    glColor3f(0.8, 0.5, 0.4);
    glTranslatef(hx-.5,hy-3,0);
    glBegin(GL_QUADS);
    glVertex2f(1,2);
    glVertex2f(0,2);
    glVertex2f(0,0);
    glVertex2f(1,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();  //left hand
    glTranslatef(hx+2,hy-5.8,0);
    glColor3f(0.3f,0.0f,0.0f);
    circle(1,2);
    glPopMatrix();

     glPushMatrix();  //right hand
    glTranslatef(hx-2,hy-5.8,0);
    glColor3f(0.3f,0.0f,0.0f);
    circle(1,2);
    glPopMatrix();

    glPushMatrix();   //body of hoodie
    glColor3f(0.3, 0.0, 0.0);
    glTranslatef(hx-1,hy-7,0);
    glBegin(GL_POLYGON);
    glVertex2f(0,4);
    glVertex2f(-1.5,3);
    glVertex2f(-1,-2.2);
    glVertex2f(3,-2.2);
    glVertex2f(3.5,3);
    glVertex2f(2,4);
    glEnd();
    glPopMatrix();

    glPushMatrix();   //hoodie gola
    glColor3f(0.4, 0.0, 0.0);
    glTranslatef(hx-1.6,hy-5.2,0);
    glBegin(GL_POLYGON);
    glVertex2f(1.5,1.2);
    glVertex2f(0,2);
    glVertex2f(0.5,.5);
    glVertex2f(1.5,-.3);
    glVertex2f(2.3,.5);
    glVertex2f(3,2);
    glEnd();
    glPopMatrix();


    glPushMatrix();  //matha
    glTranslatef(hx,hy,0);
    glColor3f(0.0f,0.0f,0.0f);
    circle(1.5,1.8);
    glPopMatrix();


    glPushMatrix();  // shithi
    glTranslatef(hx-1,hy,0);
    glColor3f(0.8f,0.5f,0.4f);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(1,1.8);
    glVertex2f(.8,0);
    glEnd();
    glPopMatrix();

     glPushMatrix();  // shithi
    glTranslatef(hx-1,hy,0);
    glColor3f(0.8f,0.5f,0.4f);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(1.2,-2);
    glVertex2f(.8,0);
    glEnd();
    glPopMatrix();


    glPushMatrix();  //band
    glTranslatef(hx-1,hy+.3,0);
    glColor3f(1.0f,0.0f,0.0f);
    circle(.4,.4);
    glPopMatrix();


    glPushMatrix();  //band
    glTranslatef(hx+1,hy+.2,0);
    glColor3f(1.0f,0.0f,0.0f);
    circle(.4,.4);
    glPopMatrix();


    glPushMatrix(); //jhuti
    glTranslatef(hx+.5,hy-3.6,0);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(.9,4);
    glVertex2f(0,4);
    glVertex2f(0,0);
    glVertex2f(.3,.3);
    glVertex2f(.6,0);
    glVertex2f(.6,3.5);
    glVertex2f(1,3.5);
    glEnd();
    glPopMatrix();

    glPushMatrix(); //jhuti
    glTranslatef(hx-1.8,hy-3.5,0);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3f,4.0f);
    glVertex2f(0.0f,4.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.3f,0.3f);
    glVertex2f(0.6f,0.0f);
    glVertex2f(0.6f,3.5f);
    glVertex2f(1.3f,3.5f);
    glEnd();
    glPopMatrix();

     glPushMatrix();  //pipeline
	glColor3f(0.4, 0.0, 0.0);
    glTranslatef(hx-2.7,hy-13.9,0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2f(4.8,6);
    glVertex2f(5,10);
    glEnd();
	glPopMatrix();

	 glPushMatrix();  //pipeline
	glColor3f(0.4, 0.0, 0.0);
    glTranslatef(hx-7,hy-13.9,0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2f(5,6);
    glVertex2f(4.8,10);
    glEnd();
	glPopMatrix();


	glPushMatrix();              //left hand
	glTranslatef(kx-1.6,ky-3.9,0);
    glColor3f(0.8, 0.5, 0.4);
	circle(1.4,2.0);
	glPopMatrix();

    glPushMatrix();   //body
    glColor3f(0.8, 0.5, 0.4);
    glTranslatef(kx,ky-.3,0);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(-2.5,-2);
    glVertex2f(-2,-6.5);
    glVertex2f(2,-6.5);
    glVertex2f(2.5,-2);
    glEnd();
    glPopMatrix();

     glPushMatrix();   //blouse
    glColor3f(0.3, 0.6, 0.0);
    glTranslatef(kx-6.5,ky-7.5,0);
    glBegin(GL_POLYGON);
    glVertex2f(5,6.0);
    glVertex2f(4,5.2);
    glVertex2f(4.3,2);
    glVertex2f(7,4.8);
    glEnd();
    glPopMatrix();

    glPushMatrix();   //achol
    glColor3f(0.0, 0.4, 0.0);
    glTranslatef(kx-2.3,ky-3.5,0);
    glBegin(GL_POLYGON);
    glVertex2f(4,2.0);
    glVertex2f(-2.5,-4.0);
    glVertex2f(-1.5,-4.5);
    glVertex2f(-1,-4);
    glVertex2f(0,-4.5);
    glVertex2f(1,-4);
    glVertex2f(3,-5.2);
    glVertex2f(6,-4.9);
    glVertex2f(5,1.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();   //achol curve
	glTranslatef(kx+3.4,ky-8.2,0);
    glColor3f(0.0, 0.4, 0.0);
    circle(.3,.3);
    glPopMatrix();

	glPushMatrix();//matha
	glTranslatef(kx,ky+.5,0);
    glColor3f(0.0, 0.0, 0.0);
	circle(1.4,2.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(kx,ky-.5,0);   //khopa
    glColor3f(0.2, 0.2, 0.2);
	circle(1.0,1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(kx+.5,ky+.6,0);   //1
    glColor3f(0.0, 1.0, 0.0);
    circle(0.3,0.3);
    glPopMatrix();

	glPushMatrix();
    glTranslatef(kx-.1,ky+.7,0);   //2
    glColor3f(1.0, 1.0, 0.0);
    circle(0.3,0.3);
    glPopMatrix();

	glPushMatrix();
    glTranslatef(kx-.7,ky+.48,0);
    glColor3f(0.0, 1.0, 0.0);
    circle(0.3,0.3);
    glPopMatrix();

     glPushMatrix();
    glTranslatef(kx-1,ky-.1,0);
    glColor3f(1.0, 1.0, 0.0);
    circle(0.3,0.3);
    glPopMatrix();

	glPushMatrix();
    glTranslatef(kx-1,ky-.7,0);
    glColor3f(0.0, 1.0, 0.0);
    circle(0.3,0.3);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(kx-.9,ky-1.3,0);
    glColor3f(1.0, 1.0, 0.0);
    circle(0.3,0.3);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(kx-.4,ky-1.6,0);
    glColor3f(0.0, 1.0, 0.0);
    circle(0.3,0.3);
    glPopMatrix();

     glPushMatrix();
    glTranslatef(kx+.2,ky-1.6,0);
    glColor3f(1.0, 1.0, 0.0);
    circle(0.3,0.3);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(kx+.8,ky-1.4,0);
    glColor3f(0.0, 1.0, 0.0);
    circle(0.3,0.3);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(kx+1.1,ky-.9,0);
    glColor3f(1.0, 1.0, 0.0);
    circle(0.3,0.3);
    glPopMatrix();

     glPushMatrix();
    glTranslatef(kx+1,ky+.2,0);
    glColor3f(1.0, 1.0, 0.0);
    circle(0.3,0.3);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(kx+1.2,ky-.35,0);
    glColor3f(0.0, 1.0, 0.0);
    circle(0.3,0.3);
    glPopMatrix();

    glPushMatrix();              //hata
    glTranslatef(kx-3,ky-3,0);
    glColor3f(0.3, 0.6, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(.6,.85);
    glVertex2f(0,-.3);
    glVertex2f(.6,-.3);
    glEnd();
	glPopMatrix();

	glPushMatrix();  //pipeline
	glColor3f(0.3, 0.5, 0.0);
    glTranslatef(kx-7.4,ky-9.3,0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2f(5,6);
    glVertex2f(5,7);
    glEnd();
	glPopMatrix();

	 glPushMatrix(); //1 thunder
    glRotatef(spin1, 1.0, 1.0, 0.0);
    glColor3f(0.4, 0.4, 0.4);
    glBegin(GL_POLYGON);
    glVertex2f(-10.0, 9.5);
    glVertex2f(-9.0, 11.0);
    glVertex2f(-12.0, 8.0);
    glVertex2f(-10.0, 9.0);
    glVertex2f(-11.5, 6.0);
    glVertex2f(-7.0, 12.0);
    glEnd();
    glPopMatrix();

    glPushMatrix(); //2 thunder
    glRotatef(spin1, 1.0, 1.0, 0.0);
    glColor3f(0.4, 0.4, 0.4);
    glBegin(GL_POLYGON);
    glVertex2f(-3.0, 6.0);
    glVertex2f(-3.0, 8.0);
    glVertex2f(-6.0, 5.0);
    glVertex2f(-4.0, 6.0);
    glVertex2f(-4.0, 4.0);
    glVertex2f(0.0, 9.0);
    glVertex2f(0.0, 11.0);
    glEnd();
    glPopMatrix();


     glPushMatrix(); //3 thunder
    glRotatef(spin1, 1.0, 1.0, 0.0);
    glColor3f(0.4, 0.4, 0.4);
    glBegin(GL_POLYGON);
    glVertex2f(2.5, 9.5);
    glVertex2f(3.0, 11.0);
    glVertex2f(0.0, 8.0);
    glVertex2f(2.0, 9.0);
    glVertex2f(1.5, 7.5);
    glVertex2f(4.0, 10.0);
    glEnd();
    glPopMatrix();

     glPushMatrix(); //4 thunder
    glRotatef(spin1, 1.0, 1.0, 0.0);
    glColor3f(0.4, 0.4, 0.4);
    glBegin(GL_POLYGON);
    glVertex2f(10.0, 10.0);
    glVertex2f(11.0, 11.0);
    glVertex2f(7.0, 9.0);
    glVertex2f(9.0, 9.0);
    glVertex2f(7.0, 8.0);
    glVertex2f(11.0, 10.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();   //middle cloud
    glTranslatef(cx,cy,0);
    glColor3f(0.1f,0.6f, 0.7f);
    glBegin(GL_QUADS);
    glVertex3f(-1.0, 6.0, 0.0);
    glVertex3f(-1.0, 4.0, 0.0);
    glVertex3f(1.0, 4.0, 0.0);
    glVertex3f(1.0, 6.0, 0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(cx,cy+6,0);
//    glRotatef(spin, 0.0, 1.0, 0.0);
    glColor3f(0.1, 0.6, 0.7);
    circle(1,1);
    glPopMatrix();

     glPushMatrix();
	 glTranslatef(cx,cy+4,0);
  //   glRotatef(spin, 0.0, 1.0, 0.0);
	 glColor3f(0.1, 0.6, 0.7);
	 circle(1,1);
	 glPopMatrix();

	 glPushMatrix();
	 glTranslatef(cx-1,cy+5,0);
    //glRotatef(spin, 0.0, 1.0, 0.0);
	 glColor3f(0.1, 0.6, 0.7);
	 circle(1,1);
	 glPopMatrix();

	 glPushMatrix();
	 glTranslatef(cx+1,cy+5,0);
     //glRotatef(spin, 0.0, 1.0, 0.0);
	 glColor3f(0.1, 0.6, 0.7);
	 circle(1,1);
	 glPopMatrix();

	 glPushMatrix();     //cloud 1
	 glTranslatef(cx+4.8,cy+8.5,0);
     //glRotatef(spin, 1.0, 1.0, 0.0);
	 glColor3f(0.1f, 0.6f, 0.7f);
	 circle(1,1);
     glPopMatrix();
     glPushMatrix();
	 glTranslatef(cx+5.8,cy+9.5,0);
	 //glRotatef(spin, 1.0, 1.0, 0.0);
	 glColor3f(0.1, 0.6, 0.7);
	 circle(1,1);
	 glPopMatrix();

	  glPushMatrix();    //2 cloud
	 glTranslatef(cx-5,cy+9,0);
	  //glRotatef(spin, 1.0, 1.0, 0.0);
	 glColor3f(0.1, 0.6, 0.7);
	 circle(1,1);
	 glPopMatrix();
	 glPushMatrix();
	 glTranslatef(cx-4,cy+10,0);
	  //glRotatef(spin, 1.0, 1.0, 0.0);
	 glColor3f(0.1, 0.6, 0.7);
	 circle(1,1);
	 glPopMatrix();

	 glPushMatrix(); //3 cloud
	 glTranslatef(cx-9,cy+6,0);
	  //glRotatef(spin, 1.0, 1.0, 0.0);
	 glColor3f(0.1, 0.6, 0.7);
	 circle(1,1);
	 glPopMatrix();
	 glPushMatrix();
	 glTranslatef(cx-8,cy+7,0);
     //glRotatef(spin, 1.0, 1.0, 0.0);
	 glColor3f(0.1, 0.6, 0.7);
	 circle(1,1);
	 glPopMatrix();

	  glPushMatrix();  //4 cloud
	 glTranslatef(cx+8.2,cy+6.5,0);
     //glRotatef(spin, 1.0, 1.0, 0.0);
	 glColor3f(0.1, 0.6, 0.7);
	 circle(1,1);
	 glPopMatrix();
	 glPushMatrix();
	 glTranslatef(cx+7.2,cy+5.5,0);
     //glRotatef(spin, 1.0, 1.0, 0.0);
	 glColor3f(0.1, 0.6, 0.7);
	 circle(1,1);
	 glPopMatrix();


  glPushMatrix();  //cup milk
  glRotatef(spin1, 2.0, 4.0, 0.0);
	glTranslatef(tx,ty,0);
    glColor3f(255,255,255);
	circle(1,.3);
	glPopMatrix();

	glPushMatrix();
      glRotatef(spin1, 2.0, 4.0, 0.0);
     glTranslatef(tx-2,ty-3,0);
    glBegin(GL_QUADS);
        glColor3f(1.0f, 1.0f, 1.8f);
        glVertex3f(3.0, 3.0, 0.0);
        glColor3f(1.0f,1.7f, 1.0f);
        glVertex3f(1.0, 3.0, 0.0);
       glColor3f(0.7f, 0.4f, 0.1f);
        glVertex3f(1.0, 1.0, 0.0);
        glColor3f(0.7f, 0.4f, 0.1f);
         glVertex3f(3.0, 1.0, 0.0);
    glEnd();
  glPopMatrix();



  glPushMatrix(); //cup lal
	glTranslatef(ax,ay,0);
    glColor3f(255,255,255);
	circle(1,.3);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(ax-2,ay-3,0);
    glBegin(GL_QUADS);
        glColor3f(1.0f, 1.0f, 1.8f);
        glVertex3f(3.0, 3.0, 0.0);
        glColor3f(1.0f,1.7f, 1.0f);
        glVertex3f(1.0, 3.0, 0.0);
        glColor3f(0.4f, 0.0f, 0.0f);
        glVertex3f(1.0, 1.0, 0.0);
        glColor3f(0.4f, 0.0f, 0.0f);
         glVertex3f(3.0, 1.0, 0.0);
    glEnd();
glPopMatrix();
glFlush();

if(ax==5){


	if(cx<20.0 )


        cx=cx+0.005;

    else
        cx=-20;
 }



 if(p>-12 && ax==5)
     {
      p=p-.005;

      if(p<0)
      {
          p=p+6;
      }

     }
      else if(p>-12 && tx==-5)//tx<=12)
      {


         p=p-.09;
      if(p<0)
      {
          p=p+6;
      }

     }
 else if(p>-12)
      {


         p=p-1;
      if(p<0)
      {
          p=p+6;
      }

     }

    else{
   p=+12;


}
glutPostRedisplay();
}




void spinDisplay_right(void)
{
   spin1 = spin1 - 1;

   if (spin1 < -20.0)
      spin1 = spin1 + 20.0;


   glutPostRedisplay();
}






void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_LEFT:
				tx -=2.5;
				kx-=2.5;
				ax-=2.5;
				hx-=2.5;

				 if(tx==-5)
                {

                 glClearColor(0.1f, 0.6f, 0.7f, 0.0f);
                 PlaySound("acid.wav", NULL, SND_FILENAME| SND_ASYNC);
                glutIdleFunc(spinDisplay_right);


                }

				glutPostRedisplay();
				break;

		case GLUT_KEY_RIGHT:
				tx+=2.5;
				kx+=2.5;
				ax+=2.5;
				hx+=2.5;


				if(ax==5)
                {
                    glClearColor(0.4f, 0.4f, 0.4f, 0.4f);
                    PlaySound("brishty.wav", NULL, SND_FILENAME| SND_ASYNC);
                  // glutIdleFunc(spinDisplay_left);
                }
				glutPostRedisplay();
				break;

        case GLUT_KEY_DOWN:
				tx -=2.5;
				kx-=2.5;
				ax+=2.5;
				hx+=2.5;

				if(tx==-5 && ax==5)
                {


                    //glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
                    glClearColor(0.74f, 0.74f, 0.74f, 0.74f);
                    PlaySound("Untitled-Project.wav", NULL, SND_FILENAME| SND_ASYNC);

                }

				glutPostRedisplay();
				break;

	  default:
			break;
	}


}

void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
            cx=0;
            glutIdleFunc(NULL);

         break;
      default:
         break;
   }
}








int main()
{
    PlaySound("Untitled-Project.wav", NULL, SND_FILENAME| SND_ASYNC);

	glutInitWindowSize (700, 620);
	glutInitWindowPosition (300,80);

	glutCreateWindow ("final");
	init();
    glutDisplayFunc(display);
    glutSpecialFunc(spe_key);
    glutMouseFunc(my_mouse);
    glutMainLoop();
    return 0;
}

