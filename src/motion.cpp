#include "../include/motion.h"

void rain(std::vector<RainDrop>& drops){
    glColor3f(0.61f, 0.84f, 1.0f);
    glLineWidth(2.0);
    glBegin(GL_LINES);
    for(const auto& drop : drops){
        glVertex2f(drop.x, drop.y);
        glVertex2f(drop.x, drop.y-10);
    }
    glEnd();
}

void cloud(float CloudX, int aux, int r1, int x1, int y1, int r2, int x2, int y2, int r3, int x3, int y3, int r4, int x4, int y4){
    glColor3f(cores[aux].r, cores[aux].g, cores[aux].b);
    
    drawCircle(CloudX+x1, y1, r1);
    drawCircle(CloudX+x2, y2, r2);
    drawCircle(CloudX+x3, y3, r3);
    drawCircle(CloudX+x4, y4, r4);
}

void drawClouds(float CloudX, int aux){
    cloud(CloudX, aux, 36, 100, 56, 24, 143, 45, 25, 140, 69, 33, 184, 65);
    cloud(CloudX, aux, 33, 228, 184, 25, 270, 200, 24, 275, 170, 36, 313, 192);
    cloud(CloudX, aux, 33, 628, 164, 25, 670, 180, 24, 675, 150, 36, 713, 172);
    cloud(CloudX, aux, 36, 928, 60, 24, 970, 49, 25, 975, 73, 33, 1013, 69);
}

