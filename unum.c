#include<stdio.h>

int main(void) {
    enum Week day;
    printf("Enter day number: ");
    scanf("%d", &day);

    switch (day) {
        case MON:
            printf("Monday\n");
            break;
        case TUE:
            printf("Tuesday\n");
            break;
        case WED:
            printf("Wednesday\n");
            break;
        case THU:
            printf("Thursday\n");
            break;
        case FRI:
            printf("Friday\n");
            break;
        case SAT:
            printf("Saturday\n");
            break;
        case SUN:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number.\n");
            break;
    }

    return 0;
}