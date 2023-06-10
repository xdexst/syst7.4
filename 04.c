#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("Test v7.4: OK.\n");
	srand(time(0));

	int s,i,j,a[10][10];

	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			a[i][j]=rand()%201-100;
			if(j==i) s+=a[i][j];
			if(j==9) {
				printf("%d\n",a[i][j]);
			} else {
				printf("%d, ",a[i][j]);
			}
		}
	}
	
	printf("Sum of main diagonal: %d\n", s);
	
	return 0;
}
