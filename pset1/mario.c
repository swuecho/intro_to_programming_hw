#include <stdio.h>
int main(void)
{
	int height = 8;

	for (int i = 0; i < height; i++) {
		//     ## height -(i+1)     i+2 #  total = height + 1
		//    ###
		//   ####
		//  #####
		// ######
		///
		for (int space = 0; space <= height - (i + 1); space++)
			printf(" ");
		for (int stash = 0; stash <= i + 1; stash++)
			printf("#");

		printf("\n");

	}
}
