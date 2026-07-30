#include <stdio.h>
#include <stdlib.h>

int main(){
	char *test = 0x0;
	test = malloc(sizeof(int) * 20);
	for(int i = 0; i < 20; i++){
		test[i] = i;
	}
	for(int i = 0; i < 20; i++){
		printf("%d\n", test[i]);
	}
}
