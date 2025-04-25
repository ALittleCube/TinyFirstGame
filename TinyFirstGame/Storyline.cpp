#include "Storyline.h"

#include "Storyline.h"
#include "Mission1.h"

void Storyline::Story() {
	int iInputStory1;

	printf("You are the new recruit of the alchemy devision at the acedemy of mystics.\n"
		"Still being young and more adapt at using a weapon than distinguishing herbs,\n"
		"you are currently being trained by the two top alchemists of the academy.\n"
		"These two are currently fighting over which of their new inventiontions is more important to try out.\n");
	printf("Leon:\n"
		"If this new recipe works out, we will be able to make our people so much stronger!\n"
		"Do you even understand what this would mean for the forces ouf our fighting devisions?\n"
		"We would need half the forces for the same tasks!\n");
	printf("Deamon:\n"
		"You are seriously putting attack over healing here?\n"
		"This cure might just be so powerful it could heal most common sicknesses on top of regular flesh wounds.\n"
		"What does the strengh of our forces matter, if everyone's gonna die from a papercut?\n");
	printf("Leon:\n"
		"If our forces are stronger, they won't get hurt as often!\n");
	printf("Deamon:\n"
		"And what about the common people? Besides, you can't assume they won't get hurt ever again!\n");
	printf("\nOptions:\n"
		"[1] What are you two arguing about?\n"
		"[2] ...\n"
		"Input ->");
	scanf("%i", &iInputStory1); fflush(stdin);
	if (iInputStory1 == 1) {
		printf("Deamon:\n"
			"*sighs* We're just trying to decide whose invention should take up the last resources we have left.\n");
	}

	printf("Leon:\n"
		"Hey, newbie! Since you're already hre, why don't you help us out a little.\n"
		"You have some experience fighting, rigght?");
	printf("\nOptions:\n"
		"[1] Yes, I'm a professional!\n"
		"[2] I can manage.\n"
		"Input ->");
	scanf("%i", &iInputStory1); fflush(stdin);
	printf("Deamon:\n"
		"In that case...\n"
		"Why don't you go out and get me this herb?\n");
	printf("Leon:\n"
		"Hey, not so fast. I need this herb, this is way more urgent!\n");
	printf("Deamon:\n"
		"Oh god, talking to you is really useless. How about we let them decide?\n"
		"They will be doing the work, might as well chose, which.\n");
	printf("Leon:\n"
		"...\nFine, I suppose that's fair. Here is a drawing of the herb in question.\n"
		"once you find it, report back to us.");
	printf("\nOptions:\n"
		"[1] Okay, I'll be on my way\n"
		"[2] Try not killing eachother while i'm gone.\n"
		"Input ->");
	scanf("%i", &iInputStory1); fflush(stdin);

}

void Storyline::Ending(Mission1 mission1, Deamon deamon, Leon leon) {
	MC mc;

	int iInputEnding;

	if (mission1.bBeat == true) {

		if (mission1.GetD()) {
			mc.iPresentD = 1;
		}
		else {
			mc.iPresentL = 1;
		}

		printf("\nYou return from your mission. The two men seem a bit anxious for some reason.\n");
		printf("\nOptions:\n"
			"[1] Mission complete!\n"
			"[2] ...\n"
			"Input ->");
		scanf("%i", &iInputEnding); fflush(stdin);
		printf("Deamon:\n"
			"You're back? Are you okay? And you have the things we asked for?\n");
		printf("\nGive Item:\n"
			"[1] Give to Deamon (In Possesion: %i)\n"
			"[2] Give to Leon (In Possession: %i)\n"
			"Input ->", mc.iPresentD, mc.iPresentL);
		scanf("%i", &iInputEnding); fflush(stdin);
		if (((iInputEnding == 1) && (mc.iPresentD == 0)) || ((iInputEnding == 2) && (mc.iPresentL == 0))) {
			printf("\nYou don't have this item. Please select the other option.\n"
				"[1] Give to Deamon (In Possesion: %i)\n"
				"[2] Give to Leon (In Possession: %i)\n"
				"Input ->", mc.iPresentD, mc.iPresentL);
			scanf("%i", &iInputEnding); fflush(stdin);

		}
		if (iInputEnding == 1) {
			deamon.SetHearts(1);
			mc.iPresentD -= 1;
			printf("\nDeamon:\n"
				"Well done. That's exactly what I needed.\n");
			printf("Leon:\n"
				"...");
		}
		else {
			leon.SetHearts(1);
			mc.iPresentL -= 1;
			printf("\nLeon:\n"
				"Well done. That's exactly what I needed.\n");
			printf("Deamon:\n"
				"...");
		}
		printf("\n\n%i\n%i\n\n", deamon.GetHearts(), leon.GetHearts());
		if (deamon.GetHearts() > leon.GetHearts()) {
			printf("Deamon:\n"
				"Hey, I'm kind of sorry we put you through all this. And you did such a good job too.\n"
				"How about I take you to dinner? You can pick where.\n");
			printf("\nOptions:\n"
				"[1] How about the academia cafe?\n"
				"[2] I'd like to visit the restaurant in the west district of the city.\n"
				"Input ->");
			scanf("%i", &iInputEnding); fflush(stdin);
			printf("Deamon:\n"
				"Sure. If you have time, let's go there now.\n");

			switch (iInputEnding) {
			case 1:printf("You go to the academia cafe with Deamon and drink a nice cup of relaxing tea with some pastries.\n"
				"The both of you have a good time.");
				break;
			case 2:printf("You go to the restaurant with Deamon and have a nice three course meal.\n"
				"The both of you have a good time.");
				break;
			}

		}
		else if (deamon.GetHearts() < leon.GetHearts()) {
			printf("Leon:\n"
				"Since you helped us a lot, how about I buy you some food. You had to do a lot for a newbie today.\n");
			printf("\nOptions:\n"
				"[1] How about the ice cream shop?\n"
				"[2] I'd like to visit the restaurant in the south district of the city.\n"
				"Input ->");
			scanf("%i", &iInputEnding); fflush(stdin);
			printf("Leon:\n"
				"Sure. If you have time, let's go there now.\n");

			switch (iInputEnding) {
			case 1:printf("You go to the ice cream shop with Leon and and share two cones of ice cream.\n"
				"The both of you have a goot time.");
				break;
			case 2:printf("You go to the restaurant with Leon and have a nice , hearty meal.\n"
				"The both of you have a good time.");
				break;
			}

		}


	}
	else {
		printf("You have lost the game this time. Try again if you want. :)");
	}

	return;
}