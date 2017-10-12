#include <stdio.h>

int main()
{
  int age;

  printf("Please enter your age: ");
  scanf("%d", &age);
  if (age < 30) {
    printf("You're pretty young!\n");
  } else if (age == 30) {
    printf("Ouch!\n");
  } else {
    printf("Dang you're old!\n");
  }
  return 0;
}
