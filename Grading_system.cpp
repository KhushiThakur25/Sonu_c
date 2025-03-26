#include <stdio.h>

int main()
{
    float physics, chemistry, computer, maths, english;
    float percentage;
    printf("Enter the marks of: \n");
    printf("Physics : ");
    scanf("%f", &physics);
    printf("Chemistry : ");
    scanf("%f", &chemistry);
    printf("Computer : ");
    scanf("%f", &computer);
    printf("Maths : ");
    scanf("%f", &maths);
    printf("English : ");
    scanf("%f", &english);

    percentage = (physics + chemistry + maths + computer + english) / 5;
    printf("%f \n", percentage);

    if (percentage >= 90)
    {
        printf("Your Grade is A");
    }
    else if (percentage >= 80)
    {
        printf("Your Grade is B");
    }
    else if (percentage >= 70)
    {
        printf("Your Grade is C");
    }
    else if (percentage >= 60)
    {
        printf("Your Grade is D");
    }
    else if (percentage >= 40)
    {
        printf("Your Grade is E");
    }
    else
    {
        printf("Your Grade is F = Fail");
    }
}