//#include <iostream>
//#include <cassert>
//
//enum PotionType { HEALTH, SPEED, STRENGTH, MAGIC };
//
//struct Player {
//	// player stats
//	int health = 30;
//	int speed = 10;
//	int strength = 15;
//	int magic = 30;
//};
//
//void applyPotion(PotionType potionType, Player& player);
//
//int main() {
//	// initialises player objects for logic tests
//	Player healthPlayer;
//	Player speedPlayer;
//	Player strengthPlayer;
//	Player magicPlayer;
//
//	// apply potions to test objects and perform assertions tol check if the logic works
//	applyPotion(HEALTH, healthPlayer);
//	assert(healthPlayer.health == 100 && healthPlayer.speed == 10 && healthPlayer.strength == 15 && healthPlayer.magic == 30);
//
//	applyPotion(SPEED, speedPlayer);
//	assert(speedPlayer.health == 20 && speedPlayer.speed == 50 && speedPlayer.strength == 5 && speedPlayer.magic == 10);
//
//	applyPotion(STRENGTH, strengthPlayer);
//	assert(strengthPlayer.health == 60 && strengthPlayer.speed == 25 && strengthPlayer.strength == 200 && strengthPlayer.magic == 30);
//
//	applyPotion(MAGIC, magicPlayer);
//	assert(magicPlayer.health == 30 && magicPlayer.speed == 10 && magicPlayer.strength == 10 && magicPlayer.magic == 100);
//
//	return 0;
//}
//
//void applyPotion(PotionType potionType, Player& player) {
//	// pass player object by reference to access its key-values
//	// checks which potion is being used and applies the potion on the player object
//	switch (potionType)
//	{
//		case HEALTH:
//			player.health = 100;
//			break;
//		case SPEED:
//			player.speed = 50;
//			player.health -= 10;
//			player.strength -= 10;
//			player.magic = 10;
//			break;
//		case STRENGTH:
//			player.strength = 200;
//			player.speed = 25;
//			player.health *= 2;
//			break;
//		case MAGIC:
//			player.magic = 100;
//			player.strength = 10;
//			break;
//	}
//}
