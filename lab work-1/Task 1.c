#include<stdio.h>
//1.WAP to find square of each element using Pointer.
int fact(int n){
	if (n<=1){
		return 1;
	}
	else{
		return n * fact(n-1);
//		n * fact (n-1)
//        5*24
//        4*6
//        3*2
//        2*1
//        1
	}
}
int main(){
	printf("%d",fact(4));
	return 0;
}

