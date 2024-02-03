#include<stdio.h>

int main(){

    int a,b,c;

    printf("enter the first number: ");
    scanf("%d",&a);

    printf("enter the second number: ");
    scanf("%d",&b);

    printf("enter the third number: ");
    scanf("%d",&c);

     if(a>b && a>c ){
        printf("a= %d so a is greater \n",a);
    }

    else if(b>a && b>c ){
        printf("b= %d so b is greater \n",b);
    }

    else if(c>a && c>b ){
        printf("c= %d so c is greater \n",c);
    }
    

     if(a==b && a>c)
        printf("a and b is equal and also greater then c \n ");
    

     if(a==c && a>b)
        printf("a and c is equal and also greater then b \n");
   

     if(b==c && b>a)
        printf("b and c is equal and also greater then a \n");
   

    

      if(a==b)
        printf("a and b is equal a= %d , b=%d \n",a,b);
    

     if(a==c)
        printf("a and c is equal a= %d , c=%d \n",a,c);
    

     if(b==c)
        printf("b and c is equal b= %d , c=%d \n",b,c);

     if(a==b && b==c && c==a)
        printf("all are same");
    

    return 0;
}

