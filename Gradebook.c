#include <stdio.h>
struct student_details
{
    char student_name[100];
    int score[100];
    float average;
    char grade;
};
typedef struct student_details Student;
struct gradebook
{
    char name_subject[100];
    int no_students;
    int no_score;
    float weight[100];
    Student students[100];
};
typedef struct gradebook Book;

Student input_one_student(int tscores)
{
    Student tempstudent;
    scanf("%s", tempstudent.student_name);
    for (int i = 0; i < tscores; i++)
    {
        scanf("%d", &tempstudent.score[i]);
    }
    return tempstudent;
}

Book input_one_gradebook()
{
    Book tempbook;
    scanf("%s", tempbook.name_subject);
    scanf("%d", &tempbook.no_students);
    scanf("%d", &tempbook.no_score);
    for (int i = 0; i < tempbook.no_score; i++)
    {
        scanf("%f", &tempbook.weight[i]);
    }
    for (int i = 0; i < tempbook.no_students; i++)
    {
        tempbook.students[i] = input_one_student(tempbook.no_score);
    }
    return tempbook;
}
void input_n_gradebooks(int testcases, Book subject[testcases])
{
    for (int i = 0; i < testcases; i++)
    {
        subject[i] = input_one_gradebook();
    }
}
char compute_grade(Student s)
{
    if (0 <= s.average && s.average < 60)
        s.grade = 'F';
    else if (60 <= s.average && s.average < 70)
        s.grade = 'D';
    else if (70 <= s.average && s.average < 80)
        s.grade = 'C';
    else if (80 <= s.average && s.average < 90)
        s.grade = 'B';
    else
        s.grade = 'A';
    return s.grade;
}

void compute_one_gradebook(Book *pg)
{
    float sum = 0, sum_of_weights = 0;
    for (int i = 0; i < pg->no_score; i++)
    {
        sum_of_weights = pg->weight[i] + sum_of_weights;
    }
    for (int i = 0; i < pg->no_students; i++)
    {
        sum = 0;
        for (int j = 0; j < pg->no_score; j++)
        {
            sum = sum + pg->students[i].score[j] * pg->weight[j];
        }
        pg->students[i].average = sum / sum_of_weights;
        pg->students[i].grade = compute_grade(pg->students[i]);
    }
}

void compute_n_gradebooks(int testcases, Book subject[testcases])
{
    for (int i = 0; i < testcases; i++)
    {
        compute_one_gradebook(&subject[i]);
    }
}

void print_one_students(Student s)
{
    printf("%s\t%.2f\t%c\n", s.student_name, s.average, s.grade);
}

void print_n_students(int testcases, Book subject[testcases])
{
    for (int i = 0; i < testcases; i++)
    {
        printf("%s \n", subject[i].name_subject);
        for (int j = 0; j < subject[i].no_students; j++)
        {
            print_one_students(subject[i].students[j]);
        }
    }
}

int main()
{
    int testcase;
    scanf("%d", &testcase);
    Book subject[testcase];
    input_n_gradebooks(testcase, subject);
    compute_n_gradebooks(testcase, subject);
    print_n_students(testcase, subject);
}
