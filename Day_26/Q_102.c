#include <stdio.h>

int main() {
    int age;

    printf("Voting Eligibility System and Criteria\n");
    printf("Enter your age: ");
    
    if (scanf("%d", &age) != 1) {
        printf("Invalid input. Please enter a whole number.\n");
        return 1;
     
    }  if (age >= 18) {
        printf(" You are eligible to vote! Please register if you haven't already.\n");
    } else {
        int years_left = 18 - age;
        printf(" You are not eligible to vote yet. You can vote in %d year.\n", years_left);
    }
 return 0;
}