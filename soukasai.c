#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int GetRandom(int arg_min,int arg_max);

int main(void){

    int ran;
	int ar,ag,ab,qr,qg,qb;

    srand((unsigned int)time(NULL));
    ran = GetRandom(1,6);

    if(ran == 1){
        printf("\x1b[48;2;255;0;0m 　　　　　　");
    } else if(ran == 2){
        printf("\x1b[48;2;0;255;0m 　　　　　　");
    } else if(ran == 3){
        printf("\x1b[48;2;0;0;255m 　　　　　　");
    } else if(ran == 4){
        printf("\x1b[48;2;255;255;0m 　　　　　　");
    } else if(ran == 5){
        printf("\x1b[48;2;255;0;255m 　　　　　　");
    } else if(ran == 6){
        printf("\x1b[48;2;0;255;255m 　　　　　　");
    }

    printf("\x1b[m\nこの色を作ろう!\n");

	printf("赤の輝度値を入力-->");
	scanf("%d",&ar);
	printf("緑の輝度値を入力-->");
	scanf("%d",&ag);
	printf("青の輝度値を入力-->");
	scanf("%d",&ab);

    ar = ar * 2.55;
    ag = ag * 2.55;
    ab = ab * 2.55;

	printf("君の入力した色\x1b[49m \x1b[48;2;%d;%d;%dm\x1b[38;2;%d;%d;%dm　　　　　　\x1b[m\n",ar,ag,ab,ar,ag,ab);
    
	return(0);
 
}

int GetRandom(
    int arg_min,
    int arg_max
){
    return arg_min + (int)(rand()*(arg_max - arg_min + 1.0 ) / ( 1.0 + RAND_MAX) );
}