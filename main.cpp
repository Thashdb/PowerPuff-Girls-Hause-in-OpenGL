// thais d. e thalita c.
// 2024
#include <GL/gl.h>
#include <GL/glut.h>

#include <cmath>
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

#include "../include/formas.h"
#include "../include/casa.h"
#include "../include/colors.h"
#include "../include/outside.h"
#include "../include/motion.h"

int width=1200, height=580;
int SCREEN_WIDTH, SCREEN_HEIGHT;

vector<RainDrop> raindrops(500);    //vetor para armazenar chuva
float cloudX=0.0; //animação nuvens em x
float redColor = 1.0f;  //cor janela piscando
float girlsx=0.0, girlsy=0.0; //animacao meninas
float speed=0.05, acceleration=0.005;

void window(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(width, height);
    SCREEN_WIDTH = glutGet(GLUT_SCREEN_WIDTH);
    SCREEN_HEIGHT = glutGet(GLUT_SCREEN_HEIGHT);

    glutInitWindowPosition((SCREEN_WIDTH-width)/2, (SCREEN_HEIGHT-height)/2);
    glutCreateWindow("PowerPuff Girls House");
}

void background(int aux){
    glClearColor(cores[aux].r, cores[aux].g, cores[aux].b, 1.0f);
    //glClear(GL_COLOR_BUFFER_BIT);
    gluOrtho2D(0, width, height, 0);
    glEnd();
}

void raining(int value){
    for (auto& drop : raindrops) {
        drop.y += 1.0; // Move a gota de chuva para baixo
        if (drop.y > height) {
            drop.y = 0; // Se a gota de chuva atingir a parte inferior da tela, reinicie na parte superior
            drop.x = rand() % width; // Reinicie a posição x aleatoriamente
        }
    }
    glutPostRedisplay(); // Redesenha a cena
    glutTimerFunc(16, raining, 0);
}

//movemento das nuvens
void motion(int value){
    cloudX+=0.1;
    glutPostRedisplay();

    glutTimerFunc(16, motion, 0);
}

//desenha circulos vermelhos em cima das janelas circulares
void redWindows(){
    glColor3f(redColor, 0.01f, 0.13f);
        drawCircle(530, 184, 44);
        drawCircle(627, 199, 40);
        drawCircle(717, 213, 36);
}

void girls(){
    glColor4f(0.95f, 0.59f, 0.6f, 0.3f);    //florzinha
    drawTriangle(girlsx+530, girlsy+184, girlsx+600, girlsy+144, girlsx+640, girlsy+154);
    
    glColor4f(0.49f, 0.8f, 0.62f, 0.3f);    //docinho
    drawTriangle(girlsx+627, girlsy+199, girlsx+697, girlsy+159, girlsx+737, girlsy+169);
        //      (x, y, x+70, y-40, x+110, y-30) 
    glColor4f(0.66f, 0.8f, 0.89f, 0.3f);    //lindinha
    drawTriangle(girlsx+717, girlsy+213, girlsx+787, girlsy+173, girlsx+827, girlsy+184);
}

void motionGirls(int value){
    speed+=acceleration;

    girlsx+=speed;
    girlsy+=speed;

    glutPostRedisplay();

    glutTimerFunc(10, motion, 0);
}

void day(){
    glClear(GL_COLOR_BUFFER_BIT);
    drawHause();
    drawOutsideDay();
    drawClouds(cloudX, 14);
    glFlush();
}

void night(){
    glClear(GL_COLOR_BUFFER_BIT);
    nightHause();
    drawOutsideNight();
    drawClouds(cloudX, 26);
    glFlush();
}

void cloudy(){
    glClear(GL_COLOR_BUFFER_BIT);
    cloudyHause();          
    drawOutsideCloudy();
    drawClouds(cloudX, 29);
    rain(raindrops);
    glFlush();
}

// ao clicar F3, a janela pisca vermelho 
// e tres triangulos aparecem para simular
// a emegencia ocorrida no desenho da Meninas Superpoderosas
void warning(){
    redWindows();
    girls();
    glFlush();
}

void specialKey(int key, int x, int y){
    switch(key){
        case GLUT_KEY_F1:
            //printf("chuva\n");
            glClearColor(0.3f, 0.3f, 0.3f, 1.0f);
            glutDisplayFunc(cloudy);
            glutPostRedisplay();
            glFlush();
            break;
        case GLUT_KEY_F3:
            warning();
            glutPostRedisplay();
            break;
    }
}

void motionKey(unsigned char key, int x, int y){
    switch(key){
        case 27:    //esc
            exit(0);
            break;
        case '1':
            //printf("dia\n");
            glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
            glutDisplayFunc(day);
            glFlush();
            glutPostRedisplay();
            break;
        case '2':
            //printf("noite\n"); // control+espaco n funcionou
            glClearColor(0, 0, 0.09f, 1.0f);
            glutDisplayFunc(night);
            glFlush();
            glutPostRedisplay();
            break;
        default:
            cout << "tecla: " << key << endl;
            break;
    }
    
}

int main(int argc, char *argv[]){
    window(argc, argv);

    // Inicializa gotas de chuva aleatórias
    for (auto& drop : raindrops) {
        drop.x = rand() % width;
        drop.y = rand() % height;
    }
    
    background(1);
    glutDisplayFunc(day);

    //mergencia
    //background(14);
    //glutDisplayFunc(day);
    //redWindows();
    //girls();
    //glutTimerFunc(0, motionGirls, 0);*/

    glutSpecialFunc(specialKey);
    glutKeyboardFunc(motionKey);
    glutTimerFunc(16, motion, 0);
    glutTimerFunc(25, raining, 0);

    glFlush();
    glutMainLoop();

    return 0;
}