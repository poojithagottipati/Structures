#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CharStruct {
    char c;
};
int compare(const void *a, const void *b) {
    struct CharStruct *charA = (struct CharStruct *)a;
    struct CharStruct *charB = (struct CharStruct *)b;
    return charA->c - charB->c;
}
int main() {
    struct CharStruct array[] = {
        {'h'},
        {'e'},
        {'l'},
        {'l'},
        {'o'}
    };

    size_t arraySize = sizeof(array) / sizeof(array[0]);

    qsort(array, arraySize, sizeof(struct CharStruct), compare);

    printf("Sorted array: ");
    for (size_t i = 0; i < arraySize; i++) {
        printf("%c ", array[i].c);
    }
    printf("\n");

    return 0;
}
/*
Sorted array: e h l l o 
*/
