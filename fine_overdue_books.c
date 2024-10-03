// program to calculate fine for overdue library books
/*program to calculate fine for overdue library books
Author: Ramona Auma
Reg No: CT101/G/21863/24
Date: 2/10/2024
*/
//preprocessor directive
#include <stdio.h>

int main() {
    int bookID;         // Variable forthe Book ID  //%d
    int dueDate;       // Variable for the Due Date
    int returnDate;    // Variable for the Return Date
    int daysOverdue;   // Variable for the number of days overdue
    int fine;          // Variable for the calculated fine

    // Prompt the user for the Book ID
    printf("Enter the Book ID: ");
    scanf("%d", &bookID);
    printf("The book ID is %d \n",bookID);  //display bookID

    // Prompt the user for the Due Date
    printf("Enter the Due Date: ");
    scanf("%d", &dueDate);
    printf("The Due Date is %d \n",dueDate);  //display Due Date

    // Prompt the user for the Return Date
    printf("Enter the Return Date: ");
    scanf("%d", &returnDate);
    printf("The return date is %f \n",returnDate);


    // Calculate overdue days
    daysOverdue= returnDate - dueDate;

    // Calculate the fine based on the number of overdue days
    if (daysOverdue < 0) {
        printf("The book is not overdue.\n");
        fine = 0; // No fine if the book is returned on or before the due date
    } 
    else if (daysOverdue <= 7) {
        fine = 20; // Fine for up to 7 days
    } 
    else if (daysOverdue <= 14) {
        fine = 50; // Fine for 8-14 days
    }
     else {
        fine = 100; // Fine for 15 days or more
    }

    // display fine amount
    printf("Total Fine: Ksh %d\n", fine);

    return 0;
}
