#include <stdio.h>
#include <stdlib.h>

int main()
{
    float start, end, increment;

    //Accepting input from user
    printf("Enter the starting value(in pounds):");
    scanf("%f", &start);

    printf("Enter the ending value(in pounds):");
    scanf("%f", &end);

    printf("Enter the increment value:");
    scanf("%f", &increment);
    //Adding a heading line
    printf("\nPounds\t\tKilograms\n");

    //converting pounds to kilograms and printing the table
    for(float pounds=start;pounds<=end;pounds+=increment){
        float kilograms = pounds*0.453592;
        printf("%0.2f\t\t%0.2f\n", pounds, kilograms);
    }
    return 0;
}
