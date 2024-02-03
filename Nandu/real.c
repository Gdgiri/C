#include<stdio.h>

int main(){
    int a,b,c,result;

    printf("enter the value (a): ");
    scanf("%d",&a);

    printf("enter the value(b): ");
    scanf("%d",&b);
  
    printf("enter the value(c): ");
    scanf("%d",&c);

    result=(b*b)-4*a*c;

    printf("result is:  %d \n", result);

    if(result<0){
        printf("imaginary part:  %d", result);

    }

    else{
        printf("real part:  %d", result);
    }

    return 0;

}