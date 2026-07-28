#include <stdio.h>
int main()
{
   int n;
   int years, months, days;
   scanf("%d", &n);

   years= n / 365;
   printf("%d years\n", years);

   int remaining = n % 365;
   months= remaining /30;
   printf("%d months\n", months);

   days= remaining  % 30;
   printf("%d days\n", days);
   return 0;
}
