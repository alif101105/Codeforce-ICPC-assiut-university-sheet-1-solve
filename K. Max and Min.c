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






// Array diye kora hoise..
#include<stdio.h>
int main()
 {
     int i, n=3, arr[5], min, max;
     for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
     min=max= arr[0];
     for(i=1;i<n;i++)
     {
        if(arr[i]>max)
        {
            max= arr[i];
        }
        if(arr[i]<min)
        {
            min= arr[i];
        }
     }
     printf("%d %d", min, max);
     return 0;
 }
