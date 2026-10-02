#include <stdio.h>
void main(){
    
    int coin;
    int sell;
    
    printf("Enter the Coin Price :");
    scanf("%d",&coin);
    printf("Enter the selling Price :");
    scanf("%d",&sell);

    if(sell>coin){
        
        printf("Profit per unit %d\n",sell-coin);
        printf("Total profit per 100 unit : %d\n",(coin-sell)*100);
    }
    if(sell<coin){
        
        printf("Loss per unit : %d\n",sell-coin);
        printf("Total Loss per 100 unit: %d\n",(sell-coin)*100);
    }
        
    }