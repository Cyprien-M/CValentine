#include <stdio.h>

int main(void) {

    char response;
    
    do {
        printf("%s","Will you be my valentine ?[y/n]");
        scanf(" %c", &response);

        if (response !='y'){
            char no;
            do{
                printf("%s","Are you sure ? [y/n]");
                scanf(" %c",&no);
            }while(no !='n');
            
        };

    }while(response !='y');

    printf("%s", "YEPPEEEEEEEE  !!!!");

}

