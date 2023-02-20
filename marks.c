#include <stdio.h>

int main()
{
    float eng, physics, chemistry, maths, computer; 
    float total, average, percentage;

    /* Input marks of all five subjects */
    printf("Enter marks english \n");
    scanf("%f", &eng);
     printf("Enter marks physics\n");
    scanf("%f", &physics);
     printf("Enter marks chemistry \n");
    scanf("%f", &chemistry);
     printf("Enter marks maths\n");
    scanf("%f", &maths);
    printf("Enter marks computer\n");
    scanf("%f", &computer);


    /* Calculate total, average and percentage */
    total = eng + physics + chemistry + maths + computer;
    average = total / 5;
    percentage = (total / 500) * 100;

    /* Print all results */
    // printf("Total marks = %f\n", total);
    // printf("Average marks = %f\n", average);
    // printf("Percentage = %f\n", percentage);

    return 0;
}