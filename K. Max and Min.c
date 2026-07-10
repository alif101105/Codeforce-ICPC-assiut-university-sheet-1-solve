#include<stdio.h>
 int main()
 {
     int num1, num2, num3, min, max;
     scanf("%d%d%d", &num1, &num2, &num3);
     min=max=num1;
     if(num2>max)
     {
         max= num2;
     }
     if(num2<min)
     {
         min= num2;
     }
     if(num3>max)
     {
         max= num3;
     }
     if(num3<min)
     {
         min= num3;
     }
     printf("%d %d", min, max);
     return 0;
 }
