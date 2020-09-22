#include <stdio.h>
#include "ArrayList.h"

int main(){
    List list;
    int data;
    ListInit(&list);

    LInsert(&list, 11);

    printf("%d", LCount(&list));

    if(LFirst(&list, &data)){
        printf("%d ", data);

        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");
    if(LFirst(&list, &data)){

    }
}