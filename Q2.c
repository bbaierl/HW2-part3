#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int length = 7;
	int arr[] = {12, 15, 221, 3, 432, 54, 16, 67};
	int i;	
	int maxItem;
	for(i = 0; i < length; i++){
		if(arr[i] > maxItem){
			maxItem = arr[i];
		}
		
	}
	printf("%d", maxItem);
	return 0;
}
