#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a = 0;
    while (a<=200){
            if (a!= 98.6){
                printf("%6.2f degrees Fahrenheit = %6.2f degrees Celsius\n",
                        a, (a -32.0) * 5.0 / 9.0);
            }
            a += 10;
    }

    return 0;
}
