#include<stdio.h>
//2.WAP to swap two variables using Pointer.
void swap(int *a, int *b){
	int c;
	printf("Before swap A : %u => %d\n ",* a);
	printf("Before swap B : %u => %d\n ",*b);
	
	c = *a;
   *a = *b;
   *b = c;
   
   printf("\nAfter swap A : %u=> %d\n ",*a);
   printf("\nAfter swap B : %u=> %d\n ",*b);
}
int main(){
	int q,w;
	
	printf("Enter first value : ");
	scanf("%d",&q);
	
	printf("Enter first value : ");
	scanf("%d",&w);
	
	swap(&q,&w);
	
	return 0;
}
