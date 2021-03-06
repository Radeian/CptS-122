/************************************************************************
NAME: RADE PILKINTON
CLASS: CPTS 122 FALL 2017
DATE: 9/10/17
ASSIGNMENT: PA2
DESCRIPTION: This program manipulates a music collection. This is the main file.
************************************************************************/
#include "header.h"


int main(void)
{
	Node *pDMM = NULL;
	FILE *infile = NULL;
	FILE *outfile = NULL;
	infile = fopen("musicPlaylist.csv", "r");

	int menuchoice = 0;
	while (menuchoice != 11)
	{
		menuchoice = menu();

		switch (menuchoice)
		{
		case 1://Load - Completed
			readrecords(infile, &pDMM);
			pleasecontinue();
			break;
		case 2: //Store - Completed
			outfile = fopen("musicPlaylist.csv", "w");
			storerecords(outfile, pDMM);
			fclose(outfile);
			break;
		case 3: //Display - Completed
			printList(pDMM);
			pleasecontinue();
			break;
		case 4: //Insert - Not Required
			break;
		case 5: //Delete - Not Required
			break;
		case 6: //Edit - Completed
			editrecords(&pDMM);
			pleasecontinue();
			break;
		case 7: //Sort - Not Required
			break;
		case 8: //Rate - Completed
			ratesong(&pDMM);
			pleasecontinue();
			break;
		case 9: //Play - In Progress
			playsongs(&pDMM);
			break;
		case 10: //Shuffle - Not Required
			break;
		case 11: //Exit - Completed
			outfile = fopen("musicPlaylist.csv", "w");
			storerecords(outfile, pDMM);
			fclose(outfile);
			break;
		}
	}

	return 0;
}