#include<stdio.h>

int main(){
    int temprature;

    printf("enter the temperature: ");
    scanf("%d",&temprature);

    if(temprature<0){
        printf("Freezing Weather");
    }

    else if(temprature>=10 && temprature<10){
        printf("Very Cold Weather");
    }

    else if(temprature>10 && temprature<20){
        printf("Cold Weather");
    }

    else if(temprature>20 && temprature<30){
        printf("Normal Temprature");
    }

    else if(temprature>30 & temprature<40){
        printf("Hot Temprature");
    }

    else if(temprature>=40){
        printf("Very Hot");
    }

    else{
        printf("Freezing Weather");
    }

    return 0;
}