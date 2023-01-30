#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int snakewatergun(char,char);
int main()
{
    char comp, you, number, result;
    srand(time(0));
    number = rand() % 100 + 1;
    if (number < 33)
        comp = 's';
    else if (number > 33 && number < 66)
        comp = 'w';
    else
        comp = 'g';
    printf("Enter 'S' for snake ,'w' for water ,'g' for gun\n");
    scanf("%c", &you);
    result = snakewatergun(you, comp);
    if (result == 0)
        printf("match draw");
    else if (result == -1)
        printf("lose");
    else
        printf("win");
    printf("\nyou choose %c and comp chouse %c \n", you,comp);
    return 0;
}

int snakewatergun(char you, char comp){
    if (you == comp)
        return 0;
    if (you == 's' && comp == 'w')
        return 1;
    else if (you == 'w' && comp == 's')
        return -1;
    if (you == 'w' && comp == 'g')
        return 1;
    else if (you == 'g' && comp == 'w')
        return -1;
    if (you == 'g' && comp == 's')
        return 1;
    else if (you == 's' && comp == 'g')
        return -1;
}
