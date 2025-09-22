#include <stdio.h>

int main(){
    int winner = 0, count = 0;
    int pos[9], index, sign, player, flag, i, k, j;

    for(i=0; i<9; i++){
        pos[i] = ' ';
    
    }

    while(count <9 && winner != 1){
        flag=0;
        //print board 
        printf("/n")
        printf("%c|%c|%c", pos[0],pos[1], pos[2]);
        printf("-+-+-");
        printf("%c|%c|%c", pos[3], pos[4], pos[5]);
        printf("-+-+-");
        printf("%c|%c|%c", pos[0], pos[1],pos[9]);

        if(count %2 == 0){
            sign = 'x';
            player = 1;
        }else{
            sign = 'o';
            player = 2;
        }

        printf("Move for player%d(1-9): ", player)
        scanf("%d", &index);
        
    }
}