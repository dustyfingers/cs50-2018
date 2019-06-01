#include <stdio.h>

int main()
{
    int counter = 0;
    printf("Hello World\n");

    if (5 > 3) 
    {
        printf("5 is greater than 3\n");
    }
    else
    {
        printf("5 is not greater than 3\n");
    }

    while (counter <= 5)
    {
        printf("counter isnt equal to 5 yet!\n");
        counter += 1;
    }

    for (int i = 0; i <= 5; i++)
    {
        printf("Hello World\n");
    }
    
}
