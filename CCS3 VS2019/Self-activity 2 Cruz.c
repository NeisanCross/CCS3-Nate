#include<stdio.h>

// Nate Cruz 2021

int add(int n1,int n2);
int subtract(int n1,int n2);
int multiply(int n1,int n2);
int divide(int n1,int n2);

int menu() {
        int input;
        printf("Choose an operation. Type the number:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Choice: ");
        scanf("%d", &input);
        return input;
}

main() {
	int num1,num2,choice, result;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);

	do {
        choice = menu();

        if (choice == 1) { //Addition
            result = add(num1, num2);
            printf("%d + %d = %d", num1, num2, result);
        }
        else if (choice == 2) { //Subtraction
            if (num1 > num2) {
                result = subtract(num1, num2);
                printf("%d - %d = %d", num1, num2, result);
            }
            else {
                result = subtract(num2, num1);
                printf("%d - %d = %d", num2, num1, result);
            }
        }
        else if (choice == 3) { //Multiplication
            result = multiply(num1, num2);
            printf("%d * %d = %d", num1, num2, result);
        }
        else if (choice == 4) { //Division
            if (num1 > num2) {
                result = divide(num1, num2);
                printf("%d / %d = %d", num1, num2, result);
            }
            else {
                result = divide(num2, num1);
                printf("%d / %d = %d", num2, num1, result);
            }
        }
        else
            printf("Incorrect input. Please try again. \n \n");
	} while (choice < 1 || choice > 4);

	return 0;
}

int add(int n1,int n2)
{
	int s;
	s = n1 + n2;
	return s;
}

int subtract(int n1,int n2)
{
	int d = n1 - n2;
	return d;
}
int multiply(int n1,int n2)
{
	return (n1 * n2);
}

int divide(int n1,int n2)
{
	if (n1 > n2)
		return (n1 / n2);
	else
		return (n2 / n1);
}


