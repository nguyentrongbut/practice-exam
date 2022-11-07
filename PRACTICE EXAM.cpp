#include<stdio.h>

int main() {
	int i;
	int arr[10];
	printf("Enter 10 integers\n ");
	for(i = 1; i <= 10; i++) {
		printf("a[%d]", i);
		scanf("%d", &arr[i]);
	}
	printf("Display in the reversed order\n");
	for(i=10; i>0; i--) {
		printf("%d\n", arr[i]);
	}
}
