/*
	Copyright © 2018 ***REMOVED***. All rights reserved.
	This may not be reproduced or distributed in any way without written
	permission from the author.
*/
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "functions.h"

using namespace std;

int main() {

	int wood = 0;
	int stone = 0;
	int metal = 0;
	int materials = wood + stone + metal;
	int health = 100;
	int hunger = 0;
	char currentWeapon[6] = "Wood";
	char currentAxe[6] = "Wood";
	char currentPickaxe[6] = "Wood";
	char command[10];
	char materialType[6];
	char findsMaterial[10];
	char exitGame[2];
	int materialsGotten = 0;
	int findMaterial[3] = {1, 2, 3}; // 1 = true, 2 = false, 3 = finds a monster
	int randIndex;

	printf("Welcome to The Survival Game!\n");
	sleep(1);

	cout << "You start with: " << health << " health. Hunger: " << hunger << ". Materials: " << wood << " wood, " << stone << " stone, and " << metal << " metal.";
	sleep(1);
	printf("List of commands:\nhelp - Shows this list of commands.\nstats - Shows your character's current health, hunger level, and amount of materials.\ngetmaterials - This makes your character try to find materials and harvest them with the current tool your character equips.\ngetfood - Makes your character go to the nearest source of food and replenishes some (or all) of your character's hunger. This will not work if your hunger level is already zero.\ncraftmenu - Shows the crafting menu and what your character can craft.\nbattle - Your character will try to find a monster and battle it. This command will automatically trigger if you encounter a monster while looking for food or exploring.\nexit - Exits the game.\n\n\nBattle Commands:\nhit - Makes your character try and hit the monster with your character's current weapon.\nthrow - Makes your character try to throw your character's weapon at the monster, it will do more damage if it succeeds.\nrun - Makes your character try and run from the monster. This can be used only once per encounter. It will have a higher chance of succeeding if the monster is low on health.\nhelp - Shows the battle commands list.\n\n\n\n\n");
	sleep(21); // This allows the user to read the commands.
	printf("The game will start in 5 seconds...\n");
	sleep(5);
for ( ;; ) {
		printf("What would you like to do?\n> ");
		scanf("%s", command);
		if (strncmp(command, "help\n", 4) == 0) {
			printf("\n\n\nList of commands:\nhelp - Shows this list of commands.\nstats - Shows your character's current health, hunger level, and amount of materials.\ngetmaterials - This makes your character try materials and harvest them with the current tool your character equips.\ngetfood - Makes your character go to the nearest source of food and replenishes some (or all) of your character's hunger. This will not work if your hunger level is already zero.\ncraftmenu - Shows the crafting menu and what your character can craft.\nbattle - Your character will try to find a monster and battle it. This command will automatically trigger if you encounter a monster while looking for food or exploring.\nexit - Exits the game.\n\n\nBattle Commands:\nhit - Makes your character try and hit the monster with your character's current weapon.\nthrow - Makes your character try to throw your character's weapon at the monster, it will do more damage if it succeeds.\nrun - Makes your character try and run from the monster. This can be used only once per encounter. It will have a higher chance of succeeding if the monster is low on health.\nhelp - Shows the battle commands list.\n\n\n\n\n");
		} else if (strncmp(command, "stats\n", 5) == 0) {
			cout << "\n\nYou have: " << health << " health. Your hunger level is: " << hunger << ". You materials are: " << wood << " wood, " << stone << " stone, and " << metal << " metal. That results in you having " << materials << " materials.\n\n\n";
		} else if (strncmp(command, "getmaterials\n", 12) == 0) {
			printf("Coming soon!\n\n\n\n\n");
			// Start looking for materials
			if (hunger > 8) {
				printf("\n\nYou are so tired, you can't even carry your tool in your hand!\n\n");
			} else {
				printf("Which material would you like to look for?\n> ");
				scanf("%s", materialType);

				if (strncmp(materialType, "wood" , 4) == 0) {
					cout << "randIndex:"<< randIndex << endl;
					printf("Your character scans the area for a tree...\n");
					printf("test");
					sleep(2);
					randIndex = (rand() % 3)+1; // Makes the values between 1 and 3

					if (findMaterial[randIndex] == 1) {
						printf("\n\nYou found a tree! Your character will cut it down.\n\n");
					} else if (findsMaterial[randIndex] == 2) {
						printf("\n\nYour character could not find a tree.\n\n"); // NOTE: RETURN BACK TO ASKING "What would you like to do?"
					} else if (findsMaterial[randIndex] == 3) {battle();}

          if (strncmp(currentAxe, "Wood", 4) == 0) {
            materialsGotten = rand() % 26;
            cout << "You cut down the tree! You got " << materialsGotten << " wood.";
            wood += materialsGotten;
            materials = wood + stone + metal;
						cout << "You now have " << wood << " wood. In total, you have " << materials << " materials";
            }
					}
				}
				/*else if (strncmp(materialType, "stone", 5) == 0) {}
				else if (strncmp(materialType, "metal", 5) == 0) {}*/
			}
		}
	}
/*
		NOTE: make compatible to be else if instead of having to be if, I am still working on the "getmaterials" command. After, attach everything together.else if (strncmp(command, "getfood\n", 7) == 0) {
			printf("Coming soon!\n");
			// Start looking for food
		}
		else if (strncmp(command, "craftmenu\n", 9) == 0) {
			printf("Coming soon!\n");
			// Open craft menu
		}
		else if (strncmp(command, "battle\n", 6) == 0) {
			printf("Coming soon!\n");
			// Look for monster
		}
		else if (strncmp(command, "exit\n", 4) == 0) {
			printf("Are you sure you want to exit the game? Your progress will be lost!\n[y/n]> ");
			scanf("%s", exitGame);
			if (strncmp(exitGame, "n\n", 1) == 0) {
				printf("Ok. You will now return back to the game.\n");
			}
			else if (strncmp(exitGame, "y\n", 1) == 0) {
				printf("Ok. You will now exit the game. Your progress will be lost. Bye!\n");
				sleep(1);
				return 0;
			}
			// Exits game
		} else {
			printf("Invalid command.\n");
		}
	}
*/
