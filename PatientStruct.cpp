#include <stdio.h>
struct Patient
{
    int id;
    char name[20];
    int age;
    float amount;
    char disease[20];
};

int main()
{
    struct Patient pt = {101, "Riya", 18, 7880.0, "asthama"};
    struct Patient pt1 = {102, "Siya", 19, 7880.0, "asthama"};
    printf("id = %d , name = %s , age = %d, amount = %f,  disease = %s,", pt.id, pt.name, pt.age, pt.amount, pt.disease);
    printf("id = %d , name = %s , age = %d, amount = %f,  disease = %s,", pt1.id, pt1.name, pt1.age, pt1.amount, pt1.disease);
}