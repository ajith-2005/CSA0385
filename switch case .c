#include<stdio.h>
int main(){
int n,a,b,c;
printf("enter the values of a,b");
scanf("%d %d",&a,&b);
printf("enter the switch case value"); scanf("%d",&n);
switch(n){
case 1:c=a+b;
printf("addtion of %d,%d = %d",a,b,c);
break;
case 2:
c=a-b;
printf("subtraction of %d %d %d",a,b,c);
break;
case 3:
c=a*b;
printf("multiplication of %d %d%d",a,b,c);
break;
case 4:
c=a/b;
printf("division of %d %d %d",a,b,c);
break;
case 5:c=a%b;
printf("modulus of %d,%d %d",a,b,c); break;
default:{
printf("try again");
break;
}
}
return 0;
}