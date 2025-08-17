#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[]){

int a = 10, b = 20, c = 30;
int result = a + b * c;   // Multiplication has higher precedence
// result = 10 + (20 * 30) = 610
printf("The value of the result is %d",result);
return EXIT_SUCCESS;
}
