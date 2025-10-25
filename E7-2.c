#include <stdio.h>

struct emp {
    char name[50];
    float basic;
};

int main(){
    struct emp e[10];

    for(int i=0;i<10;i++){
        scanf("%s%f", e[i].name, &e[i].basic);
        float gross = e[i].basic + 0.52*e[i].basic;
        printf("%s %.2f\n", e[i].name, gross);
    }
    return 0;
}
