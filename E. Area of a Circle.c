#include<stdio.h>
#define pie 3.141592653
int main()
{
    double r, area;
    scanf("%lf",&r);
    area=pie*r*r;
    printf("%.9lf", area);
    return 0;
}
