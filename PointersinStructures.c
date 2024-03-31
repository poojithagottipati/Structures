#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    float marks;
};

int main() {
    struct student s1={1, "pooji", 90};
    struct student *ptr=&s1;
    
    printf("Details of student 1:\n");
    printf("%d %s %f", (*ptr).rollno, ptr->name, ptr->marks);
    

    // for (int i = 0; i < 3; i++) {
    //     printf("%d %s %f\n", s[i].rollno, s[i].name, s[i].marks);
    // }
   
    return 0;
}
/*
Details of student 1:
1 pooji 90.000000
*/
