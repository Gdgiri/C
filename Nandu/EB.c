#include<stdio.h>

int main(){

    int id , reading , tax , total , charge , avg , dis,amt;
    char name[20];

    printf("COST LIST \n");
    printf("--------------------------------------------------------------- \n");
    printf("[reading<=100] There is no charge. FREE!!! FREE!!! \n");
    printf("[reading>100 and reading<200] Rs:1.20 were charged \n");
    printf("[reading>=200 and reading<400] Rs:1.50 were charged \n");
    printf("[reading>=400 and reading<600] Rs:1.80 were charged \n");
    printf("[reading>=600] Rs:2.00 were charged \n");
    printf("[reading>=400] 15%% were discount \n" );
    printf("[reading>=600] 5%% were discount \n");
     printf("--------------------------------------------------------------- \n");


    printf("enter the customer name: ");
    scanf("%s",&name);

    printf("enter the customer-ID: ");
    scanf("%d",&id);

    printf("enter the reading Number: ");
    scanf("%d",&reading);

    printf("----------------------------------------------------------------- \n");

    
     printf("Name of the customer: %s \n", name);
     printf("Customer ID: %d \n",id);
     printf("The Reading Amount is: %d \n",reading);

     if(reading>100 && reading<=199){

        total=reading*1.20;

        printf("the total amount of bill is Rs: %d \n",total);

    }

    else if(reading>=200 && reading<400){
        total= reading *1.50;

        printf("the total amount of bill is Rs: %d \n",total);
    }

    else if(reading>=400 && reading<600){
        avg= (reading * 15)/100;
        total= reading *1.80 + avg ;
        
        printf("the total amount of bill is Rs: %d \n", total);
    
    }

    else if(reading>=600){
        avg= (reading * 15)/100;
        total= reading *2.00 + avg ;
        dis=(total*5)/100;
        amt=total-dis;
        printf("the total amount is Rs: %d \n",amt);

    }

    else{
        printf("there is no charge \n");
    }

     printf("----------------------------------------------------------------- \n");



return 0;
    
}