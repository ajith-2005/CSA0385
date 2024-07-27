#include<stdio.h>
int main() {
int a[100], n, i, pos;
printf("enter the size of array=");
scanf("%d",&n);
printf("enter the elements of array="); for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("array elements before deleting="); for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\n");
printf("enter the element position to delete=");
scanf("%d",&pos);
printf("\n"); for(i=n-1;i>pos;i--)
{
a[i-1]=a[i];
}
printf("\n");
n--;
printf("array after deleting="); for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}