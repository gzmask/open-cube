//this is the test case that can be launched with make and shows basic openGL stuff

#ifdef __APPLE__
#  include <OpenGL/gl.h>
#  include <OpenGL/glu.h>
#  include <GLUT/glut.h>
#else
#  include <GL/gl.h>
#  include <GL/glu.h>
#  include <GL/glut.h>
#endif

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    glBegin(GL_QUADS);
    glVertex2f(-0.75f, -0.75f);
    glVertex2f( 0.75f, -0.75f);
    glVertex2f( 0.75f,  0.75f);
    glVertex2f(-0.75f,  0.75f);
    glEnd();
    
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
    
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(idle);
    
    glutMainLoop();
    return 0;
}


/*error message
*/
