#include <pch.h>

#include <iostream>
#include <GL/glut.h>

using namespace std;


void five() {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);

	glVertex2f(0.0, 0.5);
	glVertex2f(0.5, 0.0);
	glVertex2f(0.0, -0.5);
	glVertex2f(-0.5, -0.25);
	glVertex2f(-0.5, 0.25);
	glEnd();
	glutSwapBuffers();
}
void six() {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);

	glVertex2f(0.5, 0.5);
	glVertex2f(0.75, 0.0);
	glVertex2f(0.5, -0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.75, 0.0);
	glVertex2f(-0.5, 0.5);

	glEnd();
	glutSwapBuffers();
}


void seven() {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);

	glVertex2f(0.25, 0.75);
	glVertex2f(0.75, 0.25);
	glVertex2f(0.75, -0.25);
	glVertex2f(0.25, -0.5);
	glVertex2f(-0.25, -0.5);
	glVertex2f(-0.75, 0.25);
	glVertex2f(-0.25, 0.75);


	glEnd();
	glutSwapBuffers();
}

void eight() {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.5, 0.5);

	glVertex2f(0.0, 0.75);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.75, 0.0);
	glVertex2f(0.5, -0.5);
	glVertex2f(0., -0.75);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.75, 0.0);
	glVertex2f(-0.5, 0.5);



	glEnd();
	glutSwapBuffers();
}


void ten() {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.45, 0.5);

	glVertex2f(0.25, 0.75);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.75, 0.0);
	glVertex2f(0.5, -0.5);
	glVertex2f(0.25, -0.75);
	glVertex2f(-0.25, -0.75);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.75, 0.0);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.25, 0.75);

	glEnd();
	glutSwapBuffers();
}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Assignment 1");
	glutDisplayFunc(ten);
	glutMainLoop();
}