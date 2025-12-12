#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int id;
    char name[50];
    int room;
};

struct Student hostel[MAX_STUDENTS];
int count = 0;

void addStudent() {
    if (count >= MAX_STUDENTS) {
        printf("\nHostel is full!\n");
        return;
    }

    struct Student s;
    printf("Enter Student ID: ");
    scanf("%d", &s.id);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Room Number: ");
    scanf("%d", &s.room);

    hostel[count++] = s;
    printf("Student added successfully!\n");
}

void displayStudents() {
    if (count == 0) {
        printf("\nNo students to display!\n");
        return;
    }

    printf("\n--- Hostel Students List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Room: %d\n", hostel[i].id, hostel[i].name, hostel[i].room);
    }
}

void searchStudent() {
    int id;
    printf("Enter Student ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (hostel[i].id == id) {
            printf("Student Found: ID: %d | Name: %s | Room: %d\n", hostel[i].id, hostel[i].name, hostel[i].room);
            return;
        }
    }
    printf("Student not found!\n");
}

void deleteStudent() {
    int id;
    printf("Enter Student ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (hostel[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                hostel[j] = hostel[j + 1];
            }
            count--;
            printf("Student deleted successfully!\n");
            return;
        }
    }
    printf("Student not found!\n");
}

int main() {
    int choice;
    do {
        printf("\n--- Hostel Management System ---\n");
        printf("1. Add Student\n2. Display Students\n3. Search Student\n4. Delete Student\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}
