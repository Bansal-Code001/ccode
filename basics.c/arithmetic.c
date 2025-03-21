#include<stdio.h>
#include<string.h>
int main ()
{
    int a ;
    int b ;
    printf("enter any two numbers");
    scanf("%d %d",&a,&b);
    float sum,difference,multiplication,division;

    sum=a+b;
    difference=a-b;
    multiplication=a*b;
    division=a/b;

   printf("sum :%f \n",sum);
   printf("difference :%f \n",difference);
   printf("multiplication :%f \n",multiplication);
   printf("division :%f \n",division);
}
