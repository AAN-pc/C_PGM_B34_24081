#include <stdio.h>

union Address {
    char name[50];
    char home[50];
    char hostel[50];
    char city[50];
    char state[50];
    char zip[50];
};

int main(){
    union Address a;

    strcpy(a.city, "Dehradun");
    printf("Present address: %s", a.city);

    return 0;
}
