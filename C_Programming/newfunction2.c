
}#include <stdio.h>

float calculator(float value1, float value2, float value3, float value4)
{
    float average;

    average = (value1 + value2 + value3) / value4;

    return average;
}

int main()
{
    float maths, biology, physics, subjects, grade;

    printf("Enter your mathematics marks: ");
    scanf("%f", &maths);

    printf("Enter your biology marks: ");
    scanf("%f", &biology);

    printf("Enter your physics marks: ");
    scanf("%f", &physics);

    printf("Enter total number of subjects: ");
    scanf("%f", &subjects);

    grade = calculator(maths, biology, physics, subjects);

    printf("YOUR TOTAL AVERAGE IS: %.2f\n", grade);

    return 0;
}
