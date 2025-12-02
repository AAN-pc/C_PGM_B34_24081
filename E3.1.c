#include <stdio.h>
#include <math.h>

int main() {
    // 1. Triangle type
    int a, b, c;
    printf("Enter 3 sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b) {
        printf("Valid triangle\n");
        if (a == b && b == c) printf("Equilateral\n");
        else if (a == b || b == c || c == a) printf("Isosceles\n");
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            printf("Right angled\n");
        else printf("Scalene\n");
    } else {
        printf("Invalid triangle\n");
    }

    // 2. BMI
    float wt, ht, bmi;
    printf("Enter weight & height: ");
    scanf("%f %f", &wt, &ht);
    bmi = wt / (ht * ht);
    printf("BMI = %.2f\n", bmi);

    // 3. Collinearity
    float x1,y1,x2,y2,x3,y3;
    printf("Enter points: ");
    scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
    if ((y2 - y1)*(x3 - x2) == (y3 - y2)*(x2 - x1))
        printf("Collinear\n");
    else printf("Not collinear\n");

    // 4. Day of 1 Jan of given year
    int year, day;
    printf("Enter year: ");
    scanf("%d", &year);
    day = (year + (year-1)/4 - (year-1)/100 + (year-1)/400) % 7;
    char *days[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    printf("1 Jan %d is %s\n", year, days[day]);

    return 0;
}
