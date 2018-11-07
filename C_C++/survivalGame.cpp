#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main() {

	int wood = 0;
	int stone = 0;
	int metal = 0;
	int materials = wood + stone + metal / 3;
	int health = 100;
	int hunger = 0;
	char currentWeapon[6] = "Wood";
	char currentAxe[6] = "Wood";
	char currentPickaxe[6] = "Wood";
	char command[10];
	char materialType[6];
	char findsMaterial[10];
	char exitGame[2];
	char gender[5];
	int materialsGotten = 0;
	int randYes;
	int randNo;
	int randAnswer;
	int randBattle;

	printf("Welcome to The Survival Game!\n");
	sleep(1);
	printf("What do you want your character's gender to be?\n[boy/girl]> ");
	scanf("%s", gender);
	if (strncmp(gender, "boy", 3) == 0) {
		printf("Ok, you are a boy.\n");
	}
	else if (strncmp(gender, "girl", 4) == 0) {
		printf("Ok, you are a girl.\n");
	}

	cout << "You have: " << health<< " health. Your hunger level is: " << hunger << ". You materials are: " << wood << " wood, " << stone << " stone, and " << metal << " metal. That results in you having " << materials << " materials\n\n";
	sleep(1);
	printf("List of commands:\nhelp - Shows this list of commands.\nstats - Shows your character's current health, hunger level, and amount of materials.\ngetmaterials - This makes your character try to find materials and harvest them with the current tool he/she equips.\ngetfood - Makes your character go to the nearest source of food and replenishes some (or all) of your character's hunger. This will not work if your hunger level is already zero.\ncraftmenu - Shows the crafting menu and what your character can craft.\nbattle - Your character will try to find a monster and battle it. This command will automatically trigger if you encounter a monster while looking for food or exploring.\nexit - Exits the game.\n");
	sleep(15);
	printf("The game will start in 5 seconds...\n");
	sleep(5);
	while(1) {
		printf("What would you like to do?\n> ");
		scanf("%s", command);
		if (strncmp(command, "help\n", 4) == 0) {
			printf("List of commands:\nhelp - Shows this list of commands.\nstats - Shows your character's current health, hunger level, and amount of materials.\ngetmaterials - This makes your character try materials and harvest them with the current tool he/she equips.\ngetfood - Makes your character go to the nearest source of food and replenishes some (or all) of your character's hunger. This will not work if your hunger level is already zero.\ncraftmenu - Shows the crafting menu and what your character can craft.\nbattle - Your character will try to find a monster and battle it. This command will automatically trigger if you encounter a monster while looking for food or exploring.\nexit - Exits the game.\n");
		}
		else if (strncmp(command, "stats\n", 5) == 0) {
			cout << "You have: " << health << " health. Your hunger level is: " << hunger << ". You materials are: " << wood << " wood, " << stone << " stone, and " << metal << " metal. That results in you having " << materials << " materials\n\n";
		}
		else if (strncmp(command, "getmaterials\n", 12) == 0) {
			printf("Coming soon!\n");
			// Start looking for materials
			if (hunger > 8) {
				printf("You are so tired, you can't even carry your tool in your hand!\n");
			} else {
				printf("Which material would you like to look for?\n> ");
				scanf("%s", materialType);
				if (strncmp(materialType, "wood" , 4) == 0) {
					sleep(1);
					randYes = 1;
					randNo = 2;
					randBattle = 3;
					randAnswer = rand() % 4;
					if (randAnswer == randYes) {
						strcpy(findsMaterial, "does");
					}
					else if (randAnswer == randNo) {
						strcpy(findsMaterial, "does not");
					}
					/*else if (randAnswer == randBattle) {
						battle();
					}*/

					printf("Your character scans the area for a tree...\n");
					sleep(2);
					cout << "Your character " << findsMaterial << " find what you were looking for!";
					if (strncmp(findsMaterial, "does", 4) == 0) {
						printf("You start chopping down the tree...\n");
						sleep(2);
                                        	if (strncmp(currentAxe, "Wood", 4) == 0) {
                                                	materialsGotten = rand() % 26;
                                                	cout << "You cut down the tree! You got " << materialsGotten << " wood.";
                                               		wood += materialsGotten;
                                               		materials = wood + stone + metal / 3;
                                        	}
					}
				}
				else if (strncmp(materialType, "stone", 5) == 0) {}
				else if (strncmp(materialType, "metal", 5) == 0) {}
			}
		}
		else if (strncmp(command, "getfood\n", 7) == 0) {
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

return 0;
}
