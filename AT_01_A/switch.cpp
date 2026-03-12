#include <iostream>

enum PotionType { HEALTH, SPEED, STRENGTH, MAGIC };

struct Player {
	int health = 30;
	int speed = 10;
	int strength = 15;
	int magic = 30;
};

void applyPotion(enum potionType, Player player);

int main() {


	return 0;
}

void applyPotion(enum potionType, Player player) {
	switch (HEALTH)
	{
		case HEALTH:
			player.health = 100;
			break;
		case SPEED:
			player.speed = 50;
			player.health -= 10;
			player.strength -= 10;
			player.magic = 10;
			break;
		case STRENGTH:
			player.strength = 200;
			player.speed = 25;
			player.health *= 2;
			break;
		case MAGIC:
			player.magic = 100;
			player.strength = 10;
			break;
	}
}
