#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number,count=1,guess;
    srand(time(0));
    number = rand()%100 + 1;
       printf("Guess your number bet 1 to 100\n");
    do
    {
     
        scanf("%d", &guess);
        if (guess > number)
        {
printf("Lower number please\n");
        }
        if (guess < number)
        {
printf("Higher number please\n");
        }
      count++;
    } while (guess != number);
    printf("you guessed in %d",count);
    return 0;
}
