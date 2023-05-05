#include <stdio.h>

enum Season {
    SPRING = 1,
    SUMMER = 2,
    AUTUMN = 3,
    WINTER = 4
};

int main() {
    enum Season num;

    while (1) {
        printf("Enter an integer: ");
        scanf("%d", &num);

        switch (num) {
            case 0:
                return 0;
            case SPRING:
                printf("SPRING\n");
                break;
            case SUMMER:
                printf("SUMMER\n");
                break;
            case AUTUMN:
                printf("AUTUMN\n");
                break;
            case WINTER:
                printf("WINTER\n");
                break;
            default:
                return 0;
        }
    }
}

