// program to calculate compound interest
/*program to calculate compound interest
Author:Ramona Auma
Reg No: CT101/G/21863/24
Date: 26/9/2024
*/
//preprocessor directive
#include<stdio.h>
int main(){
    float principal;  //%1f
    float rate ;
    float time;
    float amount;
    int n;   //%d, number of times interest is compounded per year
    
    //Accepting processor input
    printf("Enter the principal amount:");
    scanf("%f",&principal);
    printf("The principal amount is %.2f \n", principal);
    
    printf("Enter the rate(in percentage):");
    scanf("%f", &rate);
    printf("The rate is %.2f \n",rate);

    printf("Enter the time(in years)");
    scanf("%f", &time);
    printf("The time is %.2f \n",time);
    
    printf("Enter the number of time interest is compounded per year:");
    scanf("%d", &n);
    printf("The number of times interest is compunded per year is %d \n",n);

    //calculate amount
    #include<math.h>
    amount= principal*pow((1+rate/n),n*time);
    printf("The amount after %f years is:%.2f \n",time,amount);

    return 0;
    }