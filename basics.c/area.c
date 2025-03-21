#include<stdio.h>
float calcArea(int R){
return R*R*3.14;
}
int main(){
    printf("Area of 3 radius circle is %f",calcArea(3));
    return 0;
}