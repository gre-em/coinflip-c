#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    // randomize value
    srand(time(0));
    int coin = (rand() % 2);

    // print outcome
    if (coin == 0)
        printf("\n >>> Heads! <<<\n\n");
    else if (coin == 1)
        printf("\n >>> Tails! <<<\n\n");
    else
    {
        printf("Something went wrong! :\(\(\(\n");
        return 1;
    }

    system("pause");
}
 
