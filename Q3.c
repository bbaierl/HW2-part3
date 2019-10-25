#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int x;
	for(x = 100; x<=999; x++){
		int a = x/100;
		int b = (x+(a)*-100)/10;
		int c = x - ((x/10)*4 + x/10)*2;
		
		if ((a^3 + b^3 + c^3) == x){
			printf("%d",x);
		}
	}
	
	return 0;
}
