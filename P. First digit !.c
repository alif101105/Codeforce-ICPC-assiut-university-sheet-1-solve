#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int dig= x/1000;

    if(dig%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}
