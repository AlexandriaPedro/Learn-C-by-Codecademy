#include<stdio.h>
#include<string.h>

int main() {
  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};

  char string1[] = {'d','b','b',' ','c','c','c','c','c','a','a','c','b',' ','c','d','b','a','b','a','b','d','c','d','c','d','a','b',' ','d','c','d','a','d'};

  char string2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";

  for (int index = 0; index < strlen(string1); index ++) {
    if (string1[index] == 'a') {
      counter1[0] ++;
    } else if (string1[index] == 'b') {
      counter1[1] ++;
    } else if (string1[index] == 'c') {
      counter1[2] ++;
    } else if (string1[index] == 'd') {
      counter1[3] ++;
    }
  }

  for (int index = 0; index < strlen(string2); index ++) {
    if (string2[index] == 'a') {
      counter2[0] ++;
      } else if (string2[index] == 'b') {
        counter2[1] ++;
      } else if (string2[index] == 'c') {
        counter2[2] ++;
      } else if (string2[index] == 'd') {
        counter2[3] ++;
      }
  }

  int flag = 0;

  for (int index = 0; index < (sizeof(counter1) / sizeof(counter1[0])); index ++) {
    if (counter1[index] != counter2[index]) {
      flag = 1;
    }
  }

  if (flag = 1) {
    printf("Anagram!");
  } else {
    printf("Not Anagram!");
  }
}
