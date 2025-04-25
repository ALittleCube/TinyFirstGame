#include "Game.h"

void Game::initGame() {
	Game* game = this;
	game->iStart;
	printf("\n\n\nPotions\n\n\n\n");
	printf("Do you want to play the game?\n[1] Play Game\n[2] End Game\nStart ->");
	scanf("%i", &game->iStart); fflush(stdin);
	if (game->iStart == 2) {
		printf("Okay, bye, bye, then. Please close the program.");
	}
}

void Game::tickGame() {

	Storyline story;
	Mission1 ingamefight1;
	MC mc;
	Deamon deamon;
	Leon leon;

	int iML;

	story.Story();

	printf("Who would you like to get the item for?\n");
	printf("[1] Get Item for Deamon.\n[2] Get Item for Leon.\n");
	printf("Input ->");
	scanf("%i", &iML); fflush(stdin);


	ingamefight1.SetD(iML);
	ingamefight1.Fight();
	story.Ending(ingamefight1, deamon, leon);

	getchar();

}
