#include <stdio.h>

int main(){
    int n,a[50],key,count=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&key);

    for(int i=0;i<n;i++)
        if(a[i]==key) count++;

    printf("Frequency=%d", count);
    return 0;
}
