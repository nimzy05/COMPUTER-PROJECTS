#include <stdio.h>
#include <stdlib.h>

int getUserinput()
{
    int Userinput;
    printf("Enter your input");
    scanf("%d", &Userinput);
    return 0;
}
//Example usage
int main(void){
    int Uservalue = getUserInput();
    printf("User input:");

    return 0;
}
