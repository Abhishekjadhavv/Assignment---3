// Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.

#include <stdio.h>

int main()
{

    int cost_price, selling_price, profit, loss;

    printf("Enter cost price and selling price of your product\n");
    scanf("%d%d", &cost_price, &selling_price);

    if (selling_price >= cost_price)
    {
        printf("Profit : %d%% percentage.", (cost_price+selling_price)/2);
    }
    else
    {
        printf("Loss : %d%% percentage.",(cost_price+selling_price)/2);
    }

    return 0;
}