#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[]){
int i = 1;

printf("%d %d\n", i, i++);  // ❌ Undefined Behavior
// OUTPUT IS 2 1
return EXIT_SUCCESS;
}
