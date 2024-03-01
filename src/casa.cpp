#include "../include/casa.h"

void stairs(int aux1, int aux2){
    glColor3f(cores[aux1].r, cores[aux1].g, cores[aux1].b);
    drawSquare(518, 465, 620, 466, 622, 482, 518, 482);
    glColor3f(cores[aux2].r, cores[aux2].g, cores[aux2].b);
    drawSquare(495, 464, 518, 465, 518, 482, 495, 482);
}

void door(int aux1, int aux2, int aux3){
    //porta mesmo
    glColor3f(cores[aux1].r, cores[aux1].g, cores[aux1].b);
    drawSquare(518, 305, 578, 314, 584, 467, 513, 465);

    //janela
    glColor3f(cores[aux2].r, cores[aux2].g, cores[aux2].b);
    drawCircle(548, 343, 22);
    
    //macaneta
    glColor3f(cores[aux3].r, cores[aux3].g, cores[aux3].b);
    drawCircle(526, 390, 5);
}

void frontWindows(int aux1, int aux2){
    glColor3f(cores[aux1].r, cores[aux1].g, cores[aux1].b); //janela contorno
    drawCircle(534, 184, 44);
    drawCircle(631, 199, 40);
    drawCircle(721, 213, 36);

    glColor3f(cores[aux2].r, cores[aux2].g, cores[aux2].b); //azul janela
    drawCircle(530, 184, 44);
    drawCircle(627, 199, 40);
    drawCircle(717, 213, 36);
}

void portao(int aux1, int aux2){
    glColor3f(cores[aux1].r, cores[aux1].g, cores[aux1].b);
    drawSquare(757, 332, 875, 347, 874, 482, 754, 482);

    glColor3f(cores[aux2].r, cores[aux2].g, cores[aux2].b);
    drawLine(4.0, 730, 380, 874, 392);
    drawLine(4.0, 730, 428, 874, 440);
}

void leftWindows(int aux1){
    glColor3f(cores[aux1].r, cores[aux1].g, cores[aux1].b); 
    drawSquare(282, 326, 360, 333, 355, 430, 275, 428);
    drawSquare(370, 332, 440, 341, 438, 436, 367, 433);
}

// frente, lateral, janela, contorno
void leftCorner(int aux1, int aux2, int aux3, int aux4){
    glColor3f(cores[aux1].r, cores[aux1].g, cores[aux1].b);
    drawSquare(265, 273, 445, 293, 448, 482, 256, 482);
    glColor3f(cores[aux2].r, cores[aux2].g, cores[aux2].b);
    drawSquare(219, 305, 265, 273, 256, 482, 216, 482);
    leftWindows(aux3);

    //contorno
        glColor3f(cores[aux4].r, cores[aux4].g, cores[aux4].b);
        drawLineLoop(1.0, 265, 273, 445, 293, 448, 482, 256, 482);  //frente
        drawLineLoop(1.0, 219, 305, 265, 273, 256, 482, 216, 482);  //lateral
        drawLineLoop(1.0, 282, 326, 360, 333, 355, 430, 275, 428);  //janela 1
        drawLineLoop(1.0, 370, 332, 440, 341, 438, 436, 367, 433);  //janela 2
}

//  garagem, portão, linha portão, controno
void rightCorner(int aux1, int aux2, int aux3, int aux4){
    glColor3f(cores[aux1].r, cores[aux1].g, cores[aux1].b);
    drawSquare(759, 305, 895, 324, 888, 482, 754, 482);
    portao(aux2, aux3);
    //contorno
    glColor3f(cores[aux4].r, cores[aux4].g, cores[aux4].b);
    drawLineLoop(1.0, 759, 305, 895, 324, 888, 482, 754, 482);  
    drawLineLoop(0.8, 757, 332, 875, 347, 874, 482, 754, 482); //portao
}

// frente, lateral, janela, escada1, escada2, porta, macaneta, contorno janela
void middle(int aux1, int aux2, int aux3, int aux4, int aux5, int aux6, int aux7, int aux8, int aux9){
    glColor3f(cores[aux1].r, cores[aux1].g, cores[aux1].b); //frente
    drawSquare(477, 76, 760, 142, 758, 482, 477, 482);
    glColor3f(cores[aux2].r, cores[aux2].g, cores[aux2].b); //leteral
    drawSquare(380, 155, 477, 76, 477, 482, 380, 482);
    glColor3f(cores[aux3].r, cores[aux3].g, cores[aux3].b); //janela
    drawSquare(654, 312, 759, 322, 759, 456, 651, 455); 
    stairs(aux4, aux5);       //escada 1 e 2
    door(aux6, aux3, aux7);  //porta, janela, macaneta
    frontWindows(aux8, aux3);   //contorno janela, janela
    //contorno
        glColor3f(cores[aux9].r, cores[aux9].g, cores[aux9].b);
        drawLineLoop(1.0 ,477, 76, 760, 142, 758, 482, 477, 482);   //frente
        drawLineLoop(1.0, 380, 155, 477, 76, 477, 482, 380, 482);   //lateral
        drawLineLoop(1.0, 654, 312, 759, 322, 759, 456, 651, 455);  //janela quadrada
        drawLineLoop(1.0, 518, 305, 578, 314, 584, 467, 513, 465);  //porta
        drawLineLoop(0.1, 518, 465, 620, 466, 622, 482, 518, 482);  //escada frente
        drawLineLoop(0.1, 495, 464, 518, 465, 518, 482, 495, 482);  //escada lateral
}

void drawHause(){
    rightCorner(12, 8, 9, 0);
    middle(10, 11, 4, 5, 6, 2, 3, 7, 0);
    leftCorner(10, 11, 4, 0);
}

void nightHause(){
    rightCorner(24, 21, 9, 0);
    middle(23, 22, 18, 19, 20, 16, 18, 7, 0);
    leftCorner(23, 22, 18, 0);
}

void cloudyHause(){
    rightCorner(40, 36, 37, 0);
    middle(38, 39, 32, 33, 34, 30, 31, 35, 0);
    leftCorner(38, 39, 32, 0);
}