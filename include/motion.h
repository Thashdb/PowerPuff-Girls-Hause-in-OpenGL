#ifndef MOTION_H
#define MOTION_H

#include <GL/gl.h>
#include <GL/glut.h>
#include <cstdlib> //rand
#include <vector>

#include "formas.h"
#include "colors.h"
using namespace std;

struct RainDrop{
    float x=0.0;
    float y=0.0;
};

void rain(std::vector<RainDrop>& drops);

void cloud(float CloudX, int aux, 
            int r1, int x1, int y1, 
            int r2, int x2, int y2, 
            int r3, int x3, int y3, 
            int r4, int x4, int y4);
void drawClouds(float CloudX, int aux);


#endif
