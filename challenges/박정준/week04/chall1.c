#include <stdio.h>

void print_banner(){
	printf("Caesar Ciper Challenge\n");
}

void encode(char *str, int shift){
	int i = 0;
	shift = shift % 26;
	while(str[i] != 0){
		if(str[i] >= 65 && str[i] <= 90){
			if(str[i] + shift <= 90)str[i] = str[i] + shift;
			else str[i] = str[i] + shift - 26;
		}
		else if(str[i] >= 97 && str[i] <= 122){
			if(str[i] + shift <= 122)str[i] = str[i] + shift;
			else str[i] = str[i] + shift - 26;
		}
		i++;
	}
}

int get_shift(){
	int getshift;
	printf("Shift num: ");
	scanf("%d", &getshift);
	return getshift;
}

void main(){
	char caesar[100];
	int sft;

	print_banner();

	printf("Write any string: ");
	fgets(caesar, sizeof(caesar), stdin);

	sft = get_shift();

	encode(caesar, sft);

	printf("Encoded string: %s\n", caesar);
}
