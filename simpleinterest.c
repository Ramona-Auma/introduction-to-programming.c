// program to calculate simple interest
/* program to calculate simple interest
Author: Ramona Auma
Reg No: CT101/G/21863/24
Date: 26/9/2024
*/
// preprocessor directive
#include<stdio.h>
int main(){
    float principal; //%f
    float time;
    float rate;
    float interest;
    //accepting user input
    printf("Enter the principal amount:");
    scanf("%f",&principal);
    printf("The principal amount is %.2f\n", principal);

    printf("Enter the time(in years):");
    scanf("%f",&time);
    printf("The time is %.2f\n",time);

    printf("Enter the rate(in percentage):");
    scanf("%f",&rate);
    printf("The rate is %.4f\n", rate);

    //calculating simple interest
    interest=(principal*time*rate)/100;
    printf("The simple interest is %.2f\n",interest);
    return 0;
    }