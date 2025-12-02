#include <stdio.h>

int main() {
    // 1. Count positive/negative/zero
    int n, pos=0, neg=0, zero=0;
    char ch='y';
    while (ch=='y') {
        printf("Enter number: ");
        scanf("%d",&n);
        if(n>0) pos++;
        else if(n<0) neg++;
        else zero++;
        printf("Continue? (y/n): ");
        scanf(" %c",&ch);
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n",pos,neg,zero);

    // 2. Multiplication table
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int i=1;i<=10;i++)
        printf("%d * %d = %d\n", num, i, num*i);

    // 3a. Pattern
    int k=1;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=i;j++)
            printf("%d ",k++);
        printf("\n");
    }

    return 0;
}
