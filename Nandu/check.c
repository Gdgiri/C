#include<stdio.h>

int main(){
    int a;

    printf("enter the number: ");
    scanf("%d",&a);

    if(a<0){
        printf("%d the number is so \"-1\"",a);
    }

    else if(a>0){
        printf("%d the number is so \"1\"",a);
    }

    else{
        printf("%d the number is so \"0\"",a);
    }

    return 0;
}