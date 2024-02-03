#include<stdio.h>

int main(){
    int cost , selling , profit , loss;

    printf("enter the cost of product: ");
    scanf("%d",&cost);

    printf("enter the selling amount of product: ");
    scanf("%d",&selling);

    profit = selling - cost;

    loss=cost-selling;

    if(profit>0){
        printf("you can booked your profit amount: %d",profit);
    }
    else{
        printf("you can booked your loss amount: %d",loss);
    }

    
  

    
     

    return 0;


}