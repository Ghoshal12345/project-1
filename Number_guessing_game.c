#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #include<math.h> for pow function till now
int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // generate a random number between 1 and 100
    // keep running the loop until the number is guessed

    // printf("The number is %d\n",number );// is line ko executable nahi hona hai
    // nahi to jo random number aya vo to pehle se hi dikh jayega
    printf("I have generated a number\n");
    printf("Now,Guess the number between 1 and 100\n");
    
    do
    {
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower number please!\n");
        }
        else if (guess < number)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("you guessed it right in %d attempts\n", nguesses);
        }
        nguesses += 1;
    } while (guess != number);
    return 0;
}