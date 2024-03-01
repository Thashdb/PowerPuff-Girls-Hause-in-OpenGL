#include "../include/outside.h"
#include "../include/formas.h"
#include "../include/colors.h"

void drawWall(int aux1, int aux2, int aux3){
    glColor3f(cores[aux1].r, cores[aux1].g, cores[aux1].b); //cinza garagem
    //         x1 y1    x2  y2   x3    y3  x4  y4
    drawSquare(0, 424, 230, 426, 230, 482, 0, 482); //baixo esquerda
    drawSquare(890, 438, 1200, 437, 1200, 482, 889, 482); //baixo direita

    glColor3f(cores[aux2].r, cores[aux2].g, cores[aux2].b); //escada1
    //         x1 y1    x2  y2   x3    y3  x4  y4
    drawSquare(0, 403, 235, 410, 235, 426, 0, 424); //cima esquerda
    drawSquare(891, 424, 1200, 427, 1200, 437, 891, 438);  //cima direita
    
    //contorno
    glColor3f(cores[aux3].r, cores[aux3].g, cores[aux3].b);
    drawLineLoop(1.0, 0, 424, 230, 426, 230, 482, 0, 482);  //baixo esquerda
    drawLineLoop(1.0, 0, 403, 235, 410, 235, 426, 0, 424);  //cima esquerda
    drawLineLoop(1.0, 890, 438, 1200, 437, 1200, 482, 888, 482);  //baixo direita
    drawLineLoop(1.0, 891, 424, 1200, 427, 1200, 437, 891, 438);  //cima direita
}

void drawLawn(int aux1){
    glColor3f(cores[aux1].r, cores[aux1].g, cores[aux1].b); //grama
    //         x1 y1    x2  y2   x3    y3  x4  y4
    drawSquare(0, 483, 1200, 483, 1200, 580, 0, 580); //baixo esquerda
}

// circulo1, circulo2, circulo3, caule, x, y
void sunflower(int aux1, int aux2, int aux3, int aux4, int caule, int x, int y){
    // 3 circulos
    // 1 reta
    // 2 quadrados
    glColor3f(cores[aux4].r, cores[aux4].g, cores[aux4].b);
    drawLine(3.0, x, y, x, y+caule);
    drawSquare(x, y+(caule/2), x+12, y+(caule/2), x+12, y+10+(caule/2), x, y+10+(caule/2));

    glColor3f(cores[aux1].r, cores[aux1].g, cores[aux1].b);
    drawCircle(x, y, 14);
    glColor3f(cores[aux2].r, cores[aux2].g, cores[aux2].b);
    drawCircle(x, y, 12);
    glColor3f(cores[aux3].r, cores[aux3].g, cores[aux3].b);
    drawCircle(x, y, 5);
}

//verde, rosa1, rosa2, x, y
void bush(int aux1, int aux2, int aux3, int x, int y){
    //3 quadrados 
    //varios circulos

    glColor3f(cores[aux1].r, cores[aux1].g, cores[aux1].b);
    drawSquare(x, y, x+20, y, x+20, y+20, x, y+20); //20x20
    drawSquare(x+10, y-5, x+10+20, y-5, x+10+20, y-5+25, x+10, y-5+25);//20x25
    drawSquare(x+25, y+6, x+25+15, y+6, x+25+15, y+6+15, x+25, y+6+15);//15x15


    glColor3f(cores[aux2].r, cores[aux2].g, cores[aux2].b);
    drawCircle(x, y, 5);
    glColor3f(cores[aux3].r, cores[aux3].g, cores[aux3].b);
    drawCircle(x, y, 2);

    glColor3f(cores[aux2].r, cores[aux2].g, cores[aux2].b);
    drawCircle(x+20, y+6, 5);
    glColor3f(cores[aux3].r, cores[aux3].g, cores[aux3].b);
    drawCircle(x+20, y+6, 2);

    glColor3f(cores[aux2].r, cores[aux2].g, cores[aux2].b);
    drawCircle(x+30, y+10, 5);
    glColor3f(cores[aux3].r, cores[aux3].g, cores[aux3].b);
    drawCircle(x+30, y+10, 2);
}

void tree(int aux1, int aux2, int x, int y){
    glColor3f(cores[aux1].r, cores[aux1].g, cores[aux1].b);
    drawCircle(x, y, 50);
    drawCircle(x, y+75, 50);
    
    drawSquare(x-50, y, x+50, y, x+50, y+75, x-50, y+75);
    glColor3f(cores[aux2].r, cores[aux2].g, cores[aux2].b);

}


//cinza garagem, escada1, contorno 
void drawOutsideDay(){
    //tree(4, 5, 200, 200);
    drawWall(12, 5, 0);
    drawLawn(15);
    bush(46, 54, 45, 256, 465);
    bush(46, 54, 45, 300, 465);
    bush(46, 54, 45, 345, 470);
    bush(46, 54, 45, 390, 468);
    bush(46, 54, 45, 420, 468);
    //1
    sunflower(43, 44, 45, 46, 64, 960, 420);
    sunflower(43, 44, 45, 27, 70, 940, 426);
    sunflower(43, 44, 45, 46, 70, 980, 425);
    //2
    sunflower(43, 44, 45, 46, 64, 1040, 420);
    sunflower(43, 44, 45, 27, 70, 1015, 426);
    sunflower(43, 44, 45, 46, 70, 1060, 425);
    //3
    sunflower(43, 44, 45, 46, 64, 1110, 420);
    sunflower(43, 44, 45, 27, 70, 1150, 426);
    sunflower(43, 44, 45, 46, 70, 1130, 425);
}

void drawOutsideNight(){
    drawWall(24, 19, 0);
    drawLawn(27);
    bush(49, 55, 0, 256, 465);
    bush(49, 55, 0, 300, 465);
    bush(49, 55, 0, 345, 470);
    bush(49, 55, 0, 390, 468);
    bush(49, 55, 0, 420, 468);
    //1
    sunflower(47, 48, 0, 27, 70, 940, 426);
    sunflower(47, 48, 0, 49, 70, 980, 425);
    sunflower(47, 48, 0, 46, 64, 960, 420);
    //2
    sunflower(47, 48, 0, 49, 64, 1040, 420);
    sunflower(47, 48, 0, 27, 70, 1015, 426);
    sunflower(47, 48, 0, 46, 70, 1060, 425);
    //3
    sunflower(47, 48, 0, 46, 64, 1110, 420);
    sunflower(47, 48, 0, 27, 70, 1150, 426);
    sunflower(47, 48, 0, 49, 70, 1130, 425);
}

void drawOutsideCloudy(){
    drawWall(40, 33, 0);
    drawLawn(27);
    bush(53, 56, 52, 256, 465);
    bush(53, 56, 52, 300, 465);
    bush(53, 56, 52, 345, 470);
    bush(53, 56, 52, 390, 468);
    bush(53, 56, 52, 420, 468);
    //1
    sunflower(50, 51, 52, 53, 70, 940, 426);
    sunflower(50, 51, 52, 53, 70, 980, 425);
    sunflower(50, 51, 52, 53, 64, 960, 420);
    //2
    sunflower(50, 51, 52, 53, 64, 1040, 420);
    sunflower(50, 51, 52, 53, 70, 1015, 426);
    sunflower(50, 51, 52, 53, 70, 1060, 425);
    //3
    sunflower(50, 51, 52, 53, 64, 1110, 420);
    sunflower(50, 51, 52, 53, 70, 1150, 426);
    sunflower(50, 51, 52, 53, 70, 1130, 425);
}