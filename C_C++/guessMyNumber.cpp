/* srand example */
#include <stdio.h>      /*  NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
using namespace std;


int getInt() {
  int intInput;
  while(!(cin >> intInput)) {
	   printf("That is not a number! Try again: ");
	   cin.clear();
	   cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
  return intInput;
}

int checkRange(int num) {
  if (num <= 0 || num > 10) {
    printf("That number is not between 1 and 10!");
    return 0;
  }
  return 1;
}


int main () {
  srand (time(NULL));
  int num = (rand() % 10) + 1;
  int ans;
  int check;
  printf("Choose a number between 1 and 10\n> ");
  ans = getInt();
  check = checkRange(ans);
  while (check == 0) { // The number is not between 1 and 10
    ans = getInt();
    check = checkRange(ans);
  }

  if (num == ans) {
    printf("You guessed the number correctly!");
  } else {
    printf("You did not guess the number correctly!");
  }

}
