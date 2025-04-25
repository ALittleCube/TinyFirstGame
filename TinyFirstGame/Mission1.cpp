#include "Mission1.h"

void Mission1::iStage1() {
	int iNumberEnemies = 1;
	int iMonsterType = 1;
}

void Mission1::iStage2() {
	int iNumberEnemies = 1;
	int iMonsterType = 2;
}

void Mission1::iStage3() {
	int iNumberEnemies = 1;
	int iMonsterType = 3;
}

void Mission1::Reward() {
	int iPresentD = 1;
}

void Mission1::Fight() {
	Mission1* mission1 = this;
	MC mc;
	Slime slime;
	BabyBoar babyboar;
	AdultBoar adultboar;


	int iAction;

	while (mission1->iStageNumber == 1) {
		if (mc.iHealthCurrent <= 0) {
			printf("\nSadly, you died.\nTry again later if you want to.");
			mission1->iStageNumber = 5;
		}
		else {
			printf("\nYour enemy has %i health.\nWhat would you like to do?\n", slime.iHealthCurrent);
			printf("[1] Normal Attack (Cost: 1 Energy)\n[2] Special Attack (Cost: 3 Energy)\n[3] Do nothing (Cost -3 Energy)\n");
			printf("Action ->");
			scanf("%i", &iAction); fflush(stdin);

			if (mc.iEnergyCurrent >= 3) {
				switch (iAction) {
				case 1:slime.iHealthCurrent -= 5;
					mc.iEnergyCurrent -= 1;
					break;
				case 2:slime.iHealthCurrent -= 20;
					mc.iEnergyCurrent -= 3;
					break;
				case 3:mc.iEnergyCurrent -= -3;
					break;
				}
			}
			else if (mc.iEnergyCurrent >= 1) {
				switch (iAction) {
				case 1:slime.iHealthCurrent -= 5;
					mc.iEnergyCurrent -= 1;
					break;
				case 2:printf("\nYou don't have enough energy to do this attack.\n Please chose another option:");
					printf("[1] Normal Attack (Cost: 1 Energy)\n[2] Special Attack (Cost: 3 Energy)\n[3] Do nothing (Cost -3 Energy)\n");
					printf("Action ->");
					scanf("%i", &iAction); fflush(stdin);
					continue;
				case 3:mc.iEnergyCurrent -= -3;
					break;
				}
			}
			else {
				switch (iAction) {
				case 1:printf("\nYou don't have enough energy to do this attack.\n Please chose another option:");
					printf("[1] Normal Attack (Cost: 1 Energy)\n[2] Special Attack (Cost: 3 Energy)\n[3] Do nothing (Cost -3 Energy)\n");
					printf("Action ->");
					scanf("%i", &iAction); fflush(stdin);
					continue;
				case 2:printf("\nYou don't have enough energy to do this attack.\n Please chose another option:");
					printf("[1] Normal Attack (Cost: 1 Energy)\n[2] Special Attack (Cost: 3 Energy)\n[3] Do nothing (Cost -3 Energy)\n");
					printf("Action ->");
					scanf("%i", &iAction); fflush(stdin);
					continue;
				case 3:mc.iEnergyCurrent -= -3;
					break;
				}
			}

			if (slime.iHealthCurrent <= 0) {
				printf("Your enemy is now dead. You have beat this stage.");
				mission1->iStageNumber += 1;
				if (mc.iHealthCurrent <= 50) {
					mc.iHealthCurrent += 50;
				}
				else if (mc.iHealthCurrent <= 75) {
					mc.iHealthCurrent += 25;
				}
				else {
					mc.iHealthCurrent += 5;
				}
				if (mc.iEnergyCurrent <= 3) {
					mc.iEnergyCurrent += 7;
				}
				else if (mc.iEnergyCurrent <= 5) {
					mc.iEnergyCurrent += 5;
				}
				else {
					mc.iEnergyCurrent += 2;
				}
			}
			else if (slime.iAttackCount == 4) {
				printf("Enemy uses Special Attack. Would you like to dodge the first part of the attack?\n");
				printf("[1] Dodge (Costs: 1 Energy)\n[2] Don't dodge (Cost: 0 Energy)\nAction ->");
				scanf("%i", &iAction); fflush(stdin);
				if (mc.iEnergyCurrent <= 0) {
					switch (iAction) {
					case 1: printf("You don't have enough energy to dodge. Please chose the other Option.");
						printf("[1] Dodge (Costs: 1 Energy)\n[2] Don't dodge (Cost: 0 Energy)\nAction ->");
						scanf("%i", &iAction); fflush(stdin);
						continue;
					case 2: mc.iHealthCurrent -= 5;
						break;
					}
				}
				else {
					switch (iAction) {
					case 1: printf("You have dodged and will now complete a counter attack, that costs 0 Energy.");
						slime.iHealthCurrent -= 5;
					case 2: mc.iHealthCurrent -= 5;
						break;
					}
				}
				if (slime.iHealthCurrent <= 0) {
					printf("You have defeated this stage.");
					mission1->iStageNumber += 1;
					if (mc.iHealthCurrent <= 50) {
						mc.iHealthCurrent += 50;
					}
					else if (mc.iHealthCurrent <= 75) {
						mc.iHealthCurrent += 25;
					}
					else {
						mc.iHealthCurrent += 5;
					}
					if (mc.iEnergyCurrent <= 3) {
						mc.iEnergyCurrent += 7;
					}
					else if (mc.iEnergyCurrent <= 5) {
						mc.iEnergyCurrent += 5;
					}
					else {
						mc.iEnergyCurrent += 2;
					}
				}
				else {
					mc.iHealthCurrent -= 5;
					slime.iAttackCount = 0;
				}
			}
			else {
				printf("Enemy uses Normal Attack. Would you like to dodge the first part of the attack?\n");
				printf("[1] Dodge (Costs: 1 Energy)\n[2] Don't dodge (Cost: 0 Energy)\nAction ->");
				scanf("%i", &iAction); fflush(stdin);
				if (mc.iEnergyCurrent <= 0) {
					switch (iAction) {
					case 1: printf("You don't have enough energy to dodge. Please chose the other Option.");
						printf("[1] Dodge (Costs: 1 Energy)\n[2] Don't dodge (Cost: 0 Energy)\nAction ->");
						scanf("%i", &iAction); fflush(stdin);
						continue;
					case 2: mc.iHealthCurrent -= 5;
						break;
					}
				}
				else {
					switch (iAction) {
					case 1: printf("You have dodged and will now complete a counter attack, that costs 0 Energy.");
						slime.iHealthCurrent -= 5;
					case 2: mc.iHealthCurrent -= 5;
						break;
					}
				}
				if (slime.iHealthCurrent <= 0) {
					printf("You have defeated this stage.");
					mission1->iStageNumber += 1;
					if (mc.iHealthCurrent <= 50) {
						mc.iHealthCurrent += 50;
					}
					else if (mc.iHealthCurrent <= 75) {
						mc.iHealthCurrent += 25;
					}
					else {
						mc.iHealthCurrent += 5;
					}
					if (mc.iEnergyCurrent <= 3) {
						mc.iEnergyCurrent += 7;
					}
					else if (mc.iEnergyCurrent <= 5) {
						mc.iEnergyCurrent += 5;
					}
					else {
						mc.iEnergyCurrent += 2;
					}
				}
				slime.iAttackCount += 1;
			}

		}

	}

	while (mission1->iStageNumber == 2) {
		if (mc.iHealthCurrent <= 0) {
			printf("\nSadly, you died.\nTry again later if you want to.");
			mission1->iStageNumber = 5;
		}
		else {
			printf("\nYour enemy has %i health.\nWhat would you like to do?\n", babyboar.iHealthCurrent);
			printf("[1] Normal Attack (Cost: 1 Energy)\n[2] Special Attack (Cost: 3 Energy)\n[3] Do nothing (Cost -3 Energy)\n");
			printf("Action ->");
			scanf("%i", &iAction); fflush(stdin);

			if (mc.iEnergyCurrent >= 3) {
				switch (iAction) {
				case 1:babyboar.iHealthCurrent -= 5;
					mc.iEnergyCurrent -= 1;
					break;
				case 2:babyboar.iHealthCurrent -= 20;
					mc.iEnergyCurrent -= 3;
					break;
				case 3:mc.iEnergyCurrent -= -3;
					break;
				}
			}
			else if (mc.iEnergyCurrent >= 1) {
				switch (iAction) {
				case 1:babyboar.iHealthCurrent -= 5;
					mc.iEnergyCurrent -= 1;
					break;
				case 2:printf("\nYou don't have enough energy to do this attack.\n Please chose another option:");
					printf("[1] Normal Attack (Cost: 1 Energy)\n[2] Special Attack (Cost: 3 Energy)\n[3] Do nothing (Cost -3 Energy)\n");
					printf("Action ->");
					scanf("%i", &iAction); fflush(stdin);
					continue;
				case 3:mc.iEnergyCurrent -= -3;
					break;
				}
			}
			else {
				switch (iAction) {
				case 1:printf("\nYou don't have enough energy to do this attack.\n Please chose another option:");
					printf("[1] Normal Attack (Cost: 1 Energy)\n[2] Special Attack (Cost: 3 Energy)\n[3] Do nothing (Cost -3 Energy)\n");
					printf("Action ->");
					scanf("%i", &iAction); fflush(stdin);
					continue;
				case 2:printf("\nYou don't have enough energy to do this attack.\n Please chose another option:");
					printf("[1] Normal Attack (Cost: 1 Energy)\n[2] Special Attack (Cost: 3 Energy)\n[3] Do nothing (Cost -3 Energy)\n");
					printf("Action ->");
					scanf("%i", &iAction); fflush(stdin);
					continue;
				case 3:mc.iEnergyCurrent -= -3;
					break;
				}
			}

			if (babyboar.iHealthCurrent <= 0) {
				printf("Your enemy is now dead. You have beat this stage.");
				mission1->iStageNumber += 1;
				if (mc.iHealthCurrent <= 50) {
					mc.iHealthCurrent += 50;
				}
				else if (mc.iHealthCurrent <= 75) {
					mc.iHealthCurrent += 25;
				}
				else {
					mc.iHealthCurrent += 5;
				}
				if (mc.iEnergyCurrent <= 3) {
					mc.iEnergyCurrent += 7;
				}
				else if (mc.iEnergyCurrent <= 5) {
					mc.iEnergyCurrent += 5;
				}
				else {
					mc.iEnergyCurrent += 2;
				}
			}
			else if (babyboar.iAttackCount == 3) {
				printf("Enemy uses Special Attack. Would you like to dodge the first part of the attack?\n");
				printf("[1] Dodge (Costs: 1 Energy)\n[2] Don't dodge (Cost: 0 Energy)\nAction ->");
				scanf("%i", &iAction); fflush(stdin);
				if (mc.iEnergyCurrent <= 0) {
					switch (iAction) {
					case 1: printf("You don't have enough energy to dodge. Please chose the other Option.");
						printf("[1] Dodge (Costs: 1 Energy)\n[2] Don't dodge (Cost: 0 Energy)\nAction ->");
						scanf("%i", &iAction); fflush(stdin);
						continue;
					case 2: mc.iHealthCurrent -= 10;
						break;
					}
				}
				else {
					switch (iAction) {
					case 1: printf("You have dodged and will now complete a counter attack, that costs 0 Energy.");
						babyboar.iHealthCurrent -= 5;
					case 2: mc.iHealthCurrent -= 10;
						break;
					}
				}
				if (babyboar.iHealthCurrent <= 0) {
					printf("You have defeated this stage.");
					mission1->iStageNumber += 1;
					if (mc.iHealthCurrent <= 50) {
						mc.iHealthCurrent += 50;
					}
					else if (mc.iHealthCurrent <= 75) {
						mc.iHealthCurrent += 25;
					}
					else {
						mc.iHealthCurrent += 5;
					}
					if (mc.iEnergyCurrent <= 3) {
						mc.iEnergyCurrent += 7;
					}
					else if (mc.iEnergyCurrent <= 5) {
						mc.iEnergyCurrent += 5;
					}
					else {
						mc.iEnergyCurrent += 2;
					}
				}
				else {
					mc.iHealthCurrent -= 10;
					babyboar.iAttackCount = 0;
				}
			}
			else {
				printf("Enemy uses Normal Attack. Would you like to dodge the first part of the attack?\n");
				printf("[1] Dodge (Costs: 1 Energy)\n[2] Don't dodge (Cost: 0 Energy)\nAction ->");
				scanf("%i", &iAction); fflush(stdin);
				if (mc.iEnergyCurrent <= 0) {
					switch (iAction) {
					case 1: printf("You don't have enough energy to dodge. Please chose the other Option.");
						printf("[1] Dodge (Costs: 1 Energy)\n[2] Don't dodge (Cost: 0 Energy)\nAction ->");
						scanf("%i", &iAction); fflush(stdin);
						continue;
					case 2: mc.iHealthCurrent -= 5;
						break;
					}
				}
				else {
					switch (iAction) {
					case 1: printf("You have dodged and will now complete a counter attack, that costs 0 Energy.");
						babyboar.iHealthCurrent -= 5;
						break;
					case 2: mc.iHealthCurrent -= 5;
						break;
					}
				}
				if (babyboar.iHealthCurrent <= 0) {
					printf("You have defeated this stage.");
					mission1->iStageNumber += 1;
					if (mc.iHealthCurrent <= 50) {
						mc.iHealthCurrent += 50;
					}
					else if (mc.iHealthCurrent <= 75) {
						mc.iHealthCurrent += 25;
					}
					else {
						mc.iHealthCurrent += 5;
					}
					if (mc.iEnergyCurrent <= 3) {
						mc.iEnergyCurrent += 7;
					}
					else if (mc.iEnergyCurrent <= 5) {
						mc.iEnergyCurrent += 5;
					}
					else {
						mc.iEnergyCurrent += 2;
					}
				}
				babyboar.iAttackCount += 1;
			}

		}

	}

	while (mission1->iStageNumber == 3) {
		if (mc.iHealthCurrent <= 0) {
			printf("\nSadly, you died.\nTry again later if you want to.");
			mission1->iStageNumber = 5;
		}
		else {
			printf("\nYour enemy has %i health.\nWhat would you like to do?\n", adultboar.iHealthCurrent);
			printf("[1] Normal Attack (Cost: 1 Energy)\n[2] Special Attack (Cost: 3 Energy)\n[3] Do nothing (Cost -3 Energy)\n");
			printf("Action ->");
			scanf("%i", &iAction); fflush(stdin);

			if (mc.iEnergyCurrent >= 3) {
				switch (iAction) {
				case 1:adultboar.iHealthCurrent -= 5;
					mc.iEnergyCurrent -= 1;
					break;
				case 2:adultboar.iHealthCurrent -= 20;
					mc.iEnergyCurrent -= 3;
					break;
				case 3:mc.iEnergyCurrent -= -3;
					break;
				}
			}
			else if (mc.iEnergyCurrent >= 1) {
				switch (iAction) {
				case 1:adultboar.iHealthCurrent -= 5;
					mc.iEnergyCurrent -= 1;
					break;
				case 2:printf("\nYou don't have enough energy to do this attack.\n Please chose another option:");
					printf("[1] Normal Attack (Cost: 1 Energy)\n[2] Special Attack (Cost: 3 Energy)\n[3] Do nothing (Cost -3 Energy)\n");
					printf("Action ->");
					scanf("%i", &iAction); fflush(stdin);
					continue;
				case 3:mc.iEnergyCurrent -= -3;
					break;
				}
			}
			else {
				switch (iAction) {
				case 1:printf("\nYou don't have enough energy to do this attack.\n Please chose another option:");
					printf("[1] Normal Attack (Cost: 1 Energy)\n[2] Special Attack (Cost: 3 Energy)\n[3] Do nothing (Cost -3 Energy)\n");
					printf("Action ->");
					scanf("%i", &iAction); fflush(stdin);
					continue;
				case 2:printf("\nYou don't have enough energy to do this attack.\n Please chose another option:");
					printf("[1] Normal Attack (Cost: 1 Energy)\n[2] Special Attack (Cost: 3 Energy)\n[3] Do nothing (Cost -3 Energy)\n");
					printf("Action ->");
					scanf("%i", &iAction); fflush(stdin);
					continue;
				case 3:mc.iEnergyCurrent -= -3;
					break;
				}
			}

			if (adultboar.iHealthCurrent <= 0) {
				printf("Your enemy is now dead. You have beat this stage.");
				mission1->iStageNumber += 1;
				if (mc.iHealthCurrent <= 50) {
					mc.iHealthCurrent += 50;
				}
				else if (mc.iHealthCurrent <= 75) {
					mc.iHealthCurrent += 25;
				}
				else {
					mc.iHealthCurrent += 5;
				}
				if (mc.iEnergyCurrent <= 3) {
					mc.iEnergyCurrent += 7;
				}
				else if (mc.iEnergyCurrent <= 5) {
					mc.iEnergyCurrent += 5;
				}
				else {
					mc.iEnergyCurrent += 2;
				}
			}
			else if (adultboar.iAttackCount == 2) {
				printf("Enemy uses Special Attack. Would you like to dodge the first part of the attack?\n");
				printf("[1] Dodge (Costs: 1 Energy)\n[2] Don't dodge (Cost: 0 Energy)\nAction ->");
				scanf("%i", &iAction); fflush(stdin);
				if (mc.iEnergyCurrent <= 0) {
					switch (iAction) {
					case 1: printf("You don't have enough energy to dodge. Please chose the other Option.");
						printf("[1] Dodge (Costs: 1 Energy)\n[2] Don't dodge (Cost: 0 Energy)\nAction ->");
						scanf("%i", &iAction); fflush(stdin);
						continue;
					case 2: mc.iHealthCurrent -= 15;
						break;
					}
				}
				else {
					switch (iAction) {
					case 1: printf("You have dodged and will now complete a counter attack, that costs 0 Energy.");
						adultboar.iHealthCurrent -= 5;
					case 2: mc.iHealthCurrent -= 15;
						break;
					}
				}
				if (adultboar.iHealthCurrent <= 0) {
					printf("You have defeated this stage.");
					mission1->iStageNumber += 1;
					if (mc.iHealthCurrent <= 50) {
						mc.iHealthCurrent += 50;
					}
					else if (mc.iHealthCurrent <= 75) {
						mc.iHealthCurrent += 25;
					}
					else {
						mc.iHealthCurrent += 5;
					}
					if (mc.iEnergyCurrent <= 3) {
						mc.iEnergyCurrent += 7;
					}
					else if (mc.iEnergyCurrent <= 5) {
						mc.iEnergyCurrent += 5;
					}
					else {
						mc.iEnergyCurrent += 2;
					}
				}
				else {
					mc.iHealthCurrent -= 10;
					adultboar.iAttackCount = 0;
				}
			}
			else {
				printf("Enemy uses Normal Attack. Would you like to dodge the first part of the attack?\n");
				printf("[1] Dodge (Costs: 1 Energy)\n[2] Don't dodge (Cost: 0 Energy)\nAction ->");
				scanf("%i", &iAction); fflush(stdin);
				if (mc.iEnergyCurrent <= 0) {
					switch (iAction) {
					case 1: printf("You don't have enough energy to dodge. Please chose the other Option.");
						printf("[1] Dodge (Costs: 1 Energy)\n[2] Don't dodge (Cost: 0 Energy)\nAction ->");
						scanf("%i", &iAction); fflush(stdin);
						continue;
					case 2: mc.iHealthCurrent -= 10;
						break;
					}
				}
				else {
					switch (iAction) {
					case 1: printf("You have dodged and will now complete a counter attack, that costs 0 Energy.");
						adultboar.iHealthCurrent -= 5;
					case 2: mc.iHealthCurrent -= 10;
						break;
					}
				}
				if (adultboar.iHealthCurrent <= 0) {
					printf("You have defeated this stage.");
					mission1->iStageNumber += 1;
					if (mc.iHealthCurrent <= 50) {
						mc.iHealthCurrent += 50;
					}
					else if (mc.iHealthCurrent <= 75) {
						mc.iHealthCurrent += 25;
					}
					else {
						mc.iHealthCurrent += 5;
					}
					if (mc.iEnergyCurrent <= 3) {
						mc.iEnergyCurrent += 7;
					}
					else if (mc.iEnergyCurrent <= 5) {
						mc.iEnergyCurrent += 5;
					}
					else {
						mc.iEnergyCurrent += 2;
					}
				}
				adultboar.iAttackCount += 1;
			}

		}
		printf("\nRound over\n");
	}

	if (mission1->iStageNumber == 5) {
		printf("Game Over.\n");
		mission1->bBeat = false;
	}

	if (mission1->iStageNumber == 4) {
		printf("\nFight won\n");
		mission1->bBeat = true;
	}

}


bool Mission1::GetD() {
	return bD;
}

void Mission1::SetD(int x) {
	switch (x) {
	case 1:bD = true;
		break;
	case 2:bD = false;
		break;
	}
}
