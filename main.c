// Author: Aleks Gondek alg6177@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n){
  if(n==0){
    return 0;
  } else {
    return (n % 10) + digit_sum(n / 10);
  }
}

int main(void){
  char *inputInt = readline("Enter an int: ");
  int input = atoi(inputInt);
  printf("sum of digits of %d is %d.\n", input, digit_sum(input));
}