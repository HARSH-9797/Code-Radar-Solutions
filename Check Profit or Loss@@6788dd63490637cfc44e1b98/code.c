// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     if(a>b){
//         printf("Profit");
//     }
//     else if(b>a){
//         printf("Loss");
//     }
//     else{
//         printf("No Profit No Loss");
//     }
//     return 0;

// }
#include <stdio.h>

int main() {
    float cost_price, selling_price;

    // Input cost price and selling price
    printf("Enter Cost Price: ");
    scanf("%f", &cost_price);
    
    printf("Enter Selling Price: ");
    scanf("%f", &selling_price);

    // Check profit, loss, or no profit/no loss
    if (selling_price > cost_price) {
        printf("Profit\n");
    } 
    else if (selling_price < cost_price) {
        printf("Loss\n");
    } 
    else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
