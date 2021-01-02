#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//function for main game content
int snakewatergun(char choiceu, char choicec){
    //cases
    //draw
    if(choiceu == choicec){
        return 0;
    }
    //non draw
    //sw
    //sg
    //wg
    if(choiceu== 's' && choicec== 'w'){
        return 1;
    }
    else if(choiceu== 'w' && choicec== 's'){
        return -1;
    }
    if(choiceu== 's' && choicec == 'g'){
        return -1;
    }
    else if(choiceu == 'g' && choicec== 's'){
        return 1;
    }
    if (choiceu == 'w' && choicec == 'g'){
        return 1;
    }
    else if( choiceu== 'g' && choicec == 'w'){
        return -1;
    }
}

//Main Function
    int main()
    {
        char choiceyour,choicecomp;
        int random;
        srand(time(0));
        random = rand()% 100 +1;//randomly generate a number between 1-100
        if(random < 33){
            choicecomp='s';
        }
        else if(random >30 && random < 60){
            choicecomp='w';
        }
        else
            choicecomp='g';

        printf("Enter your choice:\n");
        scanf("%c",&choiceyour);
        printf("You choice %c and computer choice %c.\n\n",choiceyour,choicecomp);

        int result = snakewatergun(choiceyour, choicecomp);//funtion call
        
        //choices based result
        if (result == 0 ){
            printf("Game is draw\n");
        }
        else if( result == 1){
            printf("You won the game \n");

        }
        else
        {
            printf("You lose\n");
        }
        
        return 0;
    }
    //