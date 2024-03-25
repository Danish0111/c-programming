#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int win(int player,int computer){
    if(player > computer){
        return 1;
    }
    else if(player < computer){
        return -1;
    }

    return 0;
}
int main(){
    srand(time(NULL));
    int player,computer,chance;
    printf("guess the number from (1 - 10) \n ");
    scanf("%d",&player);
    computer = rand()%10+1;
    chance = 1;
    while(chance != 5){
        if(win(player,computer) == 1){
        printf("your number is large guess smaller number\n");
        }
        else if(win(player,computer) == -1){
            printf("your number is small guess larger number\n");
        }
        else{
            printf("you guessed correct number");
            break;    
        }   
        printf("guess the number from (1 - 10) \n ");
        scanf("%d",&player);  
        chance++;
        if(chance == 5){
            printf("you have attempted the maximum chances\n try again\n");
            break;
        }
    } 
    return 0;
}                                                    