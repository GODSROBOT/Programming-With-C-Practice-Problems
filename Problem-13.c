// Discount calculation 
// Input the marked price and discount percentage. Calculate the discount amount and final price. 
// formula discount amount = (marked price * discount percentage) / 100

#include <stdio.h>

int main() {
    int markedPrice, discountPercentage, discountAmount, finalPrice;
    printf("Enter the marked price of the item:\n");
    scanf("%d", &markedPrice);
    printf("Enter the discount percentage:\n");
    scanf("%d", &discountPercentage);
    discountAmount = (markedPrice * discountPercentage) / 100;
    finalPrice = markedPrice - discountAmount;
    printf("Discount Amount: %d\n", discountAmount);
    printf("Final Price after discount: %d\n", finalPrice);
    return 0;
}