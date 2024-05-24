#ifndef PAINTER_H
#define PAINTER_H

enum shape {Lshape, Circular, Rectangular, Square};

int calc_gallon(int a);
double rect_area(int l, int b);
double sqr_area(int l);
double bend_area(int l, int b, int thickness);
double circ_area(int rad);

#endif