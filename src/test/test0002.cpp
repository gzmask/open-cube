/* GOAL:
	1. A camera to view the scene;
	2. A control schema to control the camera;
	3. change this project from C to C++ ==done

*/

#ifdef __APPLE__
#  	include <OpenGL/gl.h>
#  	include <OpenGL/glu.h>
#  	include <GLUT/glut.h>
#else
#  	include <GL/gl.h>
#  	include <GL/glu.h>
#  	include <GL/glut.h>
#endif

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
	glColor3f (0.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-0.75f, -0.75f);
	glVertex2f( 0.75f, -0.75f);
	glVertex2f( 0.75f,  0.75f);
	glVertex2f(-0.75f,  0.75f);
	glEnd();

	glFlush();
	glutSwapBuffers();
}

void reshape(int width, int height)
{
	glViewport(0, 0, width, height);
}

void idle(void)
{
	glutPostRedisplay();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(800, 600);

	glutCreateWindow("GLUT Program");

	glClearColor(1.0, 0.0, 0.0, 0.0); 
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutIdleFunc(idle);

	glutMainLoop();
	return 0;
}


/*error message
*/
