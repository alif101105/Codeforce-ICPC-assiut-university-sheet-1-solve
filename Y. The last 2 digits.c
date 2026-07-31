#include <stdio.h>
int main()
{
   long long a, b, c, d, ans=1;
   scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

   ans *= a;
   ans %= 100;

   ans *= b;
   ans %= 100;

   ans *= c;
   ans  %=100;

   ans *= d;
   ans %= 100;

   printf("%02lld", ans);
   return 0;
}
