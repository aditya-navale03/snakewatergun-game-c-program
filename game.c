#include <stdio.h>
#include<stdlib.h>
#include<time.h >

/*
	@author: Aditya Navale
	@email: aditya.navale.399@gmail.com
	
*/

int snakewatergun(char you ,  char comp) {
    //return 1 if you win ,-1 if lose and 0 if draw
    //draw case
    if (you == comp) {
        return 0;
    }
    //snake gun or gun snake 
    if (you == 's' && comp == 'g') {
        return -1;
    } else if (you == 'g' && comp == 's' ) {
        return 1;
    }

    //snake water or water snake
    if (you == 's' && comp == 'w') {
        return 1;
    } else if (you == 'w' && comp == 's'){
        return -1;
    }

    //gun water or water gun
    if (you == 'g' && comp == 'w') {
        return -1;
    } else if (you == 'w' && comp == 'g') {
        return 1;
    }

}
int main() {

    char you,comp;
    srand(time(0));
    int number = rand()%100 + 1;
    
    if (number <33) {
        comp = 's';
    }
    else if(number >33 && number <66) {
        comp ='w';
    } else {
        comp =  'g';
    }

    printf("enter 'S' for snake\nenter 'W' for water\nenter 'G' for gun\n");
    scanf("%c",&you);
    int result = snakewatergun(you, comp);
    printf("you choose %c and computer choose %c.\n",you, comp);
    if (result == 0) {
        printf("game draw\n");
    }

    if (result == 1) {
        printf("you win\n");
    }

    if (result == -1) {
        printf("you lose\n");
    }
    
    return 0;
}