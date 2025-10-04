#include <stdio.h>

int main() {
    int n, pos=0, neg=0, zero=0;
    char ch='y';

    while(ch=='y' || ch=='Y'){
        printf("Enter number: ");
        scanf("%d", &n);

        if(n>0) pos++;
        else if(n<0) neg++;
        else zero++;

        printf("Continue? (y/n): ");
        scanf(" %c",&ch);
    }

    printf("Positive=%d Negative=%d Zero=%d", pos,neg,zero);
    return 0;
}
