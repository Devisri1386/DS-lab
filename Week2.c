#include <stdio.h>

int main() {
    int roll_no;
    char name[20];
    int marks[4];
    int i, total = 0;

    printf("Enter the roll number: ");
    scanf("%d", &roll_no);
    getchar(); 

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your 4 subject marks:\n");
    for(i = 0; i < 4; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", roll_no);
    printf("Name: %s", name); 

    for(i = 0; i < 4; i++) {
        printf("Marks scored in subject %d: %d\n", i + 1, marks[i]);
    }

    printf("Total Marks: %d\n", total);

    return 0;
}
