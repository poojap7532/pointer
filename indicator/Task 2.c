#include<stdio.h>
//2. C program to input and print array elements using pointers 
int main(){
	int i,n;
	
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	int a[n],*p[n];
	
	printf("Enter Element  : ");
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
		
		p[i] = &a[i];
	}
	
	printf("Your Entered Element :\n");
	for(i=0; i<n; i++){
		printf("%d\n",*p[i]);
	}
	
	return 0;
}
