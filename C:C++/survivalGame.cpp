#include <stdio.h> // For Input/Output
#include <iostream> // Doing it on stdio.h will result in a Segmentation Fault from consuming so much memory from staying on I/O.
#include <string.h> // For strings
#include <stdlib.h> // For random number generation.
#include "functions.h" // Pre-defined functions to make things easier.

using namespace std; // Makes using iostream functions easier

int main() {

	char wood[101] = "0";   // Variables
	char health[101] = "0"; // for the
	char hunger[11] = "0";  // game.

	strcpy(health, "100"); // Staying away from I/O
	strcpy(hunger, "0");  // because that will overload the
	strcpy(wood, "0");     // memory causing a Segmentation Fault: 11

	printf("Welcome to The Survival Game!");
	cout << "You have: " << health << " health. Your hunger level is: " << hunger << ". You have: " << wood << " wood.\n\n";
	printf("List of commands:\nhelp - Shows this list of commands.\nstats - Shows your character's current health, hunger level, and amount of wood.\ngetwood - This makes your character will try to find a tree and chop it down with the current axe he/she equips.\ngetfood - Makes your character go to the nearest source of food and replenishes some (or all) of your charatcer's hunger. This will not work if your hunger level is already zero.\ncraftmenu - Shows the crafting menu and what your character can craft.\nbattle - Your character will try to find a monster and battle it. This command will automatically trigger if you encounter a monster while looking for food or exploring.\nclear - Clears the screen.\n");
	cout << string(75, '\n');
	printf("The game will start in 5 seconds...")
	sleep(5) // usleep() is usually not supported in POSIX, so this will make it cross-compatible. It is still widely-supported, though.

return 0;
}
