#include <stdio.h>

int main(void)
{
    printf("Do you agree?");
    char character = getchar();

    if(character=='y'||character=='Y')
    {
        printf("Agreed\n");
    }
    else if(character=='n'||character=='N')
    {
        printf("Not Agreed\n");
    }
    else
    {
        printf("Invalid Response\n");
    }
}
