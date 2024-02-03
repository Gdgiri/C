#include<stdio.h>

int main(){

    char name[20];
    int a, b,c,tot,roll;
    float avg;

    printf("enter the roll number: ");
    scanf("%d",&roll);

    printf("enter the name: ");
    scanf("%s",&name);

    printf("enter the 1st number: ");
    scanf("%d",&a);

    printf("enter the 2nd number: ");
    scanf("%d",&b);

    printf("enter the 3rd number: ");
    scanf("%d",&c);

    printf("Name of the Student: %s", name);

    printf("Roll Number: %d", roll);

    tot=a+b+c;

    printf("%d \n",tot);

    avg=tot/3;
    printf("%f\n",avg);

    if(avg>=90){
        printf("First Rank \"VERY GOOD\"");
    }

    else if(avg>=70){
        printf("Second Rank \"Good\"");
        
    }

    else if(avg>=50){
        printf("Third Rank \"LEARN MORE\"");
    }

    else if(avg>=35){
        printf("Just Pass \"POOR\"");
    }
    else{
        printf("Fail\"VERY POOR\"");
    }

    return 0;
}