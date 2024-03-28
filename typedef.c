#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    float height;
} Person;

int main() {
    Person person1;

    strcpy(person1.name, "John");
    person1.age = 30;
    person1.height = 6.0;

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}
/*
Name: John
Age: 30
Height: 6.00
*/
