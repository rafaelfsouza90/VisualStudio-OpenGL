//Faça um programa que exiba funções:

//Ao digitar 1 exiba uma função do primeiro grau

//Ao digitar 2 exiba uma função do segundo grau

//Ao digitar 3 exiba uma função da sua escolha


#include <glut.h>


int E = 0;

void Eixo() {
	glColor3f(1.0, 0.8, 0.7);
	glBegin(GL_LINES);

	glVertex2f(-10, 0);
	glVertex2f(10, 0);

	glVertex2f(0, -10);
	glVertex2f(0, 10);

	glEnd();
	glFlush();
}

void funcao01() {
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POINTS);
	float a, b;
	for (a = -10; a <= 10; a = a + 0.05) {
		b = a + 1;
		glVertex2f(a, b);
	}
	glEnd();
	glFlush();
}

void funcao02() {
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POINTS);
	float x, y;
	for (x = -10; x <= 10; x = x + 0.05) {
		y = x * x;
		glVertex2f(x, y);
	}
	glEnd();
	glFlush();

}

void triangle() {

	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glPointSize(4.0);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-8, -8);

	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0.0, 8.0);

	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(8.0, -8.0);

	glEnd();
	glFlush();

}


void redesenha()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.4);

	Eixo();
	if (E == 1) {
		funcao01();
		glFlush();
	}

	if (E == 2) {
		funcao02();
		glFlush();
	}

	if (E == 3) {
		triangle();
		glFlush();
	}

	glEnd();
	glFlush();
}
void teclado(unsigned char key, int x, int y)
{
	switch (key) {
	case '1':
		if (E == 1) {
			E = 0;
		}

		else { E = 1; }
		redesenha();
		break;

	case '2':
		if (E == 2) {
			E = 0;
		}

		else { E = 2; }
		redesenha();

		break;

	case '3':
		if (E == 3) {
			E = 0;
		}

		else { E = 3; }
		redesenha();

		break;
	}
}
void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(10, 100);
	glutCreateWindow("Funcao");

	glutKeyboardFunc(teclado);
	//permite a utilização do teclado
	gluOrtho2D(-10, 10, -10, 10);
	glutDisplayFunc(redesenha);
	glutMainLoop();
}