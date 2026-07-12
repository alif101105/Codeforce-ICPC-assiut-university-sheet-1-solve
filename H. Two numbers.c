#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    double result;
    scanf("%d %d", &a,&b);
    result= (double)a/b;
    printf("floor %d / %d = %.lf\n",a,b, floor(result));
    printf("ceil %d / %d = %.lf\n", a,b, ceil(result));
    printf("round %d / %d = %.lf", a,b,round(result));
    return 0;
}
