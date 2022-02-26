#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Brick 
{
    double x;
    double y;
    double z;
} brick;

void setBrickDate(brick* brick, double x, double y,double z) {

    if( x > 0.0) {
        brick->x = x;
    }

    else {
        brick->x = NAN;
    }

    if( y > 0.0) {
        brick->y = y;
    }

    else {
        brick->y = NAN;
    }

    if( z > 0.0) {
        brick->z = z;
    }

    else {
        brick->z = NAN;
    }
}

double calcVolume(const brick* brick ) {

    double V = brick->x * brick->y * brick->z;
    return V;
}

double calcSurface(const brick* brick) {

    double A = 2*(brick->x * brick->y + brick->x * brick->z + brick->y * brick->z);
    return A;
}

int main(int argc, char* argv[])
{

    brick brick;
    double V;
    double A;
    setBrickDate(&brick,4,8,6);
    V = calcVolume(&brick);
    A = calcSurface(&brick);

    printf("V = %lf, A= %lf\n", V,A);

    return 0;


}
