#include <stdio.h>
#include <string.h>
struct student{
    char name[34];
    int id;
    char course[10];
    int sem;
};
int main(){
    struct student a, b, c;
    strcpy(a.name, "Danish");
    a.id = 132;
    strcpy(a.course, "BCA");
    a.sem = 2;
    printf("name = %s\n", a.name);
    printf("id = %d\n", a.id);
    printf("course = %s\n", a.course);
    printf("sem = %d\n", a.sem);
    
    return 0;
}