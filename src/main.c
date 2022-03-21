/* main.c */
#include <stdio.h>
#include <stdlib.h>

void which_class(int a[2][25]){
  int i, j, temp;
  for (i = 0; i < 25; ++i)
  {
    for (j = 0; j < 25 - i; ++j )
      {
        if (a[0][j] > a[0][j+1])
        {
          temp = a[0][j+1];
          a[0][j+1] = a[0][j];
          a[0][j] = temp;
        }
      }
  }
}

int main (void)
{
	int class1[2][25];
  int class2[2][25];
  for (int i = 0; i < 25; ++i) {
    /*printf("Enter height and mass of first class");
    scanf("%i", &class1[0][i]);
    scanf("%i", &class1[1][i]);*/
    class1[0][i] = rand() % 100;
    class1[1][i] = rand() % 150;
  }
  for (int i = 0; i < 25; ++i) {
    /*printf("Enter height and mass of second class");
    scanf("%i", &class2[0][i]);
    scanf("%i", &class2[1][i]);*/
    class2[0][i] = rand() % 500;
    class2[1][i] = rand() % 150;
  }
  for (int i = 0; i < 25; ++i) {
    for (int j = 0; j < 2; ++j) {
      printf("%i%c", class1[j][i], ' ');
    }
    printf("%s", "     ");
  }
  printf("%c", '\n');
  for (int i = 0; i < 25; ++i) {
    for (int j = 0; j < 2; ++j) {
      printf("%i%c", class2[j][i], ' ');
    }
    printf("%s", "     ");
  }
  which_class(class1);
  which_class(class2);
  
  printf("%c", '\n');
  if (class1[1][21] > class2[1][21]) {
    printf("First");
  } else {
    printf("second");
  }
  
    
}
