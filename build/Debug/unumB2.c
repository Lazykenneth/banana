int main(void) {
    printf("%d",PHILIPPINES)
}



#include <stdio.h>
#include <string.h>

enum Currency{
    PHP,
    USD,
    CAD,
    GBP
};

int main(){
    char cr[10];

    printf("Enter currency: ");
    scanf(" %s",cr);

    if(strcmp(cr,"PHP")==0){
        printf("Philippines");
    }
    if(strcmp(cr,"USD")==0){
        printf("USA");
    }
    if(strcmp(cr,"CAD")==0){
        printf("Canada");
    }
    if(strcmp(cr,"GBP")==0){
        printf("Britain");
    }
}

