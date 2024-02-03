#include<stdio.h>

int main(){

    int a,b,c,d;

    printf("enter the first number: ");
    scanf("%d",&a);

    printf("enter the second number: ");
    scanf("%d",&b);

    printf("enter the third number: ");
    scanf("%d",&c);

    d=(a*a)+(b*b);

    if(a==b && a==c && b==c){
        printf("it is equalteral triangle");
    }

    else if(a==b || a==c || b==c){
        printf("it is isolation triangle");
    }

    else if(d==c){
        printf("right angle triangle");
    }

    else{
        printf("not a triangle");
    }

    return 0;

}