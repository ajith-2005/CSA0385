#include <stdio.h>
int main() {
int a[100], n, i, sum=0;
printf("enter the size of array=");
scanf("%d",&n);
printf("enter the elements of array="); for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("array elements="); for(i=0;i<n;i++)
{
printf("%d ", a[i]);
}
printf("\n"); printf("sum of elements="); for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("%d", sum);
return 0;
}