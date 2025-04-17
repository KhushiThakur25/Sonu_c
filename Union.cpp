// #include <stdio.h>
// #include <string.h>

// // Union definition
// union A
// {
//     int i;
//     float f;
//     char s[20];
// };

// int main()
// {

//     union A a;
//     union A b;
//     // Storing an integer
//     a.i = 10;
//     printf("data.i = %d", a.i);

//     // Storing a float
//     a.f = 220.5;
//     printf("data.f = %.2f", a.f);

//     // Storing a string
//     strcpy(a.s, "hello");
//     printf("data.s = %s", a.s);
//     printf("\n");

//     b.i = 20;
//     printf("data.i = %d", b.i);

//     // Storing a float
//     b.f = 210.5;
//     printf("data.f = %.2f", b.f);

//     // Storing a string
//     strcpy(b.s, "hello bye");
//     printf("data.s = %s", b.s);
//     printf("\n");
//     a.i = 10;
//     printf("data.i = %d", a.i);

//     // Storing a float
//     a.f = 220.5;
//     printf("data.f = %.2f", a.f);

//     // Storing a string
//     strcpy(a.s, "hello");
//     printf("data.s = %s", a.s);
//     printf("\n");

//     return 0;
// }

#include <stdio.h>
union Job
{
    float salary;
    int workerNo;
} j;

int main()
{
    j.salary = 12.3;
    printf("Salary = %.1f \n", j.salary);
    // when j.workerNo is assigned a value,
    // j.salary will no longer hold 12.3
    j.workerNo = 100;

    printf("Number of workers = %d", j.workerNo);
    // printf("Number of workers = %d", j.workerNo);
    return 0;
}