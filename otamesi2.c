#include <stdio.h>
#include <string.h>

int main(void){

	int  aaa;
	int  r,g,b;
	char c[6];
	char r_1[3],b_1[3],g_1[3];

	printf("以下、背景色255;255;255、文字色0;0;0\x1b[48;2;255;255;255m\x1b[38;2;0;0;0m\n");

	do {
		printf("輝度値で入力する場合は1を、カラーコードで入力する場合は2を入力-->");
		scanf("%d",&aaa);
	} while( aaa != 1 && aaa != 2 );

	if( aaa == 1 ){
		printf("赤の輝度値を入力-->");
		scanf("%d",&r);
		printf("緑の輝度値を入力-->");
		scanf("%d",&g);
		printf("青の輝度値を入力-->");
		scanf("%d",&b);
	} else {
		printf("カラーコードを記入-->");
		scanf("%6s",c);
		sscanf(&c[0],"%2x",&r);
		sscanf(&c[2],"%2x",&g);
		sscanf(&c[4],"%2x",&b);
	}

	printf("\x1b[m\n");

	printf("\x1b[38;2;%d;%d;%dm",r,g,b);
	printf("文字色を変更\x1b[39m \x1b[48;2;%d;%d;%dm\x1b[38;2;%d;%d;%dm　　　　　　\x1b[m\n",r,g,b,r,g,b);

	printf("\x1b[48;2;%d;%d;%dm",r,g,b);
	printf("背景色の変更\x1b[49m \x1b[48;2;%d;%d;%dm\x1b[38;2;%d;%d;%dm　　　　　　\x1b[m\n",r,g,b,r,g,b);

	return(0);
 
}