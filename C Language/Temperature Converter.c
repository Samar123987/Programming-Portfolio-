#include <stdio.h>

int main() {
    float temp, converted;
    char choice;

    printf("Choose conversion type:\n");
    printf("C for Celsius to Fahrenheit\n");
    printf("F for Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    if(choice == 'C' || choice == 'c') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted = (temp * 9/5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", converted);
    } 
    else if(choice == 'F' || choice == 'f') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted = (temp - 32) * 5/9;
        printf("Temperature in Celsius: %.2f\n", converted);
    } 
    else {
        printf("Invalid choice! Please enter C or F.\n");
    }

    return 0;
}