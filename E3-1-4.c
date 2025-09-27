#include <stdio.h>

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    int days = (year - 1) * 365 + (year - 1)/4 - (year - 1)/100 + (year - 1)/400;
    int day = days % 7;

    char* names[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    printf("1 January %d was %s", year, names[day]);

    return 0;
}
