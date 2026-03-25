#include <stdio.h>

int main() {
  char operator;
  double first, second;
  printf("Enter the operator(+,-, *, /)") ;
  scanf("%c", &operator) ;
  printf("Enter the two Numbers one by one");
  scanf("%lf %lf", &first, &second);
  if (operator == '+') {
    printf("%lf + %lf = %lf", first, second, (first+second));
  }
  else if (operator == '-') {
    printf("%lf - %lf = %lf", first, second, (first-second));
  }
  else if (operator == '*') {
    printf("%lf * %lf = %lf", first, second, (first*second));
  }
   else if (operator == '/') {
    printf("%lf/ %lf = %lf", first, second, (first/second));
  }
   }
  
  

