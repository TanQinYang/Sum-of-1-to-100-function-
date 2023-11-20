#include <stdio.h>
#include <stdlib.h>

 int a, b;

 int func(int a,int b)
 {
int sum;
for(a=1;a<=b;a++)
    sum=sum+a;
return sum;
 }

 int main(void)
 {
int sum;
 a = 1;
 b=100;
 sum=func(a,b);
 printf("%d", sum);
 return 0;
 }

