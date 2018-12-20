#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;


int getInt() {
  int intInput;
  while(!(cin >> intInput)) {
	   printf("That is not a number! Try again:\n> ");
	   cin.clear();
	   cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
  return intInput;
}

int checkRange(int num) {
  if (num <= 0 || num > 10) {
    printf("That number is not between 1 and 10! Try again:\n> ");
    return 0;
  }
  return 1;
}

/***/

int main () {
  srand(time(NULL));
  int num = (rand() % 10) + 1;
  int ans;
  int check;
  int guesses = 0;
  while (guesses < 3) {
    printf("Choose a number between 1 and 10\n> ");
    ans = getInt();
    check = checkRange(ans);
    while (check == 0) { // The number is not between 1 and 10
      ans = getInt();
      check = checkRange(ans);
    }

    if (num == ans) {
      printf("You guessed the number correctly!\n");
      return 0;
    } else {
      guesses += 1;
      if ((3 - guesses) == 1) {
        cout << "That was not correct. You have " << 1 << " guess left." << endl;
      } else {
        cout << "That was not correct. You have " << 3 - guesses << " guesses left." << endl;
      }
    if (guesses == 3) {
      printf("You have had three guesses. You lose!\n");
      cout << "The number was " << num << ". Nice try." << endl;
      }
    }
  }
}
