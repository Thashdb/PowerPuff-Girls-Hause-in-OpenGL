#ifndef OUTSIDE_H
#define OUTSIDE_H

#include <GL/gl.h>
#include <GL/glut.h>

void drawWall(int aux1, int aux2, int aux3);
void drawLawn(int aux1);
void sunflower(int aux1, int aux2, int aux3, int aux4, int caule, int x, int y);

void drawOutsideDay();
void drawOutsideNight();
void drawOutsideCloudy();

#endif
