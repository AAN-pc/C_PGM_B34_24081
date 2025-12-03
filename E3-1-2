#include <stdio.h>

int main() {
    float w, h, bmi;
    printf("Enter weight(kg) & height(m): ");
    scanf("%f %f", &w,&h);

    bmi = w / (h * h);
    printf("BMI = %.2f\n", bmi);

    if(bmi < 15) printf("Starvation");
    else if(bmi <= 17.5) printf("Anorexic");
    else if(bmi <= 18.5) printf("Underweight");
    else if(bmi <= 24.9) printf("Ideal");
    else if(bmi <= 25.9) printf("Overweight");
    else if(bmi <= 39.9) printf("Obese");
    else printf("Morbidly Obese");

    return 0;
}
