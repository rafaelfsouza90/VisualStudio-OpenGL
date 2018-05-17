//1) Fa�a um programa que exiba exatamente quatro pontos.


#include <glut.h>

void redesenha() {

	glClearColor(1.0, 1.0, 1.0, 0.0);
	//Indica cor para ser utilizada no fundo da tela.
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	// Pinta os buffers indicados com a cor do glClearColor()
	glColor3f(1.0, 0.0, 0.0);
	// Define o vermelho como cor atual.
	glPointSize(4.0);
	//determine o tamanho do ponto
	glBegin(GL_POINTS);

	glVertex2f(150.0, 150.0);
	glVertex2f(300.0, 150.0);
	glVertex2f(150.0, 300.0);
	glVertex2f(300.0, 300.0);
	glEnd();
	// Plota um ponto na posi��o(200, 200) na tela.
	glFlush();
	// Imprime o conte�do do buffer na tela.
}

void main(int argc, char ** argv) {
	glutInit(&argc, argv);
	// Este comando � utilizado para iniciar a biblioteca GLUT.
	glutInitDisplayMode
	(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
	/* Quando uma janela � criada, seu tipo � determinado pelo Display
	GLUT_SINGLE: Buffer simples
	GLUT_RGBA...: Utilizaremos o modo RGBA.
	GLUT_DEPTH.: Buffer de profundidade */
	glutInitWindowSize(400, 400);
	//Indica o tamanho da janela a ser aberta
	glutInitWindowPosition(100, 100);
	//Indica a posi��o inicial da janela.
	glutCreateWindow("Ponto");
	//Cria uma janela para o OpenGL denominada Ponto
	gluOrtho2D(0, 400, 0, 400);
	//Este comando estabelece a escala da tela.
	glutDisplayFunc(redesenha);
	/* Este comando registra que a fun��o void redesenha()
	ser� a rotina a ser chamada sempre que a janela
	necessita ser redesenhada.*/
	glutMainLoop();
	/* Inicia o gerenciamento da janela e m
	ant�m o programa
	em loop, aguardando por eventos.*/
}


//1.1) Baseado no programa 1 � Na linha de comando glBegin(GL_POINTS)substitua o par�metro GL_POINTS

#include <glut.h>

void redesenha() {

	glClearColor(1.0, 1.0, 1.0, 0.0);
	//Indica cor para ser utilizada no fundo da tela.

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	// Pinta os buffers indicados com a cor do glClearColor()
	glColor3f(1.0, 0.0, 0.0);
	// Define o vermelho como cor atual.

	glPointSize(4.0);
	//determine o tamanho do ponto
	glBegin(GL_QUAD_STRIP);

	glColor3f(1.0, 0.0, 0.0); //Red
	glVertex2f(150.0, 150.0);

	glColor3f(0.0, 1.0, 1.0); //Green with Blue 
	glVertex2f(300.0, 150.0);

	glColor3f(1.0, 1.0, 0.0); //Red with Green
	glVertex2f(150.0, 300.0);

	glColor3f(1.0, 0.0, 1.0); //Red with Blue
	glVertex2f(300.0, 300.0);
	glEnd();
	// Plota um ponto na posi��o(200, 200) na tela.
	glFlush();
	// Imprime o conte�do do buffer na tela.
}

void main(int argc, char ** argv) {
	glutInit(&argc, argv);
	// Este comando � utilizado para iniciar a biblioteca GLUT.
	glutInitDisplayMode
	(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
	/* Quando uma janela � criada, seu tipo � determinado pelo Display
	GLUT_SINGLE: Buffer simples
	GLUT_RGBA...: Utilizaremos o modo RGBA.
	GLUT_DEPTH.: Buffer de profundidade */
	glutInitWindowSize(400, 400);
	//Indica o tamanho da janela a ser aberta
	glutInitWindowPosition(100, 100);
	//Indica a posi��o inicial da janela.
	glutCreateWindow("Ponto");
	//Cria uma janela para o OpenGL denominada Ponto
	gluOrtho2D(0, 400, 0, 400);
	//Este comando estabelece a escala da tela.
	glutDisplayFunc(redesenha);
	/* Este comando registra que a fun��o void redesenha()
	ser� a rotina a ser chamada sempre que a janela
	necessita ser redesenhada.*/
	glutMainLoop();
	/* Inicia o gerenciamento da janela e m
	ant�m o programa
	em loop, aguardando por eventos.*/
}