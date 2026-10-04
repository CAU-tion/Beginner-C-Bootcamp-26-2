#include <stdio.h>

void main(){
	int a, b, c, i;
	printf("if문 ,삼항 연자산자, switch문 순으로 입력\n");
	scanf("%d %d %d", &a, &b, &c);

	if(a>0)printf("양수 ");
	else if(a == 0)printf("0 ");
	else printf("음수 ");

	b > 0 ? printf("양수 ") : (b == 0 ? printf("0 ") : printf("음수 "));

	i = (c>0) - (c<0);
	switch(i){
		case 1:
			printf("양수");
			break;
		case -1:
			printf("음수");
			break;
		case 0:
			printf("0");
			break;
	}
}

