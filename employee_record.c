#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "employees.txt"

typedef struct {
    int id;
    char name[100];
    float salary;
} Employee;

void addEmployee() {
    FILE *file = fopen("employee.txt", "a");
    if (!file) {
        perror("Cannot open file");
        return;
    }

    Employee emp;
    printf("Enter ID, Name and Salary: ");
    scanf("%d%*c%[^\n]%*c%f", &emp.id, emp.name, &emp.salary);
    fwrite(&emp, sizeof(Employee), 1, file);
    fclose(file);
}

void updateEmployee() {
    FILE *file = fopen("employee.txt", "r+");
    if (!file) {
        perror("Cannot open file");
        return;
    }

    int id, found = 0;
    printf("Enter ID to update: ");
    scanf("%d", &id);

    Employee emp;
    while (fread(&emp, sizeof(Employee), 1, file)) {
        if (emp.id == id) {
            found = 1;
            printf("Enter new Name and Salary: ");
            scanf("%*c%[^\n]%*c%f", emp.name, &emp.salary);
            fseek(file, -sizeof(Employee), SEEK_CUR);
            fwrite(&emp, sizeof(Employee), 1, file);
            break;
        }
    }

    fclose(file);
    if (!found) printf("Employee with ID %d not found.\n", id);
}


int main() {
    int choice;

    while (1) {
        printf("\n1. Add Employee\n2. Update Employee\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: updateEmployee(); break;
            case 3: exit(0);
            default: printf("Invalid choice.\n");
        }
    }

    return 0;
}




