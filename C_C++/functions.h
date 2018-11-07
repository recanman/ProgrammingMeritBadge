/*
	Copyright © 2018 ***REMOVED***. All rights reserved.
	This may not be reproduced or distributed in any way without written
	permission from the author.
*/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
using namespace std;
/*
  Side note: I know it is not recommended to declare functions in header files, but I don't
  that much of a problem; it just takes a bit longer to compile and run.
*/
int monsterHealth; // This stays the same every encounter.
int monsterDamage; // It is random each turn.
int hitsMonster;
char currentWeapon[6] = "Wood";
char currentAxe[6] = "Wood";
char currentPickaxe[6] = "Wood";
int wood = 0;
int stone = 0;
int metal = 0;
int materials = wood + stone + metal / 3;
int health = 100;
int hunger = 0;
int randYes;
int randNo;
int randAnswer;
int randBattle;
char command[10];
char materialType[6];
char findsMaterial[10];
char exitGame[2];
char gender[5];
char battleCommand[6]; // This is so the compiler doesn't get confused with the variable command defined in survivalGame.cpp.
int materialsGotten = 0;

void battle() {
  printf("A monster has found you! You must battle it to keep yourself alive!\n");
  printf("Battle Commands:\nhit - Makes your character try and hit the monster with he/she's current weapon.\nthrow - Makes your character try to throw he/she's weapon at the monster, it will do more damage if it succeeds.\nrun - Makes your character try and run from the monster. This can be used only once per encounter. It will have a higher chance of succeeding if the monster is low on health.\nhelp - Shows the battle commands list.\n");
  if (strncmp(currentWeapon, "Wood", 4) == 0) {
      monsterHealth = rand() % 31;
      cout << "The monster's health is: " << monsterHealth << endl;
      printf("It is your turn. What would you like to do?\n> ");

      if (strncmp(battleCommand, "help\n", 4) == 0) {
        printf("Battle Commands:\nhit - Makes your character try and hit the monster with he/she's current weapon.\nthrow - Makes your character try to throw he/she's weapon at the monster, it will do more damage if it succeeds.\nrun - Makes your character try and run from the monster. This can be used only once per encounter. It will have a higher chance of succeeding if the monster is low on health.\nhelp - Shows the battle commands list.\n");
      } else if (strncmp(battleCommand, "hit\n", 3) == 0) {
        if (hunger > 8) {
          printf("You are so tired, you can't even get your weapon out of its sheath! Do you want to eat some food to get some energy?");
        }
        cout << "You swing at the monster and it " << hitsMonster << " hit it.";
      }

  } else if (strncmp(currentWeapon, "Stone", 5) == 0) {
      monsterHealth = rand() % 61;
      cout << "The monster's health is: " << monsterHealth;
  } else if (strncmp(currentWeapon, "Metal", 5) == 0) {
      monsterHealth = rand() % 101;
      cout << "The monster's health is: " << monsterHealth;
    }
  // This determines how hard the monster must be based on your current weapons.
}
#endif
