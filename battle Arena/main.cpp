#include <iostream>
#include <cstdlib>
#include <ctime>

//lets make a project that does a simple 2d array
//lets start off by printing out a simple 2d gride array 

int playerOneTurn;
int playerTwoTurn;
//information for the harder battle start
int userGuess;
int weaponArray[] = { 1, 2, 3, 4 };
int attackPicks;
//end
//this is a struct for the health of both enemy and player in the harder battle
struct healthPoints
{
	int health;
} player, enemy;



int playerOnePoints = 0;
int playerTwoPoints = 0;

char myGridAray[9][17] = {
	{ '=','=', '=', '=', '=', '=', '=', '=', '=','=', '=', '=', '=', '=', '=', '=', '\n' },
	{ '|','0', '1', '|', '0', '6', '|', '0', '7','|', '0', '0', '|', '1', '2', '|', '\n' },
	{ '|','=', '=', '|', '=', '=', '|', '=', '=','|', '=', '=', '|', '=', '=', '|', '\n' },
	{ '|','0', '2', '|', '0', '5', '|', '0', '8','|', '1', '0', '|', '1', '1', '|','\n' },
	{ '|','=', '=', '|', '=', '=', '|', '=', '=','|', '=', '=', '|', '=', '=', '|', '\n' },
	{ '|','0', '3', '|', '0', '4', '|', '0', '9','|', '1', '4', '|', '1', '3', '|','\n' },
	{ '|','=', '=', '|', '=', '=', '|', '=', '=','|', '=', '=', '|', '=', '=', '|', '\n' },
	{ '|','1', '5', '|', '1', '6', '|', '1', '7','|', '1', '8', '|', '1', '9', '|','\n' },
	{ '=','=', '=', '=', '=', '=', '=', '=', '=','=', '=', '=', '=', '=', '=', '=', '\n' },
};

void printArray() {
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 17; j++) {
			std::cout << myGridAray[i][j];
		}
}

void putPlayerOneMarker(){
	//now lets make it so that the myGrideArray updates whenever a user enters an input 
	if (playerOneTurn == 1) {
		myGridAray[1][1] = 'x';
		myGridAray[1][2] = 'x';
		printArray();
	}
	else if (playerOneTurn == 6) {
		myGridAray[1][4] = 'x';
		myGridAray[1][5] = 'x';
		printArray();
	}
	else if (playerOneTurn == 7) {
		myGridAray[1][7] = 'x';
		myGridAray[1][8] = 'x';
		printArray();
	}
	else if (playerOneTurn == 0) {
		myGridAray[1][10] = 'x';
		myGridAray[1][11] = 'x';
		printArray();
	}
	else if (playerOneTurn == 12) {
		myGridAray[1][13] = 'x';
		myGridAray[1][14] = 'x';
		printArray();
	}
	//start of the second row of the grid
	else if (playerOneTurn == 2) {
		myGridAray[3][1] = 'x';
		myGridAray[3][2] = 'x';
		printArray();
	}
	else if (playerOneTurn == 5) {
		myGridAray[3][4] = 'x';
		myGridAray[3][5] = 'x';
		printArray();
	}
	else if (playerOneTurn == 8) {
		myGridAray[3][7] = 'x';
		myGridAray[3][8] = 'x';
		printArray();
	}
	else if (playerOneTurn == 10) {
		myGridAray[3][10] = 'x';
		myGridAray[3][11] = 'x';
		printArray();
	}
	else if (playerOneTurn == 11) {
		myGridAray[3][13] = 'x';
		myGridAray[3][14] = 'x';
		printArray();
	}
	//start of the third row of the array
	else if (playerOneTurn == 3) {
		myGridAray[5][1] = 'x';
		myGridAray[5][2] = 'x';
		printArray();
	}
	else if (playerOneTurn == 4) {
		myGridAray[5][4] = 'x';
		myGridAray[5][5] = 'x';
		printArray();
	}
	else if (playerOneTurn == 9) {
		myGridAray[5][7] = 'x';
		myGridAray[5][8] = 'x';
		printArray();
	}
	else if (playerOneTurn == 14) {
		myGridAray[5][10] = 'x';
		myGridAray[5][11] = 'x';
		printArray();
	}
	else if (playerOneTurn == 13) {
		myGridAray[5][13] = 'x';
		myGridAray[5][14] = 'x';
		printArray();
	}
	//start of the forth row
	else if (playerOneTurn == 15) {
		myGridAray[7][1] = 'x';
		myGridAray[7][2] = 'x';
		printArray();
	}
	else if (playerOneTurn == 16) {
		myGridAray[7][4] = 'x';
		myGridAray[7][5] = 'x';
		printArray();
	}
	else if (playerOneTurn == 17) {
		myGridAray[7][7] = 'x';
		myGridAray[7][8] = 'x';
		printArray();
	}
	else if (playerOneTurn == 18) {
		myGridAray[7][10] = 'x';
		myGridAray[7][11] = 'x';
		printArray();
	}
	else if (playerOneTurn == 19) {
		myGridAray[7][13] = 'x';
		myGridAray[7][14] = 'x';
		printArray();
	}
	else {
		std::cout << "You're an idiot, it didn't work or you put the wrong fucking number \n";
		printArray();
	}

}

void putPlayerTwoMarker() {
	//now lets make it so that the myGrideArray updates whenever a user enters an input 
	if (playerTwoTurn == 1) {
		myGridAray[1][1] = 'o';
		myGridAray[1][2] = 'o';
		printArray();
	}
	else if (playerTwoTurn == 6) {
		myGridAray[1][4] = 'o';
		myGridAray[1][5] = 'o';
		printArray();
	}
	else if (playerTwoTurn == 7) {
		myGridAray[1][7] = 'o';
		myGridAray[1][8] = 'o';
		printArray();
	}
	else if (playerTwoTurn == 0) {
		myGridAray[1][10] = 'o';
		myGridAray[1][11] = 'o';
		printArray();
	}
	else if (playerTwoTurn == 12) {
		myGridAray[1][13] = 'o';
		myGridAray[1][14] = 'o';
		printArray();
	}
	//start of the second row of the grid
	else if (playerTwoTurn == 2) {
		myGridAray[3][1] = 'o';
		myGridAray[3][2] = 'o';
		printArray();
	}
	else if (playerTwoTurn == 5) {
		myGridAray[3][4] = 'o';
		myGridAray[3][5] = 'o';
		printArray();
	}
	else if (playerTwoTurn == 8) {
		myGridAray[3][7] = 'o';
		myGridAray[3][8] = 'o';
		printArray();
	}
	else if (playerTwoTurn == 10) {
		myGridAray[3][10] = 'o';
		myGridAray[3][11] = 'o';
		printArray();
	}
	else if (playerTwoTurn == 11) {
		myGridAray[3][13] = 'o';
		myGridAray[3][14] = 'o';
		printArray();
	}
	//start of the third row of the array
	else if (playerTwoTurn == 3) {
		myGridAray[5][1] = 'o';
		myGridAray[5][2] = 'o';
		printArray();
	}
	else if (playerTwoTurn == 4) {
		myGridAray[5][4] = 'o';
		myGridAray[5][5] = 'o';
		printArray();
	}
	else if (playerTwoTurn == 9) {
		myGridAray[5][7] = 'o';
		myGridAray[5][8] = 'o';
		printArray();
	}
	else if (playerTwoTurn == 14) {
		myGridAray[5][10] = 'o';
		myGridAray[5][11] = 'o';
		printArray();
	}
	else if (playerTwoTurn == 13) {
		myGridAray[5][13] = 'o';
		myGridAray[5][14] = 'o';
		printArray();
	}
	//start of the forth row
	else if (playerTwoTurn == 15) {
		myGridAray[7][1] = 'o';
		myGridAray[7][2] = 'o';
		printArray();
	}
	else if (playerTwoTurn == 16) {
		myGridAray[7][4] = 'o';
		myGridAray[7][5] = 'o';
		printArray();
	}
	else if (playerTwoTurn == 17) {
		myGridAray[7][7] = 'o';
		myGridAray[7][8] = 'o';
		printArray();
	}
	else if (playerTwoTurn == 18) {
		myGridAray[7][10] = 'o';
		myGridAray[7][11] = 'o';
		printArray();
	}
	else if (playerTwoTurn == 19) {
		myGridAray[7][13] = 'o';
		myGridAray[7][14] = 'o';
		printArray();
	}
	else {
		std::cout << "You're an idiot, it didn't work or you put the wrong fucking number \n";
		printArray();
	}

}

//this is for giving the player 10 extra points 
void playerExtraPointsPlayerOne() {
	playerOnePoints = playerOnePoints + 10;
}

void playerExtraPointsPlayerTwo() {
	playerTwoPoints = playerTwoPoints + 10; 
}

//this is for the user to lose points 
void playerLosingPointsPlayerOne() {
	playerOnePoints = playerOnePoints - 10;
}

void playerLosingPointsOnePlayerTwo() {
	playerTwoPoints = playerTwoPoints - 10;
}

//this is for the easy battle that the user can have 
void easyBattle() {
	int userChoice;

	//now lets make it so that the interaction starts to happen 

	std::cout << "You are about to have an easy battle that you should win! \n";

	std::cout << "\n\nThis is bobby, he's a level one enemy, you two will now fight\n\n";

	//now lets give the user some optins in the fight. 
	//options will be placed into an array and the user will pick one to use, no matter what they win, unless they don't pick one of the options 

	//option 1
	std::cout << "1. Attack the enemry with your hand			";

	//option 2
	std::cout << "2. Tell the enemy they are pretty\n\n";

	//option 3
	std::cout << "3. Tell the enemy they are ugly				";

	//option 4
	std::cout << "4. Attack the enemy with a ball\n\n";

	std::cout << "Please select a number for what you want to do: ";
	std::cin >> userChoice;

	std::cout << "\n\n" << userChoice;

	if (userChoice == 1) {
		std::cout << "\nYou hit the enemy with a back hand slap!\n";
		std::cout << "The eneemy runs away as you've slapped it's eyebrows off\n";
		std::cout << "You win the fight\n\n";
		std::cout << "\nYou win 20 Points\n\n";
	}
	else if (userChoice == 2) {
		std::cout << "\nYou tell the enemy it has nice eyebrows!\n";
		std::cout << "The enemy thanks you and leaves you to have a nice game\n";
		std::cout << "You win the figth\n\n";
		std::cout << "\nYou win 20 Points\n\n";
	}
	else if (userChoice == 3) {
		std::cout << "\nYou tell the enemy it has horible eyebrows!\n";
		std::cout << "The enemy starts crying and tells you it hates you and just wanted to make you proud\n";
		std::cout << "You win the fight\n\n";
		std::cout << "\nYou win 20 Points\n\n";
	}
	else if (userChoice == 4) {
		std::cout << "\nYou throw a ball at the enemys head\n";
		std::cout << "The enemy now has mucked up eyebrows, it's very sad and runs off\n";
		std::cout << "You win the fight\n\n";
		std::cout << "\nYou win 20 Points\n\n";
	}
	else {
		std::cout << "\nyou fucked up and didn't select an attack\n";
		std::cout << "The enemy steals your eyebrows\n";
		std::cout << "You lost the fight... how did you fuck this up...\n\n";
		std::cout << "\nYou lose 20 Points\n\n";
	}
}



//this is for when the user loses there points to ther eoppoiate 
void playerOneLosingPointsToPlayerTwo() {
	playerOnePoints = playerOnePoints - 10; 
	playerTwoPoints = playerTwoPoints + 10; 
}
//this is when the user is faced with a hard battle 
void introductionToTheHardBattle() {
	//ok now lets make some text to promt the user to select a weapon 
	std::cout << "You are encounted by an enemy called \"Harder Bobby\"" << "\n";
	std::cout << "\n\n Please pick a weapon from this list:\n\n";

	//here is a list of weapons to pick from 
	std::cout << "Please pick a weapon: \n";
	std::cout << "Small Sword (enter 1) \n";
	std::cout << "Large Sword (enter 2) \n";
	std::cout << "Medium Sword (enter 3) \n";
	std::cout << "Gaint Axe (enter 4) \n";
	std::cin >> userGuess;

	//ok lets make it so we can use magic to make this all work


	std::cout << "\nPlease select an attack\n";
}

void playersWeaponChoice() {

	int numberIWantToFind = userGuess;
	int minimum = 0;
	int max = (sizeof(weaponArray) / sizeof*(weaponArray)-1);
	int guess;
	int xx = 1;


	while (minimum <= max) {
		guess = (int)(((max + minimum) / 2) + 0.5);

		if (numberIWantToFind == weaponArray[guess]) {
			std::cout << "The number is at index " << guess << std::endl;

			if (numberIWantToFind == 1)
			{
				std::cout << "\nYou Picked A Small Sword\n";
				break;
			}
			else if (numberIWantToFind == 2)
			{
				std::cout << "\nyou Picked A Large Sword\n";
				break;
			}
			else if (numberIWantToFind == 3) {
				std::cout << "\nYou Picked A Medium Sword\n";
				break;
			}
			else if (numberIWantToFind == 4) {
				std::cout << "\nYou Picked A Giant Axe\n";
				break;
			}
			else
			{
				std::cout << "\n\nYou're a fucking idiot\n\n";
				break;
			}
		}
		else if (weaponArray[guess] < numberIWantToFind) {
			minimum = guess + 1;
		}
		else {
			max = guess - 1;
		}
	}
	if (numberIWantToFind != weaponArray[guess]) {
		std::cout << "You're an idiot fight with your hands";
	}
}

void playerAttackChoses() {
	//int playerHealth = 30;
	//int enemy.health = 30;

	player.health = 30;
	enemy.health = 30;

	while (player.health > 0 && enemy.health > 0)
	{
		//start of the attack for small sword 
		if (userGuess == weaponArray[0])
		{
			std::cout << "\n1. Scratch\n";
			std::cout << "2. Small swing\n";
			std::cin >> attackPicks;
			if (attackPicks == 1)
			{
				std::cout << "You used Scratch! \n You did 5 damage\n";
				enemy.health = enemy.health - 5;
				//            std::cout << enemy.health;

				std::cout << "The enemy Hit's you\n\n";
				player.health = player.health - 2;
				//            std::cout << "\n" << player.health;
				std::cout << "Player Health: " << player.health << "\n";
				std::cout << "Enemy Health: " << enemy.health << "\n\n";
			}
			else if (attackPicks == 2) {
				std::cout << "You used Small Swing! \n You did 10 damage\n";
				enemy.health = enemy.health - 10;
				//            std::cout << enemy.health;

				std::cout << "The enemy Hit's you\n\n";
				player.health = player.health - 5;
				//           std::cout << "\n" << player.health;
				std::cout << "Player Health: " << player.health << "\n";
				std::cout << "Enemy Health: " << enemy.health << "\n\n";
			}
			else {
				std::cout << "You're a fucking wanker and didn't attack";
			}
		}
		//start of the attack for the large sword
		else if (userGuess == weaponArray[1])
		{
			std::cout << "\n1. Hit\n";
			std::cout << "2. Big Swing\n";
			std::cin >> attackPicks;
			if (attackPicks == 1)
			{
				std::cout << "\nYou used Hit! \n You did 10 damage\n";
				enemy.health = enemy.health - 15;
				//          std::cout << enemy.health;

				std::cout << "The enemy Hit's you\n\n";
				player.health = player.health - 8;
				//            std::cout << "\n" << player.health;
				std::cout << "Player Health: " << player.health << "\n";
				std::cout << "Enemy Health: " << enemy.health << "\n\n";
			}
			else if (attackPicks == 2) {
				std::cout << "You used Big Swing! \n You did 15 damage\n";
				enemy.health = enemy.health - 20;
				//            std::cout << enemy.health;

				std::cout << "The enemy Hit's you\n\n";
				player.health = player.health - 10;
				//            std::cout << "\n" << player.health;
				std::cout << "Player Health: " << player.health << "\n";
				std::cout << "Enemy Health: " << enemy.health << "\n\n";
			}
			else {
				std::cout << "You're a fucking wanker and didn't attack";
			}
		}
		//start of th attack for medium sword 
		else if (userGuess == weaponArray[2])
		{
			std::cout << "\n1. Slash\n";
			std::cout << "2. Swing\n";
			std::cin >> attackPicks;
			if (attackPicks == 1)
			{
				std::cout << "\nYou used Slash! \n You did 10 damage\n";
				enemy.health = enemy.health - 10;
				//           std::cout << enemy.health;

				std::cout << "The enemy Hit's you\n\n";
				player.health = player.health - 5;
				//            std::cout << "\n" << player.health;
				std::cout << "Player Health: " << player.health << "\n";
				std::cout << "Enemy Health: " << enemy.health << "\n\n";
			}
			else if (attackPicks == 2) {
				std::cout << "You used Swing! \n You did 15 damage\n";
				enemy.health = enemy.health - 15;

				std::cout << "The enemy Hit's you\n\n";
				player.health = player.health - 8;
				//            std::cout << "\n" << player.health;
				std::cout << "Player Health: " << player.health << "\n";
				std::cout << "Enemy Health: " << enemy.health << "\n\n";
			}
			else {
				std::cout << "You're a fucking wanker and didn't attack";
			}
		}
		//start of the Giant Axe 
		else if (userGuess == weaponArray[3])
		{
			std::cout << "\n1. Massive Hit\n";
			std::cout << "2. Mega Swing\n";
			std::cin >> attackPicks;
			if (attackPicks == 1)
			{
				std::cout << "\nYou used Massive Hit! \n You did 20 damage\n";
				enemy.health = enemy.health - 20;
				//           std::cout << enemy.health;

				std::cout << "The enemy Hit's you\n\n";
				player.health = player.health - 10;
				//           std::cout << "\n" << player.health;
				std::cout << "Player Health: " << player.health << "\n";
				std::cout << "Enemy Health: " << enemy.health << "\n\n";
			}
			else if (attackPicks == 2) {
				std::cout << "You used Big Swing! \n You did 0 damage, big swing and no hit\n";
				enemy.health = enemy.health - 5;
				//           std::cout << enemy.health;

				std::cout << "The enemy Hit's you\n\n";
				player.health = player.health - 10;
				//         std::cout << "\n" << player.health;
				std::cout << "Player Health: " << player.health << "\n";
				std::cout << "Enemy Health: " << enemy.health << "\n\n";
			}
			else {
				std::cout << "You're a fucking wanker and didn't attack";
			}
		}
		else
		{
			std::cout << "You fucked up";
		}
	}
}
void workoutWhoWins() {
	if (player.health > 0 && player.health > enemy.health) {
		std::cout << "\n\nThe player wins This Battle\n\n";
	}
	else
	{
		std::cout << "\n\nThe enemy wins This battle\n\n";
	}
}

//this is when user finds the special one one of a kind square
void numberGuessingShit() {
	//lets start by making a rand thingo
	int userChoiceForNumberGuessingGame;
	std::cout << "Do you want to get 30 extra points? If you don't win this game you'll lose 30 points off your score \n (1 is yes 2 is no)\n";
	std::cin >> userChoiceForNumberGuessingGame;

	if (userChoiceForNumberGuessingGame == 1)
	{
		int x = 0;
		srand((unsigned)time(NULL));
		int userGuess;
		int numberToGuess = rand() % (10 - 1);
	//	std::cout << "\n\nHello World" << numberToGuess << "\n"; 
	//	std::cout << "\nThe number to guess: " << numberToGuess;

		std::cout << "\n\nPlease guess a Number Between 1 - 10: \n";
		std::cin >> userGuess;

		do
		{

		if (userGuess == numberToGuess) {
			std::cout << "\nyou have gotten the right number \n";
			x = 3; 
		}
		else if (userGuess != numberToGuess) {
		int lessOrMore = numberToGuess - userGuess;
			if (lessOrMore > 0) {
				if (userGuess >= (numberToGuess - 2) && userGuess < numberToGuess) {
					std::cout << "Your number is too low\n";
					std::cout << "You are close to the number\n";
					std::cout << " Try again: \n";
					std::cin >> userGuess;

				}
				else
				{
					std::cout << "Your number is too low\n";
					std::cout << "You are far away from the number\n";				
                    std::cout << " Try again: \n";
					std::cin >> userGuess;
				}
				}
			else {
				if (userGuess <= (numberToGuess + 2) && userGuess > numberToGuess) {
					std::cout << "Your number is too high\n";
					std::cout << "You are close to the number\n";
                    std::cout << " Try again: \n";
					std::cin >> userGuess;
				}
				else
				{
					std::cout << "Your number is too high\n";
					std::cout << "You are far away from the number\n";
                    std::cout << " Try again: \n";
					std::cin >> userGuess;
				}
			}
		}
		//lets make it so that the user only gets two tries 
		x++;
		if (x == 3 && userGuess != numberToGuess) {
			std::cout << "You've got the wrong number, you lose 30 points\n";
		}
		else if (x == 3 && userGuess == numberToGuess) {
			std::cout << "\nYou guessed the right number\n";
		}
		} while (x < 3);
	}
}

void workOutWhatHappensToUserOne() {
	//now lets make it so that if the user picks a number they get a reaction of the arra 
	switch (playerOneTurn)
	{
		//the user gets extra points on these numbers
	case 01:
	case 14:
	case 16:
		std::cout << "Getting extra Points \n";
		playerExtraPointsPlayerOne();
        std::cout << "\nPlayer One Points: " << playerOnePoints << "\n\n";
		putPlayerOneMarker();
		break;
		//the user loses points for these numbers 
	case 00:
	case 8:
	case 17:
		std::cout << "Losing Points \n";
		playerLosingPointsPlayerOne();
        std::cout << "\nPlayer One Points: " << playerOnePoints << "\n\n";
		putPlayerOneMarker();
		break;
		//user has an easy battle on these numbers
	case 5:
	case 11:
	case 9:
	case 15:
	case 19:
		std::cout << "Get ready for battle \n";
		easyBattle();
        std::cout << "\nPlayer One Points: " << playerOnePoints << "\n\n";
		putPlayerOneMarker();
		break;
		//giving points to your opponiate
	case 6:
	case 10:
	case 3:
		std::cout << "You are losing points to your opponiate \n";
		playerOneLosingPointsToPlayerTwo();
        std::cout << "\nPlayer One Points: " << playerOnePoints << "\n\n";
        putPlayerOneMarker();
		break;
		//the user has a harder battle 
	case 7:
	case 12:
	case 2:
	case 4:
	case 13:
		std::cout << "Get ready for a hard battle \n";
		introductionToTheHardBattle();
		playersWeaponChoice();

		playerAttackChoses();

		workoutWhoWins();
        std::cout << "\nPlayer One Points: " << playerOnePoints << "\n\n";
        putPlayerOneMarker();
		break;
		//opotunity to guess a number to get more points or lose points, your choice
	case 18:
		std::cout << "You get a chance to get extra points, if you lose you lose points tho \n";
        numberGuessingShit();
        std::cout << "\nPlayer One Points: " << playerOnePoints << "\n\n";
        putPlayerOneMarker();
		break;

	default:
		std::cout << "NOT THE RIGHT NUMBER, THIS NUMBER DOESN'T EXIST \n";
        std::cout << "\nPlayer One Points: " << playerOnePoints << "\n\n";
        putPlayerOneMarker();
		break;
	}
}
void workOutWhatHappensToUserTwo() {
	//now lets make it so that if the user picks a number they get a reaction of the arra 
	switch (playerTwoTurn)
	{
		//the user gets extra points on these numbers
	case 01:
	case 14:
	case 16:
		std::cout << "Getting extra Points \n";
		playerExtraPointsPlayerTwo();
		std::cout << "\nPlayer One Points: " << playerTwoPoints << "\n\n";
		putPlayerTwoMarker();
		break;
		//the user loses points for these numbers 
	case 00:
	case 8:
	case 17:
		std::cout << "Losing Points \n";
		playerLosingPointsOnePlayerTwo();
		std::cout << "\nPlayer One Points: " << playerTwoPoints << "\n\n";
		putPlayerTwoMarker();
		break;
		//user has an easy battle on these numbers
	case 5:
	case 11:
	case 9:
	case 15:
	case 19:
		std::cout << "Get ready for battle \n";
		easyBattle();
		std::cout << "\nPlayer One Points: " << playerTwoPoints << "\n\n";
		putPlayerTwoMarker();
		break;
		//giving points to your opponiate
	case 6:
	case 10:
	case 3:
		std::cout << "You are losing points to your opponiate \n";
		std::cout << "\nPlayer One Points: " << playerTwoPoints << "\n\n";
		putPlayerTwoMarker();
		break;
		//the user has a harder battle 
	case 7:
	case 12:
	case 2:
	case 4:
	case 13:
		std::cout << "Get ready for a hard battle \n";
		introductionToTheHardBattle();
		playersWeaponChoice();

		playerAttackChoses();

		workoutWhoWins();
		std::cout << "\nPlayer One Points: " << playerTwoPoints << "\n\n";
		putPlayerTwoMarker();
		break;
		//opotunity to guess a number to get more points or lose points, your choice
	case 18:
		std::cout << "You get a chance to get extra points, if you lose you lose points tho \n";
        numberGuessingShit();
		std::cout << "\nPlayer One Points: " << playerTwoPoints << "\n\n";
		putPlayerTwoMarker();
		break;

	default:
		std::cout << "NOT THE RIGHT NUMBER, THIS NUMBER DOESN'T EXIST \n";
		putPlayerTwoMarker();
        break;
	}
}

int main() {
	int roundsOfGame = 0; 
 



	//	myGridAray[1][1] = 'x';
	//lets give the gride some numbers so we can play a game 
	std::cout << "\nWelcome to battle Squares\n";
	std::cout << "\nYou will battle between you and another user\nYou will pick numbers in the grid and who ever has the most points wins\n";

	//this allows for the users to pick how many rounds they want to play 
	std::cout << "\nHow many rounds of the game do you want to play?\n";
	std::cout << "     (You Can Only play a max of 10 rounds)\n";
	std::cin >> roundsOfGame; 

	if (roundsOfGame > 10) {
		roundsOfGame = 11; 
	}
	else {
		//nothing
	}
	int i = 1; 

	printArray();
	while (i  <= roundsOfGame) {
		std::cout << "====== ROUND"  << i << " ======\n\n";

		std::cout << "User One Please enter a number on the gride: \n";
		std::cin >> playerOneTurn;

		workOutWhatHappensToUserOne();

		std::cout << "User Two please enter a number on the gride \n";
		std::cin >> playerTwoTurn;

		workOutWhatHappensToUserTwo();
		i++; 
	}
	

	system("pause");

	return 0; 
}