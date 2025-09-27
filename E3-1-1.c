#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter 3 sides: ");
    scanf("%d %d %d", &a,&b,&c);

    if(a+b<=c || b+c<=a || c+a<=b)
        printf("Not a valid triangle");
    else {
        if(a==b && b==c) printf("Equilateral");
        else if(a==b || b==c || c==a) printf("Isosceles");
        else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            printf("Right angled");
        else printf("Scalene");
    }
    return 0;
}
