#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// #include<math.h> for pow function till now

int main(){
    int number;
    srand(time(0));
    number=rand()%100 + 1 ; //generate a random number between 1 and 100
    // keep running the loop until the number is guessed
    printf("The number is %d",number );
    return 0;
}