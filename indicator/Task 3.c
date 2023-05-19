//#include<stdio.h>
//3. Program to find length of string using pointer
#include<stdio.h>
int getLength(char*p) {
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}
int main() {
   char str[20] ;
   int length = 0;
   length = getLength(str);
   printf("The length of the string \"%s\" is %d", str, length);
   return 0;
}
