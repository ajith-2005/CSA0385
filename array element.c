#include <stdio.h>
int main()

{
int a[100], n, i, pos, ele;
printf("enter the size of array=");
scanf("%d",&n);
printf("enter the elements of array="); for(i=0;i<n;i++)
{

scanf("%d",&a[i]);
}

printf("array elements before insert="); for(i=0;i<n;i++)
{

printf("%d ",a[i]);
}
printf("\n");
printf("\n");
printf("enter the element position to insert=");
scanf("%d",&pos);
printf("enter the element to insert=");
scanf("%d",&ele);
for(i=n;i>pos;i--)
{
a[i]=a[i-1];
}
printf("\n");
a[pos]=ele;
n++;
printf("array after inserting="); for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}