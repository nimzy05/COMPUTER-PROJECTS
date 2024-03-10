#include <stdio.h>
#include <stdlib.h>

int main()
{
    float start, end, increment;

    printf("Enter the starting value:");
    scanf("%d", &start);

    printf("Enter the end value:");
    scanf("%d", &end);

    printf("Enter the increment value:");
    scanf("%d", &increment);

    //Adding a heading line
    printf("\nFahrnheit\tCelsius\n");

    //Converting farenheit to celsius and printing the table
    for (float fahrenheit =start;fahrenheit<=end;fahrenheit+=increment){
            float celsius = (fahrenheit-32)*5/9;
        printf("%0.2f\t\t%0.2f\n", fahrenheit, celsius);
    }
    return 0;
}
