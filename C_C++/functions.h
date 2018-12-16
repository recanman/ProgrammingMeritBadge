/*
	Copyright © 2018 ***REMOVED***. All rights reserved.
	This may not be reproduced or distributed in any way without written
	permission from the author.


THIS GAME IS NO LONGER SUPPORTED DUE TO COMPLICATEDNESS


#ifndef FUNCTIONS_H
#define FUNCTIONS_H
using namespace std;
/*
  Side note: I know it is not recommended to declare functions in header files, but I don't
  think that is much of a problem; it just takes a bit longer to compile and run.

int monsterHealth; // This stays the same every encounter.
int monsterDamage; // It is random each turn based on your weapon quality.
int characterDamage; // This is the variable that holds how much damage is done to the monster each turn.
int hitsMonster; // Decides if you hit the monster you are battling or not based on a random basis
char currentWeapon[6] = "Wood"; // The initial tools your character starts with are made of wood.
char currentAxe[6] = "Wood";
char currentPickaxe[6] = "Wood";
int wood = 0;
int stone = 0;
int metal = 0;
int materials = wood + stone + metal; // This is the sum of all the materials you have.
int health = 100; // Your health level; it starts as 100.
int hunger = 0; // The hunger level; it starts as zero and gets worse as the game progresses.
int randYes;
int randNo;
int randAnswer;
int randBattle;
char command[10];
char materialType[6];
char findsMaterial[10];
char exitGame[2];
char battleCommand[6]; // This is so the compiler doesn't get confused with the variable command defined in survivalGame.cpp.
int materialsGotten = 0;
char ifContinued[6] = "false"; // A variable that makes the code recognize that 1 turn is over.
char hitsMonsterReadable[9];

void battle() {
for ( ;; ) {
  if (strncmp(ifContinued, "false", 5) == 0) {
    printf("A monster has found you! You must battle it to keep yourself alive!\n");
    printf("Battle Commands:\nhit - Makes your character try and hit the monster with he/she's current weapon.\nthrow - Makes your character try to throw he/she's weapon at the monster, it will do more damage if it succeeds.\nrun - Makes your character try and run from the monster. This can be used only once per encounter. It will have a higher chance of succeeding if the monster is low on health.\nhelp - Shows the battle commands list.\n");
  }
  else {
  if (strncmp(currentWeapon, "Wood", 4) == 0) {
      monsterHealth = rand() % 31;
      cout << "The monster's health is: " << monsterHealth << endl;
      printf("It is your turn. What would you like to do?\n> ");

      if (strncmp(battleCommand, "help\n", 4) == 0) {
        printf("Battle Commands:\nhit - Makes your character try and hit the monster with he/she's current weapon.\nthrow - Makes your character try to throw he/she's weapon at the monster, it will do more damage if it succeeds.\nrun - Makes your character try and run from the monster. This can be used only once per encounter. It will have a higher chance of succeeding if the monster is low on health.\nhelp - Shows the battle commands list.\n");
      } else if (strncmp(battleCommand, "hit\n", 3) == 0) {
        if (hunger > 8) {
          printf("You are so tired, you can't even get your weapon out! Do you want to eat some food to get some energy?\n");
        }
        hitsMonster = rand() % 2; // 0 hits, 1 doesn't hit.
        if (hitsMonster == 0) {
          strcpy(hitsMonsterReadable, "does"); // Makes it readable. ("does" is true, and "does not" is false.)
        } else if (hitsMonster == 1) {
          strcpy(hitsMonsterReadable, "does not"); // Makes it readable. ("does" is true, and "does not" is false.)
        }
        cout << "You swing at the monster and your weapon " << hitsMonster << " hit the monster.";
        if (strncmp(hitsMonsterReadable, "does", 5) == 0) {
          characterDamage = rand() % 9;
          monsterHealth -= characterDamage;
          cout << "You do " << characterDamage << " damage to the monster. The monster now has " << monsterHealth << " health.";
          printf("The monster is getting ready to attack.\n");
          sleep(2);
          monsterDamage = rand() % 11; // Monsters are stronger than the user's character.
          health -= monsterDamage;
          cout << "The monster did" << monsterDamage << " damage to you. You now have " << health << " health";
          strcpy(ifContinued, "true");
          continue;
        }
        else if (strncmp(hitsMonsterReadable, "does not", 9) == 0) {
          printf("The monster is getting ready to attack.\n");
          sleep(2);
          monsterDamage = rand() % 11; // Monsters are stronger than the user's character.
          health -= monsterDamage;
          cout << "The monster did" << monsterDamage << " damage to you. You now have " << health << " health";
          strcpy(ifContinued, "true");
          continue;
        }
      }

  } else if (strncmp(currentWeapon, "Stone", 5) == 0) {
      monsterHealth = rand() % 61;
      cout << "The monster's health is: " << monsterHealth;
      hitsMonster = rand() % 2; // 0 hits, 1 doesn't hit.
      if (hitsMonster == 0) {
        strcpy(hitsMonsterReadable, "does"); // Makes it readable.
      } else if (hitsMonster == 1) {
        strcpy(hitsMonsterReadable, "does not"); // Makes it readable.
      }
      cout << "You swing at the monster and your weapon " << hitsMonster << " hit the monster.";
      if (strncmp(hitsMonsterReadable, "does", 5) == 0) {
        characterDamage = rand() % 19;
        monsterHealth -= characterDamage;
        cout << "You do " << characterDamage << " damage to the monster. The monster now has " << monsterHealth << " health.";
        printf("The monster is getting ready to attack.\n");
        sleep(2);
        monsterDamage = rand() % 11; // Monsters are stronger than the user's character.
        health -= monsterDamage;
        cout << "The monster did" << monsterDamage << " damage to you. You now have " << health << " health";
        strcpy(ifContinued, "true");
        continue;
      }
      else if (strncmp(hitsMonsterReadable, "does not", 9) == 0) {
        printf("The monster is getting ready to attack.\n");
        sleep(2);
        monsterDamage = rand() % 11; // Monsters are stronger than the user's character.
        health -= monsterDamage;
        cout << "The monster did" << monsterDamage << " damage to you. You now have " << health << " health";
        strcpy(ifContinued, "true");
        continue;
      }
  } else if (strncmp(currentWeapon, "Metal", 5) == 0) {
      monsterHealth = rand() % 101;
      cout << "The monster's health is: " << monsterHealth;
      hitsMonster = rand() % 2; // 0 hits, 1 doesn't hit.
      if (hitsMonster == 0) {
        strcpy(hitsMonsterReadable, "does"); // Makes it readable.
      } else if (hitsMonster == 1) {
        strcpy(hitsMonsterReadable, "does not"); // Makes it readable.
      }
      cout << "You swing at the monster and your weapon " << hitsMonster << " hit the monster.";
      if (strncmp(hitsMonsterReadable, "does", 5) == 0) {
        characterDamage = rand() % 28;
        monsterHealth -= characterDamage;
        cout << "You do " << characterDamage << " damage to the monster. The monster now has " << monsterHealth << " health.";
        printf("The monster is getting ready to attack.\n");
        sleep(2);
        monsterDamage = rand() % 11; // Monsters are stronger than the user's character.
        health -= monsterDamage;
        cout << "The monster did" << monsterDamage << " damage to you. You now have " << health << " health";
        strcpy(ifContinued, "true");
        continue;
      }
      else if (strncmp(hitsMonsterReadable, "does not", 9) == 0) {
          printf("The monster is getting ready to attack.\n");
          sleep(2);
          monsterDamage = rand() % 11; // Monsters are stronger than the user's character.
          health -= monsterDamage;
          cout << "The monster did" << monsterDamage << " damage to you. You now have " << health << " health";
          strcpy(ifContinued, "true");
          continue;
        }
      }
    }
  // This determines how hard the monster must be based on your current weapons.
}
}
#endif
*/
