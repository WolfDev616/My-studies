#include <stdlib.h>
#include <stdio.h>

int main() {
    // A program that receives the investment of a group and shares the amount for each according to the amount the invested firstly


    // Get investments via terminal

    float investment1;
    float investment2;
    float investment3; 
    float totalInvested;
    float totalMoney_End; 
    int investmentTime = 12;
    
    // Show the investments and the total

    scanf("%f %f %f", &investment1, &investment2, &investment3);
    printf("The initial investments were %.02f, %.02f and %.02f \n", investment1, investment2, investment3);

    totalInvested = investment1 + investment2 + investment3;

    printf("The total invested was %.02f \n", totalInvested);


    // Investment Yield
    
    totalMoney_End = totalInvested;
    
    for (int i=0;i<investmentTime;i++) {
        totalMoney_End += (totalInvested * 0.01);
        printf("Total after investment time: %.02f \n", totalMoney_End);    
    }

    // Money division

    float weight1 = (investment1 / totalInvested);
    float weight2 = (investment2 / totalInvested);
    float weight3 = (investment3 / totalInvested);

    float finalQuantity1 = totalMoney_End * weight1;
    float finalQuantity2 = totalMoney_End * weight2;
    float finalQuantity3 = totalMoney_End * weight3;

    printf("Final value for investor 1 is: %.02f \n", finalQuantity1);
    printf("Final value for investor 2 is: %.02f \n", finalQuantity2);
    printf("Final value for investor 3 is: %.02f \n", finalQuantity3);

    printf("%f \n", finalQuantity1 + finalQuantity2 + finalQuantity3);

    return 0;
}