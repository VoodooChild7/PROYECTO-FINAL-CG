#include "figuras.h"


const double PI = 3.1415926535897;
float text_der = 1.0;
float text_izq = 0.0;

void CFiguras::skybox(float largo, float altura, float profundidad, GLuint text, GLuint text1)  //Funcion creacion cielo
{

	GLfloat vertice [8][3] = {
				{0.5*largo ,-0.5*altura, 0.5*profundidad},    //Coordenadas V�rtice 1 V1
				{-0.5*largo ,-0.5*altura , 0.5*profundidad},    //Coordenadas V�rtice 2 V2
				{-0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 3 V3
				{0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 4 V4
				{0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas V�rtice 5 V5
				{0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 6 V6
				{-0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 7 V7
				{-0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas V�rtice 8 V8
				};

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			glNormal3f( 0.0f, 0.0f, -1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			glNormal3f( -1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glNormal3f( 0.0f, 0.0f,1.0f);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			glNormal3f(1.0f, 0.0f, 0.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();
		
		glBegin(GL_POLYGON);  //Top
			glNormal3f(0.0f, -1.0f, 0.0f);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[7]);
		glEnd();

		glBindTexture(GL_TEXTURE_2D, text1);
		glBegin(GL_POLYGON);  //Bottom
			glNormal3f( 0.0f,1.0f, 0.0f);
			glTexCoord2f(20.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(20.0f, 20.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(0.0f, 20.0f); glVertex3fv(vertice[2]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[3]);
		glEnd();
}

void CFiguras::skybox2 (float altura, float largo, float profundidad, GLuint text)  //Funcion creacion prisma
{

	GLfloat vertice [8][3] = {
				{0.5*largo ,-0.5*altura, 0.5*profundidad},    //Coordenadas V�rtice 1 V1
				{-0.5*largo ,-0.5*altura , 0.5*profundidad},    //Coordenadas V�rtice 2 V2
				{-0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 3 V3
				{0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 4 V4
				{0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas V�rtice 5 V5
				{0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 6 V6
				{-0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 7 V7
				{-0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas V�rtice 8 V8
				};

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 0.0f, 0.0f, -1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(0.0f, 3.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(3.0f, 3.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(3.0f, 0.0f); glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			glNormal3f( -1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(3.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(3.0f, 3.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 3.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			glNormal3f(1.0f, 0.0f, 0.0f);
			glTexCoord2f(3.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(3.0f, 3.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 3.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glNormal3f( 0.0f,1.0f, 0.0f);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();
}

void CFiguras::prisma (float altura, float largo, float profundidad, GLuint text)  //Funcion creacion prisma
{

	GLfloat vertice [8][3] = {
				{0.5*largo ,-0.5*altura, 0.5*profundidad},    //Coordenadas V�rtice 1 V1
				{-0.5*largo ,-0.5*altura , 0.5*profundidad},    //Coordenadas V�rtice 2 V2
				{-0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 3 V3
				{0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 4 V4
				{0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas V�rtice 5 V5
				{0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 6 V6
				{-0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 7 V7
				{-0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas V�rtice 8 V8
				};

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			glNormal3f( 0.0f, 0.0f, 1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glNormal3f( 0.0f, 0.0f,-1.0f);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			//glColor3f(1.0,1.0,1.0);
			glNormal3f(-1.0f, 0.0f, 0.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glNormal3f( 0.0f,-1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			glNormal3f( 0.0f, 1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[7]);
		glEnd();
}

void CFiguras::prisma2 (GLuint text, GLuint text2)  //Funcion creacion prisma
{

	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas V�rtice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas V�rtice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas V�rtice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas V�rtice 7 V7
				};

		
		glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			glNormal3f( 0.0f, 0.0f, 1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[1]);
		glEnd();
	
		glBegin(GL_POLYGON);	//Right
			glNormal3f( 1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glNormal3f( 0.0f, 0.0f,-1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			glNormal3f(-1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glNormal3f( 0.0f,-1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
		glEnd();

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		glBegin(GL_POLYGON);  //Top
			glNormal3f( 0.0f,1.0f, 0.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[7]);
		glEnd();
}

void CFiguras::prisma_anun (GLuint text, GLuint text2)  //Funcion creacion prisma
{

	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas V�rtice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas V�rtice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas V�rtice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas V�rtice 7 V7
				};

		
		glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			glNormal3f( 0.0f, 0.0f, 1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[1]);
		glEnd();
	
		glBegin(GL_POLYGON);	//Right
			glNormal3f( 1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glNormal3f( 0.0f, 0.0f,-1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			glNormal3f(-1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glNormal3f( 0.0f,-1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
		glEnd();

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		glBegin(GL_POLYGON);  //Top
		glNormal3f( 0.0f,1.0f, 0.0f);
			glTexCoord2f(text_der, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(text_der, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(text_izq, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(text_izq, 0.0f); glVertex3fv(vertice[7]);
		glEnd();
}

void CFiguras::esfera(GLfloat radio, int meridianos, int paralelos, GLuint text )
{
	GLdouble theta, phi;

	float ctext_s = 1.0/meridianos;
	float ctext_t = 1.0/paralelos;

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.

	float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};
	int i, j;
	float angulom, angulop;
	angulom=2*3.141592654/meridianos;
	angulop=3.141592654/paralelos; 
	for(i=0;i<meridianos;i++)
	{
		for(j=0;j<paralelos;j++)
		{
			v1[0]=radio*cos(angulom*i)*sin(angulop*j);
			v1[1]=radio*cos(angulop*j);
			v1[2]=radio*sin(angulom*i)*sin(angulop*j);
			
			v2[0]=radio*cos(angulom*i)*sin(angulop*(j+1));
			v2[1]=radio*cos(angulop*(j+1));
			v2[2]=radio*sin(angulom*i)*sin(angulop*(j+1));
			
			v3[0]=radio*cos(angulom*(i+1))*sin(angulop*(j+1));
			v3[1]=radio*cos(angulop*(j+1));
			v3[2]=radio*sin(angulom*(i+1))*sin(angulop*(j+1));

			v4[0]=radio*cos(angulom*(i+1))*sin(angulop*j);
			v4[1]=radio*cos(angulop*j);
			v4[2]=radio*sin(angulom*(i+1))*sin(angulop*j);
			
			glBegin(GL_POLYGON);
				glNormal3fv(v1);
				glTexCoord2f(ctext_s*i, -ctext_t*j);	
				glVertex3fv(v1);
				glNormal3fv(v2);
				glTexCoord2f(ctext_s*i, -ctext_t*(j+1));	
				glVertex3fv(v2);
				glNormal3fv(v3);
				glTexCoord2f(ctext_s*(i+1), -ctext_t*(j+1));	
				glVertex3fv(v3);
				glNormal3fv(v4);
				glTexCoord2f(ctext_s*(i+1), -ctext_t*j);	
				glVertex3fv(v4);
			glEnd();
		}
	}
}

void CFiguras::torus(GLfloat radioM, GLfloat radiom, int meridianos, int paralelos )//toroide
{
	float R = 0;
	float r = 0;

	float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};

	int i,j;

	GLdouble angulop = 2*3.1415/paralelos;
	GLdouble angulom = 2*3.1415/meridianos;

	r = (radioM - radiom)/2;
	R = radiom + r;

	for(i=0;i<meridianos;i++)
	{
		for(j=0;j<paralelos;j++)
		{
			
			v1[0]=R*cos(angulom*i) + r*cos(angulom*i)*cos(angulop*j);
			v1[2]=R*sin(angulom*i)+ r*sin(angulom*i)*cos(angulop*j);
			v1[1]=r*sin(angulop*j);

			glNormal3f(v1[0], v1[1], v1[2]);
			
			v2[0]=R*cos(angulom*i) + r*cos(angulom*i)*cos(angulop*(j+1));
			v2[2]=R*sin(angulom*i) + r*sin(angulom*i)*cos(angulop*(j+1));
			v2[1]=r*sin(angulop*(j+1));

			glNormal3f(v2[0], v2[1], v2[2]);

			v3[0]=R*cos(angulom*(i+1)) + r*cos(angulom*(i+1))*cos(angulop*(j+1));
			v3[2]=R*sin(angulom*(i+1)) + r*sin(angulom*(i+1))*cos(angulop*(j+1));
			v3[1]=r*sin(angulop*(j+1));

			glNormal3f(v3[0], v3[1], v3[2]);

			v4[0]=R*cos(angulom*(i+1)) + r*cos(angulom*(i+1))*cos(angulop*j);
			v4[2]=R*sin(angulom*(i+1)) + r*sin(angulom*(i+1))*cos(angulop*j);
			v4[1]=r*sin(angulop*j);

			glNormal3f(v4[0], v4[1], v4[2]);
			
			glBegin(GL_POLYGON);
				glVertex3fv(v1);
				glVertex3fv(v2);
				glVertex3fv(v3);
				glVertex3fv(v4);
			glEnd();
		}
	}
}

void CFiguras::cono(float altura, float radio, int resolucion, GLuint text)//Cono
{
	
	float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};

	float angulo=2*3.14/resolucion;
	float ctext_s = 1.0/resolucion;
	
	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
	for(int i=0; i <resolucion; i++)
	{
		
		v2[0]=radio*cos(angulo*i);
		v2[1]=0;
		v2[2]=radio*sin(angulo*i);

		v3[0]=radio*cos(angulo*(i+1));
		v3[1]=0;
		v3[2]=radio*sin(angulo*(i+1));
		
		//glBegin(GL_LINE_LOOP);
        glBegin(GL_POLYGON); //Construye Base
			glNormal3f( 0.0f, -1.0f, 0.0f);
			glVertex3f(0.0,0.0,0.0);
			glVertex3fv(v2);
			glVertex3fv(v3);
		glEnd();


		glBindTexture(GL_TEXTURE_2D, text);
		glBegin(GL_TRIANGLES);
			glNormal3f( v2[0], 0.0f, v2[2]);
			glTexCoord2f(ctext_s*i, 0.0f);		glVertex3fv(v2);
			glTexCoord2f(ctext_s*(i+1), 0.0f);	glVertex3fv(v3);
			glTexCoord2f(ctext_s*i, 1.0f);	glVertex3f(0.0,altura,0.0);
		glEnd();
	}
}

void CFiguras::cilindro(float radio, float altura, int resolucion, GLuint text)
{
	
	float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};
	float v5[]={0.0, 0.0, 0.0};

	float angulo=2*3.14/resolucion;

	//float ctext_s = 1/resolucion-1;
	float ctext_s = 1.0/resolucion;
	float ctext_t = 0.0;

	
	for(int i=0; i <resolucion; i++)
	{
		 
		v2[0]=radio*cos(angulo*i);
		v2[1]=0;
		v2[2]=radio*sin(angulo*i);

		v3[0]=radio*cos(angulo*(i+1));
		v3[1]=0;
		v3[2]=radio*sin(angulo*(i+1));
	
		v4[0]=radio*cos(angulo*i);
		v4[1]=altura;
		v4[2]=radio*sin(angulo*i);

		v5[0]=radio*cos(angulo*(i+1));
		v5[1]=altura;
		v5[2]=radio*sin(angulo*(i+1));

		glBegin(GL_POLYGON);
			glNormal3f( 0.0f, -1.0f, 0.0f);
			glVertex3f(0.0,0.0,0.0);
			glVertex3fv(v2);
			glVertex3fv(v3);
		glEnd();

		glBegin(GL_POLYGON);
			glNormal3f( 0.0f, 1.0f, 0.0f);
			glVertex3f(0.0,altura,0.0);
			glVertex3fv(v4);
			glVertex3fv(v5);
		glEnd();

		glBindTexture(GL_TEXTURE_2D, text);
		glBegin(GL_POLYGON);
			glNormal3f( v2[0], 0.0f, v2[2]);
			glTexCoord2f(ctext_s*i, 0.0f);		glVertex3fv(v2);
			glTexCoord2f(ctext_s*(i+1), 0.0f);	glVertex3fv(v3);
			glTexCoord2f(ctext_s*(i+1), 1.0f);	glVertex3fv(v5);
			glTexCoord2f(ctext_s*i, 1.0f);		glVertex3fv(v4);
		glEnd();
	}
}	

void CFiguras::rollercoaster(GLuint text1, GLuint text2, GLuint text3, GLuint text4) {
//Entrada y salida del juego
	//Escaleras derechas
	glBindTexture(GL_TEXTURE_2D, text1); //cargamos primera textura
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(2.5, 0.15, 0.15);
		glTexCoord2f(1.5f, 0.0f); glVertex3f(3.5, 0.15, 0.15);
		glTexCoord2f(1.5f, 0.75f); glVertex3f(3.5, 0.15, -0.15);
		glTexCoord2f(0.0f, 0.75f); glVertex3f(2.5, 0.15, -0.15);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(2.5, 0.3, -0.15);
		glTexCoord2f(1.5f, 0.0f); glVertex3f(3.5, 0.3, -0.15);
		glTexCoord2f(1.5f, 0.75f); glVertex3f(3.5, 0.3, -0.45);
		glTexCoord2f(0.0f, 0.75f); glVertex3f(2.5, 0.3, -0.45);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(2.5, 0.45, -0.45);
		glTexCoord2f(1.5f, 0.0f); glVertex3f(3.5, 0.45, -0.45);
		glTexCoord2f(1.5f, 0.75f); glVertex3f(3.5, 0.45, -0.75);
		glTexCoord2f(0.0f, 0.75f); glVertex3f(2.5, 0.45, -0.75);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, text2); //cargamos segunda textura
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(2.5, 0.0, 0.15);
		glTexCoord2f(1.5f, 0.0f); glVertex3f(3.5, 0.0, 0.15);
		glTexCoord2f(1.5f, 0.75f); glVertex3f(3.5, 0.15, 0.15);
		glTexCoord2f(0.0f, 0.75f); glVertex3f(2.5, 0.15, 0.15);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(2.5, 0.15, -0.15);
		glTexCoord2f(1.5f, 0.0f); glVertex3f(3.5, 0.15, -0.15);
		glTexCoord2f(1.5f, 0.75f); glVertex3f(3.5, 0.30, -0.15);
		glTexCoord2f(0.0f, 0.75f); glVertex3f(2.5, 0.30, -0.15);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(2.5, 0.30, -0.45);
		glTexCoord2f(1.5f, 0.0f); glVertex3f(3.5, 0.30, -0.45);
		glTexCoord2f(1.5f, 0.75f); glVertex3f(3.5, 0.45, -0.45);
		glTexCoord2f(0.0f, 0.75f); glVertex3f(2.5, 0.45, -0.45);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(2.5, 0.45, -0.75);
		glTexCoord2f(1.5f, 0.0f); glVertex3f(3.5, 0.45, -0.75);
		glTexCoord2f(1.5f, 0.75f); glVertex3f(3.5, 0.60, -0.75);
		glTexCoord2f(0.0f, 0.75f); glVertex3f(2.5, 0.60, -0.75);
	glEnd();
	//Escaleras izquierdas
	glBindTexture(GL_TEXTURE_2D, text1);//cargamos primera textura
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-3.5, 0.15, 0.15);
		glTexCoord2f(1.5f, 0.0f); glVertex3f(-2.5, 0.15, 0.15);
		glTexCoord2f(1.5f, 0.75f); glVertex3f(-2.5, 0.15, -0.15);
		glTexCoord2f(0.0f, 0.75f); glVertex3f(-3.5, 0.15, -0.15);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-3.5, 0.3, -0.15);
		glTexCoord2f(1.5f, 0.0f); glVertex3f(-2.5, 0.3, -0.15);
		glTexCoord2f(1.5f, 0.75f); glVertex3f(-2.5, 0.3, -0.45);
		glTexCoord2f(0.0f, 0.75f); glVertex3f(-3.5, 0.3, -0.45);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-3.5, 0.45, -0.45);
		glTexCoord2f(1.5f, 0.0f); glVertex3f(-2.5, 0.45, -0.45);
		glTexCoord2f(1.5f, 0.75f); glVertex3f(-2.5, 0.45, -0.75);
		glTexCoord2f(0.0f, 0.75f); glVertex3f(-3.5, 0.45, -0.75);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, text2); //cargamos segunda textura
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-3.5, 0.0, 0.15);
		glTexCoord2f(1.5f, 0.0f); glVertex3f(-2.5, 0.0, 0.15);
		glTexCoord2f(1.5f, 0.75f); glVertex3f(-2.5, 0.15, 0.15);
		glTexCoord2f(0.0f, 0.75f); glVertex3f(-3.5, 0.15, 0.15);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-3.5, 0.15, -0.15);
		glTexCoord2f(1.5f, 0.0f); glVertex3f(-2.5, 0.15, -0.15);
		glTexCoord2f(1.5f, 0.75f); glVertex3f(-2.5, 0.30, -0.15);
		glTexCoord2f(0.0f, 0.75f); glVertex3f(-3.5, 0.30, -0.15);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-3.5, 0.30, -0.45);
		glTexCoord2f(1.5f, 0.0f); glVertex3f(-2.5, 0.30, -0.45);
		glTexCoord2f(1.5f, 0.75f); glVertex3f(-2.5, 0.45, -0.45);
		glTexCoord2f(0.0f, 0.75f); glVertex3f(-3.5, 0.45, -0.45);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-3.5, 0.45, -0.75);
		glTexCoord2f(1.5f, 0.0f); glVertex3f(-2.5, 0.45, -0.75);
		glTexCoord2f(1.5f, 0.75f); glVertex3f(-2.5, 0.60, -0.75);
		glTexCoord2f(0.0f, 0.75f); glVertex3f(-3.5, 0.60, -0.75);
	glEnd();
	//Tarima
	glBindTexture(GL_TEXTURE_2D, text1); //cargamos primera textura
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-4.0, 0.6, 0.15);
		glTexCoord2f(1.0f, 0.0f); glVertex3f(-3.5, 0.6, 0.15);
		glTexCoord2f(1.0f, 4.10f); glVertex3f(-3.5, 0.6, -1.9);
		glTexCoord2f(0.0f, 4.10f); glVertex3f(-4.0, 0.6, -1.9);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-3.5, 0.6, -0.75);
		glTexCoord2f(2.0f, 0.0f); glVertex3f(-2.5, 0.6, -0.75);
		glTexCoord2f(2.0f, 2.3f); glVertex3f(-2.5, 0.6, -1.9);
		glTexCoord2f(0.0f, 2.3f); glVertex3f(-3.5, 0.6, -1.9);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-2.5, 0.6, 0.15);
		glTexCoord2f(10.0f, 0.0f); glVertex3f(2.5, 0.6, 0.15);
		glTexCoord2f(10.0f, 4.1f); glVertex3f(2.5, 0.6, -1.9);
		glTexCoord2f(0.0f, 4.1f); glVertex3f(-2.5, 0.6, -1.9);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(2.5, 0.6, -0.75);
		glTexCoord2f(2.0f, 0.0f); glVertex3f(3.5, 0.6, -0.75);
		glTexCoord2f(2.0f, 2.3f); glVertex3f(3.5, 0.6, -1.9);
		glTexCoord2f(0.0f, 2.3f); glVertex3f(2.5, 0.6, -1.9);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(3.5, 0.6, 0.15);
		glTexCoord2f(1.0f, 0.0f); glVertex3f(4.0, 0.6, 0.15);
		glTexCoord2f(1.0f, 4.10f); glVertex3f(4.0, 0.6, -1.9);
		glTexCoord2f(0.0f, 4.10f); glVertex3f(3.5, 0.6, -1.9);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, text2); //cargamos segunda textura
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-2.5, 0.0, 0.15);
		glTexCoord2f(2.5f, 0.0f); glVertex3f(2.5, 0.0, 0.15);
		glTexCoord2f(2.5f, 2.0f); glVertex3f(2.5, 0.60, 0.15);
		glTexCoord2f(0.0f, 2.0f); glVertex3f(-2.5, 0.60, 0.15);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-4.0, 0.0, 0.15);
		glTexCoord2f(0.25f, 0.0f); glVertex3f(-3.5, 0.0, 0.15);
		glTexCoord2f(0.25f, 2.0f); glVertex3f(-3.5, 0.60, 0.15);
		glTexCoord2f(0.0f, 2.0f); glVertex3f(-4.0, 0.60, 0.15);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(3.5, 0.0, 0.15);
		glTexCoord2f(0.25f, 0.0f); glVertex3f(4.0, 0.0, 0.15);
		glTexCoord2f(0.25f, 2.0f); glVertex3f(4.0, 0.60, 0.15);
		glTexCoord2f(0.0f, 2.0f); glVertex3f(3.5, 0.60, 0.15);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-4.0, 0.0, -2.0);
		glTexCoord2f(4.0f, 0.0f); glVertex3f(4.0, 0.0, -2.0);
		glTexCoord2f(4.0f, 2.0f); glVertex3f(4.0, 0.60, -2.0);
		glTexCoord2f(0.0f, 2.0f); glVertex3f(-4.0, 0.60, -2.0);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-4.0, 0.0, 0.15);
		glTexCoord2f(0.645f, 0.0f); glVertex3f(-4.0, 0.0, -2.0);
		glTexCoord2f(0.645f, 2.0f); glVertex3f(-4.0, 0.60, -2.0);
		glTexCoord2f(0.0f, 2.0f); glVertex3f(-4.0, 0.60, 0.15);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(4.0, 0.0, 0.15);
		glTexCoord2f(0.645f, 0.0f); glVertex3f(4.0, 0.0, -2.0);
		glTexCoord2f(0.645f, 2.0f); glVertex3f(4.0, 0.60, -2.0);
		glTexCoord2f(0.0f, 2.0f); glVertex3f(4.0, 0.60, 0.15);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-3.5, 0.0, 0.15);
		glTexCoord2f(0.645f, 0.0f); glVertex3f(-3.5, 0.0, -0.75);
		glTexCoord2f(0.645f, 2.0f); glVertex3f(-3.5, 0.60, -0.75);
		glTexCoord2f(0.0f, 2.0f); glVertex3f(-3.5, 0.60, 0.15);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-2.5, 0.0, 0.15);
		glTexCoord2f(0.645f, 0.0f); glVertex3f(-2.5, 0.0, -0.75);
		glTexCoord2f(0.645f, 2.0f); glVertex3f(-2.5, 0.60, -0.75);
		glTexCoord2f(0.0f, 2.0f); glVertex3f(-2.5, 0.60, 0.15);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(3.5, 0.0, 0.15);
		glTexCoord2f(0.645f, 0.0f); glVertex3f(3.5, 0.0, -0.75);
		glTexCoord2f(0.645f, 2.0f); glVertex3f(3.5, 0.60, -0.75);
		glTexCoord2f(0.0f, 2.0f); glVertex3f(3.5, 0.60, 0.15);
	glEnd();
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(2.5, 0.0, 0.15);
		glTexCoord2f(0.645f, 0.0f); glVertex3f(2.5, 0.0, -0.75);
		glTexCoord2f(0.645f, 2.0f); glVertex3f(2.5, 0.60, -0.75);
		glTexCoord2f(0.0f, 2.0f); glVertex3f(2.5, 0.60, 0.15);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, text3);
	glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(-4.0, 0.60, -1.9);
		glTexCoord2f(8.0f, 0.0f); glVertex3f(4.0, 0.60, -1.9);
		glTexCoord2f(8.0f, 1.0f); glVertex3f(4.0, 0.60, -2.0);
		glTexCoord2f(0.0f, 1.0f); glVertex3f(-4.0, 0.60, -2.0);
	glEnd();

//Montaña
	CFiguras fig1;
	//Riel recto antes, durante y despues del desenso
	glPushMatrix();
		glTranslatef(-12.0, 0.50, -2.2);
		glRotatef(90, 0, 0, 1);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-4.0, 0.50, -2.2);
		glRotatef(90, 0, 0, 1);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(4.0, 0.50 ,-2.2);
		glRotatef(90, 0,0,1);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(12.0, 0.50, -2.2);
		glRotatef(90, 0, 0, 1);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(20.0, 0.50, -2.2);
		glRotatef(90, 0, 0, 1);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(28.0, 0.50, -2.2);
		glRotatef(90, 0, 0, 1);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(36.0, 0.50, -2.2);
		glRotatef(90, 0, 0, 1);
		fig1.riel1(text4);
	glPopMatrix();
	//Primer giro
	glPushMatrix();
		glTranslatef(36, 0.50, -12.2);
		fig1.riel2(10.05, 9.95, 20, 12, text4);
	glPopMatrix();
	//Primera subida
	glPushMatrix();
		glTranslatef(44.8, 10.5, -12.2);
		glRotatef(90,0,1,0);
		glRotatef(180, 1, 0, 0);
		fig1.riel3(10.05, 9.95, 20, 12, text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(44.8, 10.5, -32.2);
		glRotatef(-90, 0, 1, 0);
		fig1.riel3(10.05, 9.95, 20, 12, text4);
	glPopMatrix();
	//Segundo giro
	glPushMatrix();
		glTranslatef(31, 20.50, -32.2);
		glRotatef(90, 0, 1, 0);
		fig1.riel2(15.05, 14.95, 20, 12, text4);
	glPopMatrix();
	//primera bajada
	glPushMatrix();
		glTranslatef(31.0, 10.5, -47.2);
		glRotatef(180, 0, 1, 0);
		fig1.riel3(10.05, 9.95, 20, 12, text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(11.0, 10.5, -46.0);
		glRotatef(-90, 0, 0, 1);
		fig1.riel3(10.05, 9.95, 20, 12, text4);
	glPopMatrix();
	//Segunda subida
	glPushMatrix();
		glTranslatef(11.0, 5.5, -46.0);
		glRotatef(180, 0, 0, 1);
		fig1.riel3(5.05, 4.95, 20, 12, text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(6.00, 5.5, -46.0);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(6.00, 13.5, -46.0);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-4.0, 21.5, -46.0);
		fig1.riel3(10.05, 9.95, 20, 12, text4);
	glPopMatrix();
	//segunda bajada
	glPushMatrix();
		glTranslatef(-4.0, 25.5, -47.2);
		glRotatef(180, 0, 1, 0);
		fig1.riel3(6.05, 5.95, 20, 12, text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-10.0, 17.5, -46.0);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-10.0, 9.5, -46.0);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-19.0, 9.5, -46.0);
		glRotatef(-90, 0, 0, 1);
		fig1.riel3(9.05, 8.95, 20, 12, text4);
	glPopMatrix();
	//tercer giro
	glPushMatrix();
		glTranslatef(-19, 0.50, -42.25);
		glRotatef(180, 0, 1, 0);
		fig1.riel2(5.0, 4.90, 20, 12, text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-19, 0.50, -42.25);
		glRotatef(-90, 0, 1, 0);
		fig1.riel2(5.0, 4.90, 20, 12, text4);
	glPopMatrix();
	//tercer subida
	glPushMatrix();
		glTranslatef(-19.0, 14.45, -37.3);
		glRotatef(-90, 0, 0, 1);
		fig1.riel3(14.00, 13.90, 20, 12, text4);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(8.9, 14.45, -37.3);
		glRotatef(90, 0, 0, 1);
		fig1.riel3(14.00, 13.90, 20, 12, text4);
	glPopMatrix();
	//tercer bajada
	glPushMatrix();
		glTranslatef(8.9, 14.45, -37.3);
		fig1.riel3(14.00, 13.90, 20, 12, text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(36.7, 14.45, -37.3);
		glRotatef(180, 0, 0, 1);
		fig1.riel3(14.00, 13.90, 20, 12,text4);
	glPopMatrix();
	//cuarto giro
	glPushMatrix();
		glTranslatef(36.7, 0.50, -33.55);
		glRotatef(90, 0, 1, 0);
		fig1.riel2(5.0, 4.90, 20, 12, text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(36.7, 0.50, -33.55);
		fig1.riel2(5.0, 4.90, 20, 12, text4);
	glPopMatrix();
	//segunda parte recta
	glPushMatrix();
		glTranslatef(-12.0, 0.50, -28.6);
		glRotatef(90, 0, 0, 1);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-4.0, 0.50, -28.6);
		glRotatef(90, 0, 0, 1);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(4.0, 0.50, -28.6);
		glRotatef(90, 0, 0, 1);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(12.0, 0.50, -28.6);
		glRotatef(90, 0, 0, 1);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(20.0, 0.50, -28.6);
		glRotatef(90, 0, 0, 1);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(28.0, 0.50, -28.6);
		glRotatef(90, 0, 0, 1);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(36.0, 0.50, -28.6);
		glRotatef(90, 0, 0, 1);
		fig1.riel1(text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(36.7, 0.50, -28.6);
		glRotatef(90, 0, 0, 1);
		fig1.riel4(text4);
	glPopMatrix();
	//ultimo giro
	glPushMatrix();
		glTranslatef(-20, 0.50, -16.0);
		glRotatef(180, 0, 1, 0);
		fig1.riel2(13.85, 13.75, 20, 12, text4);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-20, 0.50, -16.0);
		glRotatef(-90, 0, 1, 0);
		fig1.riel2(13.85, 13.75, 20, 12, text4);
	glPopMatrix();
}

void  CFiguras::riel1(GLuint text1) {
	float radio = 0.05, altura = 8.0, altura2 = 1.2;
	int resolucion = 15;

	float v1[] = { 0.0, 0.0, 0.0 };
	float v2[] = { 0.0, 0.0, 0.0 };
	float v3[] = { 0.0, 0.0, 0.0 };
	float v4[] = { 0.0, 0.0, 0.0 };
	float v5[] = { 0.0, 0.0, 0.0 };

	float angulo = 2 * 3.14 / resolucion;

	float ctext_s = 1.0 / resolucion;
	float ctext_t = 0.0;

	glPushMatrix();
	for (int i = 0; i < resolucion; i++) {
		v2[0] = radio * cos(angulo*i);
		v2[1] = -0.025;
		v2[2] = radio * sin(angulo*i);

		v3[0] = radio * cos(angulo*(i + 1));
		v3[1] = -0.025;
		v3[2] = radio * sin(angulo*(i + 1));

		v4[0] = radio * cos(angulo*i);
		v4[1] = altura + 0.025;
		v4[2] = radio * sin(angulo*i);

		v5[0] = radio * cos(angulo*(i + 1));
		v5[1] = altura + 0.025;
		v5[2] = radio * sin(angulo*(i + 1));

		glBindTexture(GL_TEXTURE_2D, text1);
		glBegin(GL_POLYGON);
		glNormal3f(v2[0], 0.0f, v2[2]);
		glTexCoord2f(ctext_s*i, 0.0f);		glVertex3fv(v2);
		glTexCoord2f(ctext_s*(i + 1), 0.0f);	glVertex3fv(v3);
		glTexCoord2f(ctext_s*(i + 1), 1.0f);	glVertex3fv(v5);
		glTexCoord2f(ctext_s*i, 1.0f);		glVertex3fv(v4);
		glEnd();
	}
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0,0,-1.2);
		for (int i = 0; i < resolucion; i++) {
			v2[0] = radio * cos(angulo*i);
			v2[1] = -0.025;    //este numero se añade para no generar espacios a la hora de conectar varios rieles
			v2[2] = radio * sin(angulo*i);

			v3[0] = radio * cos(angulo*(i + 1));
			v3[1] = -0.025;
			v3[2] = radio * sin(angulo*(i + 1));

			v4[0] = radio * cos(angulo*i);
			v4[1] = altura + 0.025; //este numero se añade para no generar espacios a la hora de conectar varios rieles
			v4[2] = radio * sin(angulo*i);

			v5[0] = radio * cos(angulo*(i + 1));
			v5[1] = altura + 0.025;
			v5[2] = radio * sin(angulo*(i + 1));

			glBindTexture(GL_TEXTURE_2D, text1);
			glBegin(GL_POLYGON);
			glNormal3f(v2[0], 0.0f, v2[2]);
			glTexCoord2f(ctext_s*i, 0.0f);		glVertex3fv(v2);
			glTexCoord2f(ctext_s*(i + 1), 0.0f);	glVertex3fv(v3);
			glTexCoord2f(ctext_s*(i + 1), 1.0f);	glVertex3fv(v5);
			glTexCoord2f(ctext_s*i, 1.0f);		glVertex3fv(v4);
			glEnd();
		}
	glPopMatrix();
	glPushMatrix();
		for (int a = 8; a >= 0; a--) {
			glPushMatrix();
				glTranslatef(0, a, -1.2);
				glRotatef(90, 1, 0, 0);
				for (int i = 0; i < resolucion; i++) {
					v2[0] = radio * cos(angulo*i);
					v2[1] = 0;
					v2[2] = radio * sin(angulo*i);

					v3[0] = radio * cos(angulo*(i + 1));
					v3[1] = 0;
					v3[2] = radio * sin(angulo*(i + 1));

					v4[0] = radio * cos(angulo*i);
					v4[1] = altura2;
					v4[2] = radio * sin(angulo*i);

					v5[0] = radio * cos(angulo*(i + 1));
					v5[1] = altura2;
					v5[2] = radio * sin(angulo*(i + 1));

					glBindTexture(GL_TEXTURE_2D, text1);
					glBegin(GL_POLYGON);
					glNormal3f(v2[0], 0.0f, v2[2]);
					glTexCoord2f(ctext_s*i, 0.0f);		glVertex3fv(v2);
					glTexCoord2f(ctext_s*(i + 1), 0.0f);	glVertex3fv(v3);
					glTexCoord2f(ctext_s*(i + 1), 1.0f);	glVertex3fv(v5);
					glTexCoord2f(ctext_s*i, 1.0f);		glVertex3fv(v4);
					glEnd();
				}
			glPopMatrix();
		}
	glPopMatrix();
}

void  CFiguras::riel2(GLfloat radioM, GLfloat radiom, int meridianos, int paralelos, GLuint text1) {
	CFiguras fig1;

	float R1 = 0, R2 = 0;
	float r1 = 0, r2 = 0;

	float aux = 90 / 5;
	int k = 0;

	float radio = 0.05, altura = 1.0;
	int resolucion = 15;

	float angulo = 2 * 3.14 / resolucion;

	float ctext_s = 1.0 / resolucion;
	float ctext_t = 0.0;
	//barra externa
	float v1[] = { 0.0, 0.0, 0.0 };
	float v2[] = { 0.0, 0.0, 0.0 };
	float v3[] = { 0.0, 0.0, 0.0 };
	float v4[] = { 0.0, 0.0, 0.0 };
	//barra interna
	float v5[] = { 0.0, 0.0, 0.0 };
	float v6[] = { 0.0, 0.0, 0.0 };
	float v7[] = { 0.0, 0.0, 0.0 };
	float v8[] = { 0.0, 0.0, 0.0 };

	int i, j;

	GLfloat radioM1 = radiom - 1, radiom1 = radioM1 - 0.10;

	GLdouble angulop = 2 * 3.1415 / paralelos;
	GLdouble angulom = 2 * 3.1415 / meridianos;

	r1 = (radioM - radiom) / 2;
	R1 = radiom + r1;

	r2 = ((radioM1)-(radiom1)) / 2;
	R2 = (radiom1)-r2;

	for (i = 0; i < meridianos / 4; i++)
	{
		for (j = 0; j < paralelos; j++)
		{
			v1[0] = R1 * cos(angulom*i) + r1 * cos(angulom*i)*cos(angulop*j);
			v1[2] = R1 * sin(angulom*i) + r1 * sin(angulom*i)*cos(angulop*j);
			v1[1] = r1 * sin(angulop*j);

			glNormal3f(v1[0], v1[1], v1[2]);

			v2[0] = R1 * cos(angulom*i) + r1 * cos(angulom*i)*cos(angulop*(j + 1));
			v2[2] = R1 * sin(angulom*i) + r1 * sin(angulom*i)*cos(angulop*(j + 1));
			v2[1] = r1 * sin(angulop*(j + 1));

			glNormal3f(v2[0], v2[1], v2[2]);

			v3[0] = R1 * cos(angulom*(i + 1)) + r1 * cos(angulom*(i + 1))*cos(angulop*(j + 1));
			v3[2] = R1 * sin(angulom*(i + 1)) + r1 * sin(angulom*(i + 1))*cos(angulop*(j + 1));
			v3[1] = r1 * sin(angulop*(j + 1));

			glNormal3f(v3[0], v3[1], v3[2]);

			v4[0] = R1 * cos(angulom*(i + 1)) + r1 * cos(angulom*(i + 1))*cos(angulop*j);
			v4[2] = R1 * sin(angulom*(i + 1)) + r1 * sin(angulom*(i + 1))*cos(angulop*j);
			v4[1] = r1 * sin(angulop*j);

			glNormal3f(v4[0], v4[1], v4[2]);

			v5[0] = R2 * cos(angulom*i) + r2 * cos(angulom*i)*cos(angulop*j);
			v5[2] = R2 * sin(angulom*i) + r2 * sin(angulom*i)*cos(angulop*j);
			v5[1] = r2 * sin(angulop*j);

			glNormal3f(v5[0], v5[1], v5[2]);

			v6[0] = R2 * cos(angulom*i) + r2 * cos(angulom*i)*cos(angulop*(j + 1));
			v6[2] = R2 * sin(angulom*i) + r2 * sin(angulom*i)*cos(angulop*(j + 1));
			v6[1] = r2 * sin(angulop*(j + 1));

			glNormal3f(v6[0], v6[1], v6[2]);

			v7[0] = R2 * cos(angulom*(i + 1)) + r2 * cos(angulom*(i + 1))*cos(angulop*(j + 1));
			v7[2] = R2 * sin(angulom*(i + 1)) + r2 * sin(angulom*(i + 1))*cos(angulop*(j + 1));
			v7[1] = r2 * sin(angulop*(j + 1));

			glNormal3f(v7[0], v7[1], v7[2]);

			v8[0] = R2 * cos(angulom*(i + 1)) + r2 * cos(angulom*(i + 1))*cos(angulop*j);
			v8[2] = R2 * sin(angulom*(i + 1)) + r2 * sin(angulom*(i + 1))*cos(angulop*j);
			v8[1] = r2 * sin(angulop*j);

			glNormal3f(v8[0], v8[1], v8[2]);

			glBindTexture(GL_TEXTURE_2D, text1);
			glBegin(GL_POLYGON);
			glTexCoord2f(ctext_s*i, 0.0f);	glVertex3fv(v1);
			glTexCoord2f(ctext_s*(i + 1), 0.0f); 	glVertex3fv(v2);
			glTexCoord2f(ctext_s*(i + 1), 1.0f);	glVertex3fv(v3);
			glTexCoord2f(ctext_s*i, 1.0f);		glVertex3fv(v4);
			glEnd();

			glBegin(GL_POLYGON);
			glTexCoord2f(ctext_s*i, 0.0f); glVertex3fv(v5);
			glTexCoord2f(ctext_s*(i + 1), 0.0f); glVertex3fv(v6);
			glTexCoord2f(ctext_s*(i + 1), 1.0f); glVertex3fv(v7);
			glTexCoord2f(ctext_s*i, 1.0f); glVertex3fv(v8);
			glEnd();
		}
			glPushMatrix();
				glTranslatef(v1[0], v1[1], v1[2]);
				glRotatef(90, 0, 0, 1);
				glRotatef(-(aux*i), 1, 0, 0);
				fig1.cilindro(0.05, 1.2, 15, text1);
			glPopMatrix();
	}
}

void  CFiguras::riel3(GLfloat radioM, GLfloat radiom, int meridianos, int paralelos, GLuint text1) {
	CFiguras fig1;
	float R = 0;
	float r = 0;

	float v1[] = { 0.0, 0.0, 0.0 };
	float v2[] = { 0.0, 0.0, 0.0 };
	float v3[] = { 0.0, 0.0, 0.0 };
	float v4[] = { 0.0, 0.0, 0.0 };

	//barra interna
	float v5[] = { 0.0, 0.0, 0.0 };
	float v6[] = { 0.0, 0.0, 0.0 };
	float v7[] = { 0.0, 0.0, 0.0 };
	float v8[] = { 0.0, 0.0, 0.0 };

	int i, j;

	GLdouble angulop = 2 * 3.1415 / paralelos;
	GLdouble angulom = 2 * 3.1415 / meridianos;

	r = (radioM - radiom) / 2;
	R = radiom + r;
	
	glPushMatrix();
		for (i = 0; i < meridianos/4; i++)
		{
			for (j = 0; j < paralelos; j++)
			{

				v1[0] = R * cos(angulom*i) + r * cos(angulom*i)*cos(angulop*j);
				v1[1] = R * sin(angulom*i) + r * sin(angulom*i)*cos(angulop*j);
				v1[2] = r * sin(angulop*j);

				glNormal3f(v1[0], v1[1], v1[2]);

				v2[0] = R * cos(angulom*i) + r * cos(angulom*i)*cos(angulop*(j + 1));
				v2[1] = R * sin(angulom*i) + r * sin(angulom*i)*cos(angulop*(j + 1));
				v2[2] = r * sin(angulop*(j + 1));

				glNormal3f(v2[0], v2[1], v2[2]);

				v3[0] = R * cos(angulom*(i + 1)) + r * cos(angulom*(i + 1))*cos(angulop*(j + 1));
				v3[1] = R * sin(angulom*(i + 1)) + r * sin(angulom*(i + 1))*cos(angulop*(j + 1));
				v3[2] = r * sin(angulop*(j + 1));

				glNormal3f(v3[0], v3[1], v3[2]);

				v4[0] = R * cos(angulom*(i + 1)) + r * cos(angulom*(i + 1))*cos(angulop*j);
				v4[1] = R * sin(angulom*(i + 1)) + r * sin(angulom*(i + 1))*cos(angulop*j);
				v4[2] = r * sin(angulop*j);

				glNormal3f(v4[0], v4[1], v4[2]);

				v5[0] = R * cos(angulom*i) + r * cos(angulom*i)*cos(angulop*j);
				v5[1] = R * sin(angulom*i) + r * sin(angulom*i)*cos(angulop*j);
				v5[2] = (r * sin(angulop*j)) - 1.2;

				glNormal3f(v5[0], v5[1], v5[2]);

				v6[0] = R * cos(angulom*i) + r * cos(angulom*i)*cos(angulop*(j + 1));
				v6[1] = R * sin(angulom*i) + r * sin(angulom*i)*cos(angulop*(j + 1));
				v6[2] = (r * sin(angulop*(j + 1))) - 1.2;

				glNormal3f(v6[0], v6[1], v6[2]);

				v7[0] = R * cos(angulom*(i + 1)) + r * cos(angulom*(i + 1))*cos(angulop*(j + 1));
				v7[1] = R * sin(angulom*(i + 1)) + r * sin(angulom*(i + 1))*cos(angulop*(j + 1));
				v7[2] = (r * sin(angulop*(j + 1))) - 1.2;

				glNormal3f(v7[0], v7[1], v7[2]);

				v8[0] = R * cos(angulom*(i + 1)) + r * cos(angulom*(i + 1))*cos(angulop*j);
				v8[1] = R * sin(angulom*(i + 1)) + r * sin(angulom*(i + 1))*cos(angulop*j);
				v8[2] = (r * sin(angulop*j)) - 1.2;

				glNormal3f(v8[0], v8[1], v8[2]);

				glBegin(GL_POLYGON);
					glVertex3fv(v1);
					glVertex3fv(v2);
					glVertex3fv(v3);
					glVertex3fv(v4);
				glEnd();

				glBegin(GL_POLYGON);
					glVertex3fv(v5);
					glVertex3fv(v6);
					glVertex3fv(v7);
					glVertex3fv(v8);
				glEnd();
			}
			glPushMatrix();
				glTranslatef(v1[0], v1[1], v1[2]);
				glRotatef(-90, 1, 0, 0);
				fig1.cilindro(0.05, 1.2, 15, text1);
			glPopMatrix();
		}
	glPopMatrix();
}

void  CFiguras::riel4(GLuint text1) {
	float radio = 0.05, altura = 0.7, altura2 = 1.2;
	int resolucion = 15;

	float v1[] = { 0.0, 0.0, 0.0 };
	float v2[] = { 0.0, 0.0, 0.0 };
	float v3[] = { 0.0, 0.0, 0.0 };
	float v4[] = { 0.0, 0.0, 0.0 };
	float v5[] = { 0.0, 0.0, 0.0 };

	float angulo = 2 * 3.14 / resolucion;

	float ctext_s = 1.0 / resolucion;
	float ctext_t = 0.0;

	glPushMatrix();
		for (int i = 0; i < resolucion; i++) {
		v2[0] = radio * cos(angulo*i);
		v2[1] = -0.025;
		v2[2] = radio * sin(angulo*i);

		v3[0] = radio * cos(angulo*(i + 1));
		v3[1] = -0.025;
		v3[2] = radio * sin(angulo*(i + 1));

		v4[0] = radio * cos(angulo*i);
		v4[1] = altura + 0.025;
		v4[2] = radio * sin(angulo*i);

		v5[0] = radio * cos(angulo*(i + 1));
		v5[1] = altura + 0.025;
		v5[2] = radio * sin(angulo*(i + 1));

		glBindTexture(GL_TEXTURE_2D, text1);
		glBegin(GL_POLYGON);
		glNormal3f(v2[0], 0.0f, v2[2]);
		glTexCoord2f(ctext_s*i, 0.0f);		glVertex3fv(v2);
		glTexCoord2f(ctext_s*(i + 1), 0.0f);	glVertex3fv(v3);
		glTexCoord2f(ctext_s*(i + 1), 1.0f);	glVertex3fv(v5);
		glTexCoord2f(ctext_s*i, 1.0f);		glVertex3fv(v4);
		glEnd();
	}
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0, 0, -1.2);
		for (int i = 0; i < resolucion; i++) {
		v2[0] = radio * cos(angulo*i);
		v2[1] = -0.025;    //este numero se añade para no generar espacios a la hora de conectar varios rieles
		v2[2] = radio * sin(angulo*i);

		v3[0] = radio * cos(angulo*(i + 1));
		v3[1] = -0.025;
		v3[2] = radio * sin(angulo*(i + 1));

		v4[0] = radio * cos(angulo*i);
		v4[1] = altura + 0.025; //este numero se añade para no generar espacios a la hora de conectar varios rieles
		v4[2] = radio * sin(angulo*i);

		v5[0] = radio * cos(angulo*(i + 1));
		v5[1] = altura + 0.025;
		v5[2] = radio * sin(angulo*(i + 1));

		glBindTexture(GL_TEXTURE_2D, text1);
		glBegin(GL_POLYGON);
		glNormal3f(v2[0], 0.0f, v2[2]);
		glTexCoord2f(ctext_s*i, 0.0f);		glVertex3fv(v2);
		glTexCoord2f(ctext_s*(i + 1), 0.0f);	glVertex3fv(v3);
		glTexCoord2f(ctext_s*(i + 1), 1.0f);	glVertex3fv(v5);
		glTexCoord2f(ctext_s*i, 1.0f);		glVertex3fv(v4);
		glEnd();
	}
	glPopMatrix();
	glPushMatrix();
		glPushMatrix();
		glTranslatef(0, 0, -1.2);
		glRotatef(90, 1, 0, 0);
		for (int i = 0; i < resolucion; i++) {
			v2[0] = radio * cos(angulo*i);
			v2[1] = 0;
			v2[2] = radio * sin(angulo*i);

			v3[0] = radio * cos(angulo*(i + 1));
			v3[1] = 0;
			v3[2] = radio * sin(angulo*(i + 1));

			v4[0] = radio * cos(angulo*i);
			v4[1] = altura2;
			v4[2] = radio * sin(angulo*i);

			v5[0] = radio * cos(angulo*(i + 1));
			v5[1] = altura2;
			v5[2] = radio * sin(angulo*(i + 1));

			glBindTexture(GL_TEXTURE_2D, text1);
			glBegin(GL_POLYGON);
			glNormal3f(v2[0], 0.0f, v2[2]);
			glTexCoord2f(ctext_s*i, 0.0f);		glVertex3fv(v2);
			glTexCoord2f(ctext_s*(i + 1), 0.0f);	glVertex3fv(v3);
			glTexCoord2f(ctext_s*(i + 1), 1.0f);	glVertex3fv(v5);
			glTexCoord2f(ctext_s*i, 1.0f);		glVertex3fv(v4);
			glEnd();
		}
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0, 0.7, -1.2);
			glRotatef(90, 1, 0, 0);
			for (int i = 0; i < resolucion; i++) {
				v2[0] = radio * cos(angulo*i);
				v2[1] = 0;
				v2[2] = radio * sin(angulo*i);

				v3[0] = radio * cos(angulo*(i + 1));
				v3[1] = 0;
				v3[2] = radio * sin(angulo*(i + 1));

				v4[0] = radio * cos(angulo*i);
				v4[1] = altura2;
				v4[2] = radio * sin(angulo*i);

				v5[0] = radio * cos(angulo*(i + 1));
				v5[1] = altura2;
				v5[2] = radio * sin(angulo*(i + 1));

				glBindTexture(GL_TEXTURE_2D, text1);
				glBegin(GL_POLYGON);
				glNormal3f(v2[0], 0.0f, v2[2]);
				glTexCoord2f(ctext_s*i, 0.0f);		glVertex3fv(v2);
				glTexCoord2f(ctext_s*(i + 1), 0.0f);	glVertex3fv(v3);
				glTexCoord2f(ctext_s*(i + 1), 1.0f);	glVertex3fv(v5);
				glTexCoord2f(ctext_s*i, 1.0f);		glVertex3fv(v4);
				glEnd();
			}
		glPopMatrix();
	glPopMatrix();
}