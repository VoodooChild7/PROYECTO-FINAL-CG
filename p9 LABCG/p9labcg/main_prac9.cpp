//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): Angeles Lopez Michael Josefh*********************************//
//*************											******//
//*************											******//
//************************************************************//
//************************************************************//

#include "texture.h"
#include "figuras.h"
#include "Camera.h"


//NEW//////////////////NEW//////////////////NEW//////////////////NEW////////////////
static GLuint ciudad_display_list;	//Display List for the Monito


int w = 500, h = 500;
int frame=0,time,timebase=0;
int deltaTime = 0;
char s[30];

CCamera objCamera;	//Create objet Camera

GLfloat g_lookupdown = 0.0f;    // Look Position In The Z-Axis (NEW) 

int font=(int)GLUT_BITMAP_HELVETICA_18;

GLfloat Diffuse[]= { 0.5f, 0.5f, 0.5f, 1.0f };				// Diffuse Light Values
GLfloat Specular[] = { 1.0, 1.0, 1.0, 1.0 };				// Specular Light Values
GLfloat Position[]= { 0.0f, 7.0f, -5.0f, 0.0f };			// Light Position
GLfloat Position2[]= { 0.0f, 0.0f, -5.0f, 1.0f };			// Light Position

CTexture text1;
CTexture text2;
CTexture text3;	//Flecha
CTexture text4;	//Pavimento
CTexture text5;	//Pasto01
CTexture text6;	//Casa01

CTexture tree;
CTexture edificio;
CTexture t_ESFERA1;
CTexture t_arbol;
CTexture t_MADERA2;
CTexture t_ESFERA2;
CTexture t_ESFERA3;
CTexture t_cascada;
CTexture t_fachada1;
CTexture n;
CTexture circo;
CTexture paredamarilla;
CTexture parednaranja;
CTexture tasas;
CTexture paredgris1;
CTexture paredgris2;
CTexture rojo;
CTexture verde;
CTexture verdeclaro;


CFiguras cubo;
CFiguras sky;
CFiguras miobj;
//END NEW//////////////////////////////////////////


CFiguras fig1;
CFiguras fig2;
CFiguras fig3;
CFiguras fig4;	//Pasto01
CFiguras fig5;	//Casa01
CFiguras fig6;
CFiguras fig7;	//Para crear Monito

void ciudad ()
{

		glPushMatrix(); //Camino1
			glTranslatef(23.5,0.0,0.0);
			glScalef(40,0.1,7);
			glDisable(GL_LIGHTING);
			fig3.prisma2(text4.GLindex, 0);
			glEnable(GL_LIGHTING);
		glPopMatrix();

		glPushMatrix(); //Camino2
			glTranslatef(-23.5,0.0,0.0);
			glScalef(40,0.1,7);
			glDisable(GL_LIGHTING);
			fig3.prisma2(text4.GLindex, 0);
			glEnable(GL_LIGHTING);
		glPopMatrix();

		glPushMatrix(); //Pasto
			glTranslatef(0.0,0.0,-4.0);
			glScalef(87,0.1,1);
			glDisable(GL_LIGHTING);
			fig4.prisma2(text5.GLindex, 0);
			glEnable(GL_LIGHTING);
		glPopMatrix();

		glPushMatrix(); //Pasto
			glTranslatef(0.0,0.0,4.0);
			glScalef(87,0.1,1);
			glDisable(GL_LIGHTING);
			fig4.prisma2(text5.GLindex, 0);
			glEnable(GL_LIGHTING);
		glPopMatrix();

		glPushMatrix(); //Casa01
			glTranslatef(0.0,3.0,7.0);
			glRotatef(90,1,0,0);
			glRotatef(180,0,0,1);
			glScalef(6,5.0,6);
			glDisable(GL_LIGHTING);
			fig5.prisma2(t_fachada1.GLindex, 0);
			glEnable(GL_LIGHTING);
		glPopMatrix();

		glPushMatrix(); //Casa01
			glTranslatef(0.0,3.0,-7.0);
			glRotatef(90,1,0,0);
			//glRotatef(180,0,0,1);
			glScalef(6,5.0,6);
			glDisable(GL_LIGHTING);
			fig5.prisma2(text6.GLindex, 0);
			glEnable(GL_LIGHTING);
		glPopMatrix();
}

void arbol()
{
	glPushMatrix();
					glDisable(GL_LIGHTING);
					glEnable( GL_ALPHA_TEST );
					//glDisable(GL_DEPTH_TEST);   // Turn Depth Testing Off
					glAlphaFunc( GL_GREATER, 0.1 );
					//glEnable(GL_BLEND);     // Turn Blending On
					//glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
					glBindTexture(GL_TEXTURE_2D, tree.GLindex);
					glBegin(GL_QUADS); //plano
						glColor3f(1.0, 1.0, 1.0);
						glNormal3f( 0.0f, 0.0f, 1.0f);
						glTexCoord2f(0.0f, 0.0f); glVertex3f(-10.0, 0.0, 0.0);
						glTexCoord2f(1.0f, 0.0f); glVertex3f(10.0, 0.0, 0.0);
						glTexCoord2f(1.0f, 1.0f); glVertex3f(10.0, 20.0, 0.0);
						glTexCoord2f(0.0f, 1.0f); glVertex3f(-10.0, 20.0, 0.0);
					glEnd();
			glPopMatrix();

			glPushMatrix();
					glRotatef(45, 0, 1, 0);
					glBegin(GL_QUADS); //plano
						glColor3f(1.0, 1.0, 1.0);
						glNormal3f( 0.0f, 0.0f, 1.0f);
						glTexCoord2f(0.0f, 0.0f); glVertex3f(-10.0, 0.0, 0.0);
						glTexCoord2f(1.0f, 0.0f); glVertex3f(10.0, 0.0, 0.0);
						glTexCoord2f(1.0f, 1.0f); glVertex3f(10.0, 20.0, 0.0);
						glTexCoord2f(0.0f, 1.0f); glVertex3f(-10.0, 20.0, 0.0);
					glEnd();
			glPopMatrix();

			glPushMatrix();
					glRotatef(-45, 0, 1, 0);
					glBegin(GL_QUADS); //plano
						glColor3f(1.0, 1.0, 1.0);
						glNormal3f( 0.0f, 0.0f, 1.0f);
						glTexCoord2f(0.0f, 0.0f); glVertex3f(-10.0, 0.0, 0.0);
						glTexCoord2f(1.0f, 0.0f); glVertex3f(10.0, 0.0, 0.0);
						glTexCoord2f(1.0f, 1.0f); glVertex3f(10.0, 20.0, 0.0);
						glTexCoord2f(0.0f, 1.0f); glVertex3f(-10.0, 20.0, 0.0);
					glEnd();
			glPopMatrix();

			glPushMatrix();
					glRotatef(90, 0, 1, 0);
					glBegin(GL_QUADS); //plano
						glColor3f(1.0, 1.0, 1.0);
						glNormal3f( 0.0f, 0.0f, 1.0f);
						glTexCoord2f(0.0f, 0.0f); glVertex3f(-10.0, 0.0, 0.0);
						glTexCoord2f(1.0f, 0.0f); glVertex3f(10.0, 0.0, 0.0);
						glTexCoord2f(1.0f, 1.0f); glVertex3f(10.0, 20.0, 0.0);
						glTexCoord2f(0.0f, 1.0f); glVertex3f(-10.0, 20.0, 0.0);
					glEnd();
					glDisable( GL_ALPHA_TEST );
					//glDisable(GL_BLEND);        // Turn Blending Off
					//glEnable(GL_DEPTH_TEST);    // Turn Depth Testing On
					glEnable(GL_LIGHTING);
				
			glPopMatrix();
}

GLuint createDL() 
{
	GLuint ciudadDL;
	//GLuint cieloDL;

	// Create the id for the list
	ciudadDL = glGenLists(1);
	// start list
	glNewList(ciudadDL,GL_COMPILE);
	// call the function that contains 
	// the rendering commands
		ciudad();
		//monito();
	// endList
	glEndList();

	return(ciudadDL);
}
			
void InitGL ( GLvoid )     // Inicializamos parametros
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo	

	glEnable(GL_TEXTURE_2D);

	glShadeModel (GL_SMOOTH);
	//Para construir la figura comentar esto
	glLightfv(GL_LIGHT1, GL_POSITION, Position);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, Diffuse);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);

	glEnable ( GL_COLOR_MATERIAL );

	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);

	glEnable(GL_AUTO_NORMAL);
	glEnable(GL_NORMALIZE);
    
    text1.LoadBMP("01.bmp");
	text1.BuildGLTexture();
	text1.ReleaseImage();

	text2.LoadBMP("logopumas.bmp");
	text2.BuildGLTexture();
	text2.ReleaseImage();

	text3.LoadTGA("city/arrow.tga");
	text3.BuildGLTexture();
	text3.ReleaseImage();

	text4.LoadTGA("city/pavimento.tga");
	text4.BuildGLTexture();
	text4.ReleaseImage();

	text5.LoadTGA("city/pasto01.tga");
	text5.BuildGLTexture();
	text5.ReleaseImage();

	text6.LoadTGA("city/casa01.tga");
	text6.BuildGLTexture();
	text6.ReleaseImage();


	tree.LoadTGA("tree01.tga");
	tree.BuildGLTexture();
	tree.ReleaseImage();

	edificio.LoadTGA("edificio.tga");
	edificio.BuildGLTexture();
	edificio.ReleaseImage();

	t_ESFERA1.LoadTGA("ESFERA1.tga");
	t_ESFERA1.BuildGLTexture();
	t_ESFERA1.ReleaseImage();


	t_arbol.LoadTGA("arbol.tga");
	t_arbol.BuildGLTexture();
	t_arbol.ReleaseImage();


	t_MADERA2.LoadTGA("MADERA2.tga");
	t_MADERA2.BuildGLTexture();
	t_MADERA2.ReleaseImage();


	t_ESFERA2.LoadTGA("ESFERA2.tga");
	t_ESFERA2.BuildGLTexture();
	t_ESFERA2.ReleaseImage();


	t_ESFERA3.LoadTGA("ESFERA3.tga");
	t_ESFERA3.BuildGLTexture();
	t_ESFERA3.ReleaseImage();


	t_cascada.LoadTGA("cascada.tga");
	t_cascada.BuildGLTexture();
	t_cascada.ReleaseImage();



	t_fachada1.LoadTGA("fachada1.tga");
	t_fachada1.BuildGLTexture();
	t_fachada1.ReleaseImage();

	n.LoadTGA("n.tga");
	n.BuildGLTexture();
	n.ReleaseImage();

	circo.LoadTGA("circo.tga");
	circo.BuildGLTexture();
	circo.ReleaseImage();
	   
	paredamarilla.LoadTGA("paredamarilla.tga");
	paredamarilla.BuildGLTexture();
	paredamarilla.ReleaseImage();

	parednaranja.LoadTGA("parednaranja.tga");
	parednaranja.BuildGLTexture();
	parednaranja.ReleaseImage();

	paredgris1.LoadTGA("paredgris1.tga");
	paredgris1.BuildGLTexture();
	paredgris1.ReleaseImage();


	paredgris2.LoadTGA("paredgris2.tga");
	paredgris2.BuildGLTexture();
	paredgris2.ReleaseImage();

	tasas.LoadTGA("tasas.tga");
	tasas.BuildGLTexture();
	tasas.ReleaseImage();

	rojo.LoadTGA("rojo.tga");
	rojo.BuildGLTexture();
	rojo.ReleaseImage();

	verde.LoadTGA("verde.tga");
	verde.BuildGLTexture();
	verde.ReleaseImage();


	verdeclaro.LoadTGA("verdeclaro.tga");
	verdeclaro.BuildGLTexture();
	verdeclaro.ReleaseImage();


	//END NEW//////////////////////////////

	objCamera.Position_Camera(0,2.5f,3, 0,2.5f,0, 0, 1, 0);

	//NEW Crear una lista de dibujo
	ciudad_display_list = createDL();

}

void pintaTexto(float x, float y, float z, void *font,char *string)
{
  
  char *c;     //Almacena los caracteres a escribir
  glRasterPos3f(x, y, z);	//Posicion apartir del centro de la ventana
  //glWindowPos2i(150,100);
  for (c=string; *c != '\0'; c++) //Condicion de fin de cadena
  {
    glutBitmapCharacter(font, *c); //imprime
  }
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glLoadIdentity();
	
		
	glPushMatrix();
		glRotatef(g_lookupdown,1.0f,0,0);

		gluLookAt(	objCamera.mPos.x,  objCamera.mPos.y,  objCamera.mPos.z,	
					objCamera.mView.x, objCamera.mView.y, objCamera.mView.z,	
					objCamera.mUp.x,   objCamera.mUp.y,   objCamera.mUp.z);
	

		glPushMatrix();		
			glPushMatrix(); //Creamos cielo
				glDisable(GL_LIGHTING);
				glTranslatef(0,60,0);
				fig1.skybox(130.0, 130.0, 130.0,text1.GLindex);
				glEnable(GL_LIGHTING);
			glPopMatrix();

			glPushMatrix();
				glEnable ( GL_COLOR_MATERIAL );
					glColor3f(1, 1, 1);
					glCallList(ciudad_display_list);
				glDisable ( GL_COLOR_MATERIAL );
			glPopMatrix();
			
			glPushMatrix(); //Flecha
				glScalef(7,0.1,7);
				glDisable(GL_LIGHTING);
				fig3.prisma_anun(text3.GLindex, 0);
				glEnable(GL_LIGHTING);
			glPopMatrix();

			glEnable ( GL_COLOR_MATERIAL );
			/*glPushMatrix();
				glTranslatef(-30, 0, 10);
				arbol();
			glPopMatrix();*/


			
			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////
		////////////////JUEGO GIRATORIO CON ESFERAS

			glPopMatrix();
			glPushMatrix();     //BASE
			glTranslatef(25.0f, 0.0f, 0.0f);
			miobj.cilindro(5.0, 0.5, 30, rojo.GLindex);
			glPopMatrix();
			

			
			glPushMatrix();     //BASE 2
			glTranslatef(25.0f, 0.5f, 0.0f);
			miobj.cilindro(4.0, 2.0, 30, paredamarilla.GLindex);
			glPopMatrix();


			glPushMatrix();     //BASE 3
			glTranslatef(25.0f, 1.0f, 0.0f);
			miobj.cilindro(1.5, 5.0, 30, parednaranja.GLindex);
			glPopMatrix();

			glPushMatrix();     //BASE 4
			glTranslatef(25.0f, 6.0f, 0.0f);
			miobj.cilindro(0.5, 5.0, 30, n.GLindex);
			glPopMatrix();

			glPushMatrix();     //TECHO
			glTranslatef(25.0f, 10.0f, 0.0f);
			miobj.cilindro(4.5, 1.0, 30, text5.GLindex);
			glPopMatrix();

			glPushMatrix();     //sujetador 1
			glTranslatef(22.0f, 6.0f, 0.5f);
			miobj.cilindro(0.2, 5.0, 30, paredgris2.GLindex);
			glPopMatrix();


			glPushMatrix();     //sujetador 2
			glTranslatef(28.0f, 6.0f, 0.5f);
			miobj.cilindro(0.2, 5.0, 30, paredgris2.GLindex);
			glPopMatrix();

			glPushMatrix();     //sujetador 3
			glTranslatef(25.0f, 6.0f, -2.5f);
			miobj.cilindro(0.2, 5.0, 30, paredgris2.GLindex);
			glPopMatrix();

			glPushMatrix();     //sujetador 4
			glTranslatef(25.0f, 6.0f, 2.5f);
			miobj.cilindro(0.2, 5.0, 30, paredgris2.GLindex);
			glPopMatrix();

			glPushMatrix();  //ESFERA DEL JUEGO 1
			glTranslatef(22.0f, 6.0f, 0.5f);
			miobj.esfera(0.5, 20, 20, t_ESFERA2.GLindex);
			glPopMatrix();
			
			glPushMatrix();  //ESFERA DEL JUEGO 2
			glTranslatef(28.0f, 6.0f, 0.5f);
			miobj.esfera(0.5, 20, 20, t_ESFERA2.GLindex);
			glPopMatrix();

			glPushMatrix();  //ESFERA DEL JUEGO 3
			glTranslatef(25.0f, 6.0f, -2.5f);
			miobj.esfera(0.5, 20, 20, t_ESFERA2.GLindex);
			glPopMatrix();

			glPushMatrix();  //ESFERA DEL JUEGO 4
			glTranslatef(25.0f, 6.0f, 2.5f);
			miobj.esfera(0.5, 20, 20, t_ESFERA2.GLindex);
			glPopMatrix();

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			///////////////////////////////////////////////

		//////////////////	Iniciamos el segundo juego mecanico



			glPushMatrix();     //BASE 1
			glTranslatef(-35.0f, 0.5f, -5.0f);
			miobj.prisma(1.0, 2.0, 1.0, paredgris2.GLindex);
			glPopMatrix();

			glPushMatrix();     //BASE 2
			glTranslatef(-35.0f, 0.5f, 5.0f);
			miobj.prisma(1.0, 2.0, 1.0, paredgris2.GLindex);
			glPopMatrix();

			glPushMatrix();     //BASE 3
			glTranslatef(-20.0f, 0.5f, -5.0f);
			miobj.prisma(1.0, 2.0, 1.0, paredgris2.GLindex);
			glPopMatrix();

			glPushMatrix();     //BASE 4
			glTranslatef(-20.0f, 0.5f, 5.0f);
			miobj.prisma(1.0, 2.0, 1.0, paredgris2.GLindex);
			glPopMatrix();

			glPushMatrix();     //sujetador 1
			glTranslatef(-35.0f, 0.9f, -5.0f);
			glRotatef(-15, 1.0f, 10.0f, 50.0f);
			miobj.cilindro(0.2, 20.0, 30, paredgris1.GLindex);
			glPopMatrix();

			glPushMatrix();     //sujetador 2
			glTranslatef(-35.0f, 0.9f, 5.0f);
			glRotatef(-15, 1.0f, 10.0f, 50.0f);
			miobj.cilindro(0.2, 20.0, 30, paredgris1.GLindex);
			glPopMatrix();

			glPushMatrix();     //sujetador 3
			glTranslatef(-20.0f, 0.9f, -5.0f);
			glRotatef(15, 1.0f, 1.0f, 50.0f);
			miobj.cilindro(0.2, 20.0, 30, paredgris1.GLindex);
			glPopMatrix();

			glPushMatrix();     //sujetador 4
			glTranslatef(-20.0f, 0.9f, 5.0f);
			glRotatef(15, 1.0f, 1.0f, 50.0f);
			miobj.cilindro(0.2, 20.0, 30, paredgris1.GLindex);
			glPopMatrix();

			glPushMatrix();     //circulo atras
			glTranslatef(-27.5f, 21.0f, -5.25f);
			glRotatef(120, 1.0f, 1.0f, 1.0f);
			miobj.cilindro(3.0, 0.8, 30, tasas.GLindex);
			glPopMatrix();

			glPushMatrix();     //cirdulo de enmedio
			glTranslatef(-27.5f, 21.0f, 0.0f);
			glRotatef(120, 1.0f, 1.0f, 1.0f);
			miobj.cilindro(3.0, 0.8, 30, tasas.GLindex);
			glPopMatrix();

			glPushMatrix();     //circulo enfrente
			glTranslatef(-27.5f, 21.0f, 4.75f);
			glRotatef(120, 1.0f, 1.0f, 1.0f);
			miobj.cilindro(3.0, 0.8, 30, tasas.GLindex);
			glPopMatrix();

			glPushMatrix();     //barra del circulo de atras
			glTranslatef(-27.5f, 21.0f, -4.45f);
			glRotatef(120, 1.0f, 1.0f, 1.0f);
			miobj.cilindro(0.5, 4.5, 30, paredamarilla.GLindex);
			glPopMatrix();

			glPushMatrix();     //barra del circulo de enfrente
			glTranslatef(-27.5f, 21.0f, 0.45f);
			glRotatef(120, 1.0f, 1.0f, 1.0f);
			miobj.cilindro(0.5, 4.5, 30, paredamarilla.GLindex);
			glPopMatrix();

			glPushMatrix();     //barra baja del circulo de enmedio
			glTranslatef(-27.5f, 13.0f, 0.4f);
			miobj.cilindro(0.3, 5.0, 30, n.GLindex);
			glPopMatrix();

			glPushMatrix();     //circulo bajo de enmedio
			glTranslatef(-27.5f, 11.5f, 0.4f);
			miobj.cilindro(4.0, 1.0, 30, rojo.GLindex);
			glPopMatrix();

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			//INICIAMOS JUEGO MECANICO DE TASAS GIRATORIAS

			
			glPushMatrix();     //BASE
			glTranslatef(0.0f, 0.0f, 20.0f);
			miobj.cilindro(5.0, 0.5, 30, t_MADERA2.GLindex);
			glPopMatrix();

			glPushMatrix();     //BASE PARA LA TASA1
			glTranslatef(2.0f, 0.5f, 20.0f);
			miobj.cilindro(1.0, 0.2, 30, paredamarilla.GLindex);
			glPopMatrix();

			glPushMatrix();     //BASE PARA LA TASA2
			glTranslatef(-2.0f, 0.5f, 20.0f);
			miobj.cilindro(1.0, 0.2, 30, paredamarilla.GLindex);
			glPopMatrix();

			glPushMatrix();     //BASE PARA LA TASA3
			glTranslatef(0.0f, 0.5f, 23.0f);
			miobj.cilindro(1.0, 0.2, 30, paredamarilla.GLindex);
			glPopMatrix();

			glPushMatrix();     //BASE PARA LA TASA4
			glTranslatef(0.0f, 0.5f, 17.0f);
			miobj.cilindro(1.0, 0.2, 30, paredamarilla.GLindex);
			glPopMatrix();

			glPushMatrix();    //TASA1
			glTranslatef(-2.0f, 1.5f, 20.0f);
			glScalef(3.2, -0.35, 3.2);
			miobj.cono(2.0, 0.4, 100, tasas.GLindex);
			glPopMatrix();
			

			glPushMatrix();    //TASA2
			glTranslatef(2.0f, 1.5f, 20.0f);
			glScalef(3.2, -0.35, 3.2);
			miobj.cono(2.0, 0.4, 100, tasas.GLindex);
			glPopMatrix();
			

			glPushMatrix();    //TASA3
			glTranslatef(0.0f, 1.5f, 23.0f);
			glScalef(3.2, -0.35, 3.2);
			miobj.cono(2.0, 0.4, 100, tasas.GLindex);
			glPopMatrix();
			
			glPushMatrix();    //TASA3
			glTranslatef(0.0f, 1.5f, 17.0f);
			glScalef(3.2, -0.35, 3.2);
			miobj.cono(2.0, 0.4, 100, tasas.GLindex);
			glPopMatrix();

			glPushMatrix();     //BARRA 
			glTranslatef(0.0f, 0.0f, 20.0f);
			miobj.cilindro(0.3, 7.0, 30, paredgris1.GLindex);
			glPopMatrix();

			glPushMatrix();    //TECHO
			glTranslatef(0.0f, 7.0f, 20.0f);
			glScalef(15.2, 0.45, 10.2);
			miobj.cono(2.0, 0.4, 100, circo.GLindex);
			glPopMatrix();

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			//AVIONSITO

			glPushMatrix();     //BARRA 
			glTranslatef(0.0f, 0.0f, -20.0f);
			miobj.cilindro(0.3, 7.0, 30, n.GLindex);
			glPopMatrix();

			glPushMatrix();     //cubo de la barra
			glTranslatef(0.0f, 7.5f, -20.0f);
			miobj.prisma(4.0, 1.0, 2.0, parednaranja.GLindex);
			glPopMatrix();

			glPushMatrix();     //brazo cubo de la barra
			glTranslatef(2.0f, 7.5f, -20.0f);
			miobj.prisma(1.0, 4.0, 1.0, circo.GLindex);
			glPopMatrix();

			glPushMatrix();     //brazo arriba cubo de la barra
			glTranslatef(4.0f, 9.5f, -20.0f);
			miobj.prisma(5.0, 0.5, 1.0, paredgris1.GLindex);
			glPopMatrix();

			glPushMatrix();     //cuerpo del avion
			glTranslatef(4.0f, 13.0f, -20.0f);
			miobj.prisma(2.0, 1.0, 6.0, rojo.GLindex);
			glPopMatrix();

			glPushMatrix();     //cola del avion
			glTranslatef(4.0f, 14.0f, -23.2f);
			miobj.prisma(4.0, 1.0, 0.5, rojo.GLindex);
			glPopMatrix();

			glPushMatrix();     //ala izq
			glTranslatef(2.5f, 13.0f, -18.5f);
			miobj.prisma(1.0, 2.5, 1.0, paredamarilla.GLindex);
			glPopMatrix();

			glPushMatrix();     //ala der
			glTranslatef(5.5f, 13.0f, -18.5f);
			miobj.prisma(1.0, 2.5, 1.0, paredamarilla.GLindex);
			glPopMatrix();

			glPushMatrix();     //helice 
			glTranslatef(4.0f, 13.0f, -17.0f);
			miobj.prisma(0.2, 4., 0.2, paredgris2.GLindex);
			glPopMatrix();

			glPushMatrix();    //cupula
			glTranslatef(4.0f, 14.0f, -20.0f);
			glScalef(3.2, 0.5, 3.2);
			miobj.cono(2.0, 0.4, 100, n.GLindex);
			glPopMatrix();

	glutSwapBuffers ( );
	glPopMatrix();

}

void animacion()
{
	
		fig3.text_izq-= 0.001;
		fig3.text_der-= 0.001;
		if(fig3.text_izq<-1)
			fig3.text_izq=0;
		if(fig3.text_der<0)
			fig3.text_der=1;


	glutPostRedisplay();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
  if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);	

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 170.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {

		case 'w':   //Movimientos de camara
		case 'W':
			objCamera.Move_Camera( CAMERASPEED+0.2 );
			break;

		case 's':
		case 'S':
			objCamera.Move_Camera(-(CAMERASPEED+0.2));
			break;

		case 'a':
		case 'A':
			objCamera.Strafe_Camera(-(CAMERASPEED+0.4));
			break;

		case 'd':
		case 'D':
			objCamera.Strafe_Camera( CAMERASPEED+0.4 );
			break;

		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
			break;        
		default:        // Cualquier otra
			break;
  }

  glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
  switch ( a_keys ) {
	case GLUT_KEY_PAGE_UP:
		objCamera.UpDown_Camera(CAMERASPEED);
		break;

	case GLUT_KEY_PAGE_DOWN:
		objCamera.UpDown_Camera(-CAMERASPEED);
		break;

    case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		g_lookupdown -= 1.0f;
		break;

    case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		g_lookupdown += 1.0f;
		break;

	case GLUT_KEY_LEFT:
		objCamera.Rotate_View(-CAMERASPEED);
		break;

	case GLUT_KEY_RIGHT:
		objCamera.Rotate_View( CAMERASPEED);
		break;

    default:
		break;
  }
  glutPostRedisplay();
}

int main ( int argc, char** argv )   // Main Function
{

  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Final"); // Nombre de la Ventana
  //glutFullScreen     ( );         // Full Screen
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut función de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutIdleFunc		  ( animacion );


  glutMainLoop        ( );          // 

  return 0;
}
