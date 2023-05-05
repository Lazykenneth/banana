#include<stdio.h>

enum DesignFlags{
    BOLD,
    ITALICS,
    UNDERLINE
};

int main(){
    enum DesignFlags value;

    printf("Enter design flag value: ");
    scanf("%d",&value);

    if (value == 53) {
        printf("BOLD");
    } else if (value == 73) {
        printf("ITALICS");
    } else if (value == 15) {
        printf("UNDERLINE");
    } else {
        printf("Not a valid design flag\n");
    }



}