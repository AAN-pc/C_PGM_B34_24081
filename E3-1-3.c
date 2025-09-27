#include <stdio.h>

int main() {
    int x1,y1,x2,y2,x3,y3;
    printf("Enter 3 points: ");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);

    int area = x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);

    if(area == 0) printf("Collinear");
    else printf("Not collinear");

    return 0;
}
