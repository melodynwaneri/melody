#include <stdio.h>
#include <cs50.h>
#include <strings.h>

int main (void)
{
    float weight = 0.0;
    float height = 0.0;
    float BMI = 0.0;

    printf("please enter your weight in pounds:  ");
    scanf("%f", &weight);
    printf("please enter your height in inches:  ");
    scanf("%f", &height);

    BMI = weight / (height * height);

    if(BMI <= 18.5)
        printf("Your BMI is %f:\n You are Underweight.\n", BMI);
    else if(BMI <= 24.9)
        printf("Your BMI is %f:\n Your weight is normal.\n", BMI);
    else if(BMI <= 29.9)
        printf("Your BMI is %f:\n You are overweight.\n", BMI);
    else
        printf("Your BMI is %f:\n You need to cut down on your food intake, i would recommend going to see the doctor.\n", BMI);

    return 0;
}

