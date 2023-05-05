#include <stdio.h>

enum Suit {
    CLUB = 1,
    DIAMOND,
    HEART,
    SPADE
};

int main() {
    int n, i, input;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &input);

        if(input < CLUB || input > SPADE) {
            printf("Invalid suit!\n");
            i--;
        }
    }

    return 0;
}


