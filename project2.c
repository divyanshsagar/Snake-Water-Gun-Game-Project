#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakewatergun(char you, char computer)
{
    if (you == computer)
    {
        return 0;
    }
    if (you = 's' && computer == 'g')
    {
        return -1;
    }
    if (you = 'g' && computer == 's')
    {
        return 1;
    }
    if (you = 'w' && computer == 's')
    {
        return -1;
    }
    if (you = 's' && computer == 'w')
    {
        return 1;
    }
    if (you = 'w' && computer == 'g')
    {
        return 1;
    }
    if (you = 'g' && computer == 'w')
    {
        return -1;
    }
}
int main()
{
    int result;
    char you, computer, number;
    srand(time(0));
    number = rand() % 15 + 1;
    if (number <= 5)
    {
        computer = 's';
    }
    else if (number > 5 && number <= 100)
    {
        computer = 'w';
    }
    else
    {
        computer = 'g';
    }
    printf("Enter 's' for snake, 'w' for water,'g' for gun\n");
    scanf("%c", &you);
    printf("You chose %c and computer chose %c\n", you, computer);
    result = snakewatergun(you, computer);
    if (result == 0)
    {
        printf("Game draw !\n");
    }
    else if (result == 1)
    {
        printf("You win !\n");
    }
    else
    {
        printf("Computer win !\n");
    }

    return 0;
}