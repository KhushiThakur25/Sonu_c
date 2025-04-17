#include <stdio.h>
struct Student
{
    char name[20];
    int age;
    float marks;
    char subject[20];
};

int main()
{
    struct Student st = {"Riya", 18, 70.0,"physics"};
    struct Student st1 = {"Siya", 19, 80.0,"chemistry"};

    printf("%s ,%d, %f, %s,", st.name, st.age, st.marks,st.subject);
}