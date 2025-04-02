#include <iostream>  
#include <string>    
#include <cstdio>    
#include <cmath>     
using namespace std;

int main() {
    float weight, height, bmi;

    // Getting weight
    printf("Enter your weight (kg): ");
    scanf("%f", &weight);
    printf("Your weight is %.2f kg\n", weight);

    // Getting height
    printf("\nEnter your height (m): ");
    scanf("%f", &height);
    printf("Your height is %.2f m\n", height);

    // Correct BMI formula
    bmi = weight / (height * height);  

    printf("\nYour BMI is: %.2f\n", bmi);

    // Classifying BMI
    if (bmi < 18.5) {
        printf("You are underweight.\n");
    } else if (bmi < 24.9) {
        printf("You have normal weight.\n");
    } else if (bmi < 29.9) {
        printf("You are overweight.\n");
    } else {
        printf("You are obese.\n");
    }

    return 0;
}
