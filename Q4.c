#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int i = 0;
	int length = 100;
	int value = 7;
	int arr[100];
	while(i < length){
		arr[i] = i + 1;
		i++;
	}
	int output = prop1(&arr, i, value);
	printf("%d", output);
	return 0;
}

int prop1(int *array, int size, int b){
	int x = 0;
	int y = 0;
	int i;
	int i2 = 1;
	for(i = 0; i<size; i++){
		while (i2<b){
			if((4*x + *array) == 0){
				b = (x+1)/b;
			}
			else{
				i2++;
				array++;
				x = 4*x;
			}
		}
		
	}
	return 50;
}
