#include <stdio.h>
#include <stdlib.h>

int main() {
    int price, cost, profit, loss;

    printf("Enter the Cost: \t");
    scanf("%d", &cost);

    printf("Enter the Price: \t");
    scanf("%d", &price);

    if(cost >= 0 && price >= 0) {
        if (price > cost)
        {
            printf("There is Profit.\n");
            profit = price - cost;
            printf("The profit is $%d.\n", profit);
        } else if (price < cost) {
            printf("There is Loss.\n");
            loss = cost - price;
            printf("The loss is $%d.\n", loss);
        } else if (price == cost) {
            printf("There is no profit and loss");
        }
    }

    return 0;
}