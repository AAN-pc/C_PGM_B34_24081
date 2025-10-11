#include <stdio.h>

int main() {
    int n,a[50];
    int pos=0,neg=0,odd=0,even=0;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>0) pos++;
        else if(a[i]<0) neg++;

        if(a[i]%2==0) even++;
        else odd++;
    }

    printf("Positive=%d Negative=%d Odd=%d Even=%d", pos,neg,odd,even);
    return 0;
}
