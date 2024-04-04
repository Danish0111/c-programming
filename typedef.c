#include <stdio.h>
typedef struct student{
    char name[34];
    int id;
    char course[10];
    int sem;
}std;
int main(){
    // struct student s1, s2;
    std s1, s2;
    s1.id = 12;
    s2.id = 39;
    typedef int* intpointer;
    intpointer a, b;
    int c = 4;
    a = &c;
    b = &c;
    // typedef unsigned long ul;
    // typedef int integer;
    // ul l1, l2, l3;
    // l1 = 2;
    // printf("%d\n", l1);
    // integer a = 5;
    // printf("%d\n", a);
    printf("%d\n", s1.id);
    printf("%d\n", s2.id);
    return 0;
}