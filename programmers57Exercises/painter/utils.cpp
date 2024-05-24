#include "painter.h"

int calc_gallon(int area){
    // calculate the gallon required in whole number
    return area / 350;
}

double bend_area(int len, int bdt, int thickness){
    // calculate the l-shape area
    int bend_len = len + thickness;
    int bend_bdt = bdt - thickness;
    int area =  (bend_len * thickness) + (bend_bdt * thickness);
    return calc_gallon(area);
}

double rect_area(int l, int b){
    // calculate the rectangular area
    int area = l * b;
    return calc_gallon(area);
}

double sqr_area(int l){
    // calculate square area
    int area = l * l;
    return calc_gallon(area);
}

double circ_area(int radius){
    // calculate circular area
    double area = 2 * 3.14 * radius * radius;
    return calc_gallon(area);
}