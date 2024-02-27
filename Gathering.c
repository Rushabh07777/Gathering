#include <stdio.h>
int addition( a,b);
int subtraction( a,b);
int multiplication(a,b);
int division( a,b);
int modulus(a,b);
int main() {
    int choice, num1, num2;
    do {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 to exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                printf("Addition of %d and %d is %d\n", num1, num2, addition(num1, num2));
                break;
            case 2:
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                printf("Subtraction of %d and %d is %d\n", num1, num2, subtraction(num1, num2));
                break;
            case 3:
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                printf("Multiplication of %d and %d is %d\n", num1, num2, multiplication(num1, num2));
                break;
            case 4:
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                printf("Division of %d and %d is %d\n", num1, num2, division(num1, num2));
                break;
            case 5:
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                printf("Modulus of %d and %d is %d\n", num1, num2, modulus(num1, num2));
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != 0);
    
    return 0;
}
int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error! Division by zero.\n");
        return 0;
    }
}
int modulus(int a, int b) {
    if (b != 0)
        return a % b;
    else {
        printf("Error! Modulus by zero.\n");
        return 0;
    }
}
