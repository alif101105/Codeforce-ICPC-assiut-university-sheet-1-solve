#include <stdio.h>
int main()
{
    int a;
    long long b;
    char ch;
    float f;
    double d;
    scanf("%d %lld %c %f %lf", &a, &b, &ch, &f, &d);
    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%c\n", ch);
    printf("%.2f\n", f);
    printf("%.1lf", d);
    return 0;
}
