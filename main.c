#include <stdio.h>

// Define a structure for a student
struct Student
{
    char name[50];
    int id, math, english, science, economic, account;
    float total, average;
};

int main()
{
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Declare an array of Student structures
    struct Student students[num_students];

    // Input details and grades for each student
    for (int i = 0; i < num_students; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter student name: ");
        scanf("%s", students[i].name);

        printf("Enter student ID: ");
        scanf("%d", &students[i].id);

        printf("Enter grade for math: ");
        scanf("%d", &students[i].math);

        printf("Enter grade for english: ");
        scanf("%d", &students[i].english);

        printf("Enter grade for science: ");
        scanf("%d", &students[i].science);

        printf("Enter grade for economic: ");
        scanf("%d", &students[i].economic);

        printf("Enter grade for account: ");
        scanf("%d", &students[i].account);

        // Calculate total and average grades for this student
        students[i].total = students[i].math + students[i].english + students[i].science + students[i].economic + students[i].account;
        students[i].average = students[i].total / 5;
    }

    // Output details and grades for each student
    for (int i = 0; i < num_students; i++)
    {
        printf("\nStudent %d details:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("ID number: %d\n", students[i].id);
        printf("Total marks: %.2f\n", students[i].total);
        printf("GPA: %.2f\n", students[i].average);
        if (students[i].average >= 60)
        {
            printf("Result: Pass\n");
        }
        else
        {
            printf("Result: Fail\n");
        }
    }

    return 0;
}
