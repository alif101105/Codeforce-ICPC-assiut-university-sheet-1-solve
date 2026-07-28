#include <stdio.h>
int main()
{
   double n;
   scanf("%lf", &n);

   int integer= (int)n;
   double decimal= n- integer;

   if(decimal==0)
   {
       printf("int %d", integer);
   }
   else
   {
       printf("float %d %g", integer, decimal);
   }
   return 0;
}
