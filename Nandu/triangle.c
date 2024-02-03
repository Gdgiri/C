#include<stdio.h>
#include<math.h>

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
        printf("Equilateral traiangle");
    }

    else if(a==b || a==c || b==c){
        printf("Isosceles triangle");
    }

    else if(c==d){
        
        printf("right angle triangle");
    }

    else{
        printf("not a triangle");
    }

    return 0;


}