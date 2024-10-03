//program to determinre loan qualification
/*program to determine loan qualification
Author: Ramona Auma
Reg No: CT101/G/21863/24
Date: 2/10/2024
*/
//preprocessor directive
#include <stdio.h>

int main() {
    int age; //%d
    float income; //%f

    // Prompt the user for their age
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("Your age is %d \n",age);

    // Prompt user for income
    printf("Please enter your annual income (in sh): ");
    scanf("%f", &income);
    printf("Your annual income is %f \n",income);

    // Check for loan qualification
    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan!\n");
    } 
    else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
