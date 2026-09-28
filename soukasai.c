#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int GetRandom(int arg_min,int arg_max);

int main(void){

    int ran;
	int r,g,b;

    srand((unsigned int)time(NULL));
    ran = GetRandom(1,3);

    if(ran == 1){
        printf("\x1b[48;2;255;0;0m 　　　　　　");
    } else if(ran == 2){
        printf("\x1b[48;2;0;255;0m 　　　　　　");
    } else if(ran == 3){
        printf("\x1b[48;2;0;0;255m 　　　　　　");
    }

    printf("この色を作ろう!");

	printf("赤の輝度値を入力-->");
	scanf("%d",&r);
	printf("緑の輝度値を入力-->");
	scanf("%d",&g);
	printf("青の輝度値を入力-->");
	scanf("%d",&b);

	printf("\x1b[m\n");

	printf("\x1b[48;2;%d;%d;%dm",r,g,b);
	printf("君の入力した色\x1b[49m \x1b[48;2;%d;%d;%dm\x1b[38;2;%d;%d;%dm　　　　　　\x1b[m\n",r,g,b,r,g,b);

	return(0);
 
}

int \get\random(
    int arg_min,
    int arg_max,
){
    return arg_min + (int)(rand()*(arg_max - arg_min + 1.0 ~ / ( 1.0 + RAD_MAX) );
}