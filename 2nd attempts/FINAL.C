#include<stdio.h>
#include<stdlib.h>

/*
Description: changes the seed for every day change. makes it so that seed doesnt change each transaction.
Parameters:
int nDay - Day Value
Return Value: changes srand 
*/
void computeSrand(int nDay)
{
	if (nDay == 1)
		srand(1);
	if (nDay == 2)
		srand(2);
	if (nDay == 3)
		srand(3);
	if (nDay == 4)
		srand(4);
	if (nDay == 5)
		srand(5);
	if (nDay == 6)
		srand(6);
	if (nDay == 7)
		srand(7);
	if (nDay == 8)
		srand(8);
	if (nDay == 9)
		srand(9);
	if (nDay == 10)
		srand(10);
	if (nDay == 11)
		srand(11);
	if (nDay == 12)
		srand(12);
	if (nDay == 13)
		srand(13);
	if (nDay == 14)
		srand(14);
	if (nDay == 15)
		srand(15);
}

//Description: displays MainMenu Options
void MainMenu()
{
printf("********************************************************************************");
printf("*                                                                              *");
printf("*                                                                              *");
printf("*                            [1] Start a Sales Trip                            *");
printf("*                                                                              *");
printf("*                            [2] View the Top Ten List                         *");
printf("*                                                                              *");
printf("*                            [3] Exit the Game                                 *");
printf("*                                                                              *");
printf("*                                                                              *");
printf("********************************************************************************");
printf("                        Choose from the following Options: ");
}

//Description: displays Operation Options
void displayOperations()
{
	printf("*******************************************************************************\n");	
	printf("*                   {1} Buy                                                   *\n");
	printf("*                                                                             *\n");
	printf("*                   {2} Sell                                                  *\n");
	printf("*                                                                             *\n");
	printf("*                   {3} Make                                                  *\n");
	printf("*                                                                             *\n");
	printf("*                   {4} Pay Debt                                              *\n");
	printf("*                                                                             *\n");
	printf("*                   {5} Loan                                                  *\n");
	printf("*                                                                             *\n");
	printf("*                   {6} Travel                                                *\n");
	printf("*******************************************************************************\n");
	printf("\nChoose from the following options: ");	
}
/*
Description: displays sales trip settings and prices. 
Parameters: 
int nDay - Day Value
int nCash - Cash Value
int nDebt - Debt Value
int lemonPrice - Bottle price of lemon
int lavenderPrice - Bottle price of Lavender
int rosemaryPrice - Bottle price of Rosemary
int mintPrice - Bottle price of Mint
int nCharge - charge for making diffuser oils
int nClearMinds - Bottle price of Clear Minds
int nEnergyBooster - Bottle price of Energy Booster
int nCalming - Bottle price of Calming
int TravelOption - indication of which city the player is in
int nLemonAve - /10 price of Lemon
int nLavenderAve - /10 price of Lavender
int nRosemaryAve - /10 price of rosemary
int nMintAve - /10 price of Mint
int nLemonDrops - drops of Lemon
int nLavenderDrops - drops of Lavender
int nRosemaryDrops - drops of Rosemary
int nMintDrops - drops of Mint
*/
void displayPrices(int nDay, int nCash, int nDebt, int lemonPrice,int lavenderPrice,int rosemaryPrice, int mintPrice, int nCharge, int nClearMinds ,int nEnergyBooster ,int nCalming, int TravelOption, int nLemonAve, int nLavenderAve, int nRosemaryAve, int nMintAve,  int nLemonDrops, int nLavenderDrops, int nRosemaryDrops, int nMintDrops)
{
	printf("*******************************************************************************\n");
	printf("*                                                                             *\n");	
	if (TravelOption ==1)
		printf("                    City: Manila");
	if (TravelOption ==2)
		printf("                    City: Makati");
	if (TravelOption ==3)
		printf("                    City: Alabang");
	if (TravelOption ==4)
		printf("                    City: Quezon City");
	printf("           Day: %d\n", nDay);
	printf("                    Cash: %d", nCash);
	printf("             Debt: %d\n\n", nDebt);
	printf("*                                                                             *\n");
	printf("*******************************************************************************\n");	
	
	printf("*******************************************************************************\n");	
	printf("*          Essential Oil         Bottle Price         Average Drop Price      *\n");
	if (nLemonDrops >= 1)
	{
		printf("*                                                                             *\n");	
		printf("              Lemon                  %d                      %d\n", lemonPrice, nLemonAve);
	}
	else
	{
		printf("*                                                                             *\n");	
		printf("              Lemon                  %d\n", lemonPrice);
	}
	if (nLavenderDrops >=1)
	{
		printf("*                                                                             *\n");	
		printf("              Lavender               %d                      %d\n", lavenderPrice, nLavenderAve);
	}
	else
	{
		printf("*                                                                             *\n");	
		printf("              Lavender               %d\n", lavenderPrice);
	}
		
	if (nRosemaryDrops >=1)
	{	
		printf("*                                                                             *\n");	
		printf("              Rosemary               %d                      %d\n", rosemaryPrice, nRosemaryAve);
	}
	else
	{
		printf("*                                                                             *\n");	
		printf("              Rosemary               %d\n", rosemaryPrice);
	}
	
	if (nMintDrops >=1)
	{
		printf("*                                                                             *\n");	
		printf("              Mint                   %d                      %d\n", mintPrice, nMintAve);
	}
	else
	{
		printf("*                                                                             *\n");	
		printf("              Mint                   %d\n", mintPrice);
	}
	printf("*                                                                             *\n");
	printf("*          Diffuser Oil          Bottle Price                                 *\n");
	printf("*                                                                             *\n");
	printf("              Clear Minds            %d\n", nClearMinds);
	printf("*                                                                             *\n");
	printf("              Energy Booster         %d\n", nEnergyBooster);
	printf("*                                                                             *\n");
	printf("              Calming                %d\n", nCalming);
	printf("*                                                                             *\n");
	printf("*******************************************************************************\n");
	printf("           Diffuser Oil Make Charge: %d\n", nCharge);
}

/*
Description: displays essential oil inventory
Parameters: 
int nLemonDrops - drops of lemon
int nLavenderDrops - drops of Lavender
int nRosemaryDrops - drops of Rosemary
int nMintDrops - drops of Mint
*/
void displayEOInventory ( int nLemonDrops, int nLavenderDrops, int nRosemaryDrops, int nMintDrops)
{	
	printf("*******************************************************************************\n");
	printf("*                                    Inventory                                *\n");
	printf("*                                                                             *\n");
	printf("*                   Essential Oils               Drops                        *\n");
	printf("*                                                                             *\n");
	printf("                    Lemon                         %d              \n", nLemonDrops);
	printf("*                                                                             *\n");
	printf("                    Lavender                      %d           \n", nLavenderDrops);
	printf("*                                                                             *\n");
	printf("                    Rosemary                      %d          \n", nRosemaryDrops );
	printf("*                                                                             *\n");
	printf("                    Mint                          %d              \n", nMintDrops );
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*******************************************************************************\n");
}

/*
Description: displays diffuser oils inventory
Parameters: 
int nClearMindsInv - bottles of clear minds
int nEnergyBoosterInv - bottles of EnergyBooster
int nCalmingInv - bottles of Calming
*/
void displayDOInventory (int nClearMindsInv, int nEnergyBoosterInv, int nCalmingInv)
{
	printf("*******************************************************************************\n");
	printf("*                                    Inventory                                *\n");
	printf("*                                                                             *\n");
	printf("*                   Diffuser Oils               Bottle                        *\n");
	printf("*                                                                             *\n");
	printf("                    Clear Minds                   %d           \n", nClearMindsInv);
	printf("*                                                                             *\n");
	printf("                    Energy Booster                %d        \n", nEnergyBoosterInv);
	printf("*                                                                             *\n");
	printf("                    Calming                       %d             \n", nCalmingInv );
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*******************************************************************************\n");
}
/*
Description: displays Buy Menu
Parameters:
int nCash
int lemonPrice - price of lemon
int lavenderPrice - price of lavender
int rosemaryPrice - price of rosemary
int MintPrice - price of Mint
*/
void displayBuy(int nCash, int lemonPrice, int lavenderPrice, int rosemaryPrice, int mintPrice)
{
	int lemonMax;
	int lavenderMax;
	int rosemaryMax;
	int mintMax;
	
	if (lemonPrice == 0)
		lemonMax = 0;
	else
	lemonMax = nCash / lemonPrice;
	
	if (lavenderPrice == 0)
		lavenderMax = 0;
	else
	lavenderMax = nCash / lavenderPrice;
	
	if (rosemaryPrice == 0)
		rosemaryMax = 0;
	else
	rosemaryMax = nCash / rosemaryPrice;
	
	if (mintPrice == 0)
		mintMax = 0;
	else
	mintMax = nCash / mintPrice;
	
	printf("*******************************************************************************\n");
	printf("*                                  Essential Oils                             *\n");
	printf("*                                                                             *\n");
	printf("*                   {1} Lemon       price: %d        Max: %d\n", lemonPrice,lemonMax);
	printf("*                                                                             *\n");
	printf("*                   {2} Lavender    price: %d        Max: %d\n", lavenderPrice,lavenderMax);
	printf("*                                                                             *\n");
	printf("*                   {3} Rosemary    price: %d       Max: %d\n", rosemaryPrice, rosemaryMax );
	printf("*                                                                             *\n");
	printf("*                   {4} Mint        price: %d      Max: %d\n", mintPrice, mintMax );
	printf("*                                                                             *\n");
	printf("*                   {0} cancel transaction                                    *\n");
	printf("*                                                                             *\n");
	printf("*                                                                             *\n");
	printf("*******************************************************************************\n");
}

/*
Description: displays Sell Menu
Parameters:
int nLemonAve - /10 price of Lemon
int nLavenderAve - /10 price of lavender
int nRosemaryAve - /10 price of rosemary
int nMintAve - /10 price of mint
int nClearMinds - bottle price of clear minds
int nEnergyBooster - bottle price of energyBooster
int nCalming - bottle price of calming
*/
void Sell(int nLemonAve, int nLavenderAve, int nRosemaryAve, int nMintAve, int nClearMinds, int nEnergyBooster, int nCalming)
{
	printf("*******************************************************************************\n");
	printf("*                                                                             *\n");
	printf("*                   Essential Oils         Avg Price Per Drop                 *\n");
	printf("*                                                                             *\n");
	printf("                   {1} Lemon                      %d              \n", nLemonAve);
	printf("*                                                                             *\n");
	printf("                   {2} Lavender                   %d           \n", nLavenderAve);
	printf("*                                                                             *\n");
	printf("                   {3} Rosemary                   %d          \n", nRosemaryAve );
	printf("*                                                                             *\n");
	printf("                   {4} Mint                       %d              \n", nMintAve );
	printf("*                                                                             *\n");
	printf("*                   Diffuser Oils                Price                        *\n");
	printf("*                                                                             *\n");
	printf("                   {5} Clear Minds                %d            \n", nClearMinds);
	printf("*                                                                             *\n");
	printf("                   {6} Energy Boost               %d          \n", nEnergyBooster);
	printf("*                                                                             *\n");
	printf("                   {7} Calming                    %d              \n", nCalming );
	printf("*                                                                             *\n");
	printf("*                  {0} Cancel Transaction                                     *\n");
	printf("*                                                                             *\n");
	printf("*******************************************************************************\n");	
}
/*
Description: displays Make Menu 
Parameters: 
int nLemonDrops - drops of Lemon
int nRosemaryDrops - drops of Rosemary
int nlavenderDrops - drops of lavender
int clearMax - Maximum number of clearminds the user is able to make
int energyMax - maximum number of energyboosters the user is able to make
int calmMax - maximum number of calming the user is able to make
int makeClearMinds - boolean value for ClearMinds input
int makeEnergyBooster - boolean value for EnergyBooster input
int makeCalming - boollean value for makeCalming input
Return Value: int makeClearMinds, int makeEnergyBooster and int makeCalming are boolean values for the function updateMake() that will determine if the input is valid or not.
*/
void displayMake(int nLemonDrops, int nRosemaryDrops, int nMintDrops, int nLavenderDrops, int clearMax, int energyMax, int calmMax, int *makeClearMinds, int *makeEnergyBooster, int *makeCalming)
{
	printf("*******************************************************************************\n");
	printf("*                 Available Diffuser Oils               Max                   *\n");
	if (nLemonDrops >= 3 && nRosemaryDrops >= 2 && nMintDrops >= 2)
	{
		printf("*                                                                             *\n");
		printf("                {1} Clear Minds                         %d\n", clearMax );
		printf("*                                                                             *\n");
	}
	else
		*makeClearMinds =1;
	if (nLemonDrops >= 1 && nRosemaryDrops >= 1 && nMintDrops >= 1)
	{
		printf("*                                                                             *\n");
		printf("                {2} EnergyBooster                       %d\n", energyMax);
		printf("*                                                                             *\n");
	}
	else
		*makeEnergyBooster =1;
	if (nLemonDrops >= 1 && nRosemaryDrops >= 2 && nLavenderDrops >= 3)
	{
		printf("*                                                                             *\n");
		printf("                {3} Calming                             %d\n", calmMax);
		printf("*                                                                             *\n");
	}
	else
		*makeCalming = 1;
	printf("*                                                                             *\n");
	printf("*               {0} cancel transaction                                        *\n");
	printf("*                                                                             *\n");
	printf("*******************************************************************************\n");
}

/*
Description: displays Debt menu
Parameters: 
int nDebt - debt value
*/
void displayDebt(int nDebt)
{
	printf("*******************************************************************************\n");
	printf("*                                                                             *\n");
	printf("                    Debt:                         %d              \n", nDebt);
	printf("*                                                                             *\n");
	printf("*******************************************************************************\n\n");
	printf("How much will you pay?: ");
}

/*
Description: displays loan menu
Parameters: 
int loan - loan value
*/
void displayLoan(int nLoan)
{
	printf("*******************************************************************************\n");
	printf("*                                                                             *\n");
	printf("                    Loan:                         %d              \n", nLoan);
	printf("*                                                                             *\n");
	printf("*******************************************************************************\n\n");
	printf("How much will you loan?: ");
}

/*
Description: displays travel menu 
Parameters: 
int TravelOption - city where the user is
int inManila - boolean value for Manila input
int inMakati - boolean value for Makati input
int inAlabang - boolean value for Alabang input
int inQc - boolean value for Quezon City input
Return Value: int inManila, int inMakati, int inAlabang and int inQc are boolean values for function updateTravel() in determining valid inputs
*/
void displayTravel (int TravelOption, int *inManila, int *inMakati, int *inAlabang, int *inQC)
{
	printf("*******************************************************************************\n");
	printf("*                                    Cities                                   *\n");
	if(TravelOption != 1)
	{
		printf("*                                                                             *\n");
		printf("*                   {1} Manila                                                *\n");
	} 
	if(TravelOption !=2)
	{
		printf("*                                                                             *\n");
		printf("*                   {2} Makati                                                *\n");
	}
	if(TravelOption !=3)
	{
		printf("*                                                                             *\n");
		printf("*                   {3} Alabang                                               *\n");
	}
	if(TravelOption !=4)
	{
		printf("*                                                                             *\n");
		printf("*                   {4} Quezon City                                           *\n");
		
	}
	printf("*                                                                             *\n");
	printf("*******************************************************************************\n");
		
	if (TravelOption ==1)
		*inManila =1;
	if (TravelOption ==2)
		*inMakati =1;
	if (TravelOption ==3)
		*inAlabang =1;
	if (TravelOption ==4)
		*inQC =1;	
}

/*
Description: computes the price of essential oil lemon
Parameters: 
int nDay - day value that determines the seed of srand.
Return Value: returns the price of the essential oil lemon
*/
int computeLemonPrice (int nDay)
{
	int rSign, lemonPrice;

	rSign = rand() % 99 + 1;  
	
	if (rSign >= 1 && rSign <= 35)
		lemonPrice = (rand() % 50 + 100) + (rand() % 99 + 101);        // rand() % 50 + 100; random price for Lemon
	if (rSign >= 36 && rSign <= 70)                                    // rand() % 99 + 101; random factor
		lemonPrice = (rand() % 50 + 100) - (rand() % 99 + 101);
	if (rSign>= 71 && rSign <= 90)
		lemonPrice = (rand() % 50 + 100) * (rand() % 99 + 101);
	if (rSign>= 91 && rSign <= 100)
		lemonPrice = rand() % 50 + 100;
	if (lemonPrice < 0)
		lemonPrice = 0;
		
		return lemonPrice;
}

/*
Description: computes the price of essential oil Lavender
Parameters: 
int nDay - day value that determines the seed of srand
Return Value: returns the price of the essential oil Lavender
*/
int computeLavenderPrice (int nDay)
{
	int rSign, lavenderPrice;

	rSign = rand() % 99 + 1; 	
		
	if (rSign >= 1 && rSign <= 35)
		lavenderPrice = (rand() % 40 + 20) + (rand() % 99 + 101);                    // rand() % 40 + 20;  Lavender
	if (rSign >= 36 && rSign <= 70)                                                  // rand() % 99 + 101; random factor
		lavenderPrice = (rand() % 40 + 20) - (rand() % 99 + 101);
	if (rSign>= 71 && rSign <= 90)
		lavenderPrice = (rand() % 40 + 20) * (rand() % 99 + 101);
	if (rSign>= 91 && rSign <= 100)
		lavenderPrice = rand() % 40 + 20;
	if (lavenderPrice < 0)
		lavenderPrice = 0;
		
	return lavenderPrice;
}

/*
Description: computes the price of essential oil Rosemary
Parameters: 
int nDay - day value that determines the seed of srand
Return Value: returns the price of the essential oil Rosemary
*/
int computeRosemaryPrice (int nDay)
{
	int rSign, rosemaryPrice;

	rSign = rand() % 99 + 1;  
	
	if (rSign >= 1 && rSign <= 35)                                                    // rand() % 30 + 70;  Rosemary
		rosemaryPrice = (rand() % 30 + 70) + (rand() % 99 + 101);                     // rand() % 99 + 101; random factor
	if (rSign >= 36 && rSign <= 70)
		rosemaryPrice = (rand() % 30 + 70) - (rand() % 99 + 101);
	if (rSign>= 71 && rSign <= 90)
		rosemaryPrice = (rand() % 30 + 70) * (rand() % 99 + 101);
	if (rSign>= 91 && rSign <= 100)
		rosemaryPrice = rand() % 30 + 70;
	if (rosemaryPrice < 0)
		rosemaryPrice = 0;
		
	return rosemaryPrice;
}

/*
Description: computes the price of essential oil Mint
Parameters: 
int nDay - day value that determines the seed of srand
Return Value: returns the price of the essential oil Mint
*/
int computeMintPrice (int nDay)
{
	int rSign, mintPrice;

	rSign = rand() % 99 + 1; 
	
	if (rSign >= 1 && rSign <= 35)                                                     // rand() % 70 + 130; Mint
		mintPrice = (rand() % 70 + 130) + (rand() % 99 + 101);                         // rand() % 99 + 101; random factor
	if (rSign >= 36 && rSign <= 70)
		mintPrice = (rand() % 70 + 130) - (rand() % 99 + 101);
	if (rSign>= 71 && rSign <= 90)
		mintPrice = (rand() % 70 + 130) * (rand() % 99 + 101);
	if (rSign>= 91 && rSign <= 100)
		mintPrice = rand() % 70 + 130;
	if (mintPrice < 0)
		mintPrice = 0;
		
	return mintPrice;	 	
}

/*
Description: computes the maximum number of ClearMinds the user is able to make
Parameters: 
int nLemonDrops - drops of Lemon
int nRosemaryDrops - drops of Rosemary
int nMintDrops - drops of Mint
Return Value: returns the maximum number of ClearMinds the user is able to make
*/
int computeClearMax(int nLemonDrops, int nRosemaryDrops, int nMintDrops)
{
	int clearMax =0;
	
		while (nLemonDrops >= 3 && nRosemaryDrops >= 2 && nMintDrops >= 2)
		{
			nLemonDrops = nLemonDrops -3;
			nRosemaryDrops = nRosemaryDrops -2;
			nMintDrops = nMintDrops -2;
			clearMax ++;
		}
	return clearMax;
}

/*
Description: computes the maximum number of EnergyBooster the user is able to make
Parameters: 
int nLemonDrops - drops of Lemon
int nRosemaryDrops - drops of Rosemary
int nMintDrops - drops of Mint
Return Value: returns the maximum number of EnergyBooster the user is able to make
*/
int computeEnergyMax(int nLemonDrops, int nRosemaryDrops, int nMintDrops)
{
	int energyMax =0;
	
		while (nLemonDrops >= 1 && nRosemaryDrops >= 1 && nMintDrops >= 1)
		{
			nLemonDrops = nLemonDrops -1;
			nRosemaryDrops = nRosemaryDrops -1;
			nMintDrops = nMintDrops -1;
			energyMax ++;
		}
	return energyMax;
}

/*
Description: computes the maximum number of Calming the user is able to make
Parameters: 
int nLemonDrops - drops of Lemon
int nRosemaryDrops - drops of Rosemary
int nLavenderDrops - drops of Lavender
Return Value: returns the maximum number of Calming the user is able to make
*/
int computeCalmMax(int nLemonDrops, int nRosemaryDrops, int nLavenderDrops)
{
	int calmMax =0;
	
		while (nLemonDrops >= 1 && nRosemaryDrops >= 2 && nLavenderDrops >= 3)
		{
			nLemonDrops = nLemonDrops -1;
			nRosemaryDrops = nRosemaryDrops -2;
			nLavenderDrops = nLavenderDrops -3;
			calmMax ++;
		}
	return calmMax;
}

/*
Description: Essential Oil, average Essential Oil and Diffuser Oil Prices and maximum number of diffuser oils the user is able to make. 
Parameters: 
int nDay
int lemonPrice - price of lemon
int lavenderPrice - price of Lavender 
int rosemaryPrice - price of Rosemary
int mintPrice - price of Mint
int nClearMinds - price of clear minds
int nEnergyBooster - price of energy booster
in nCalming - price of calming
int nLemonAve - /10 price of lemon
int nLavenderAve - /10 price of Lavender
int nRosemaryAve - /10 price of Rosemary
int nMint Ave - /10 price of Mint
int clearMax - max number of clearminds player is able to make
int energyMax - max number of energybooster player is able to make
int calmMax - max number of calming player is able to make
int nLemonDrops - drops of lemon
int nRosemaryDrops - drops of rosemary
int nMintDrops - drops of mint
int nLavenderDrops - drops of lavender
Return Value: returns the value of the essential oil prices function to variables, computes the price of diffuser oil from this. places the /10 of essential oils to variables. returns the value of the diffuser oil max functions to variables.
*/
void cityPrices(int nDay,int *lemonPrice, int *lavenderPrice, int *rosemaryPrice, int *mintPrice, int *nClearMinds ,int *nEnergyBooster ,int *nCalming, int *nLemonAve, int *nLavenderAve, int *nRosemaryAve, int *nMintAve, int *clearMax, int *energyMax, int *calmMax, int nLemonDrops, int nRosemaryDrops, int nMintDrops, int nLavenderDrops )
{
		*lemonPrice = computeLemonPrice (nDay);
		*lavenderPrice = computeLavenderPrice (nDay);
		*rosemaryPrice = computeRosemaryPrice (nDay);
		*mintPrice = computeMintPrice (nDay);
		
		*nClearMinds = 1.15 * ((3 * *lemonPrice/10) + (2 * *rosemaryPrice/10) + (2 * *mintPrice/10));
		*nEnergyBooster = 1.15 * ((*lemonPrice/10) + (*rosemaryPrice/10) + (*mintPrice/10));
		*nCalming = 1.15 * ((*lemonPrice/10) + (2 * *rosemaryPrice/10) + (3 * *lavenderPrice/10));
		
		*nLemonAve = *lemonPrice/10;
		*nLavenderAve = *lavenderPrice/10;
		*nRosemaryAve = *rosemaryPrice/10;
		*nMintAve = *mintPrice/10;
		
		*clearMax = computeClearMax(nLemonDrops, nRosemaryDrops, nMintDrops);   
		*energyMax = computeEnergyMax (nLemonDrops, nRosemaryDrops, nMintDrops);
		*calmMax = computeCalmMax (nLemonDrops, nRosemaryDrops, nLavenderDrops);
}

/*
Description: displays buy options, and updates essential oil inventory and cash
Parameters: 
int lemonPrice - price of lemon
int rosemaryPrice - price of rosemary
int mintPrice - pricce of mint
int nLemonDrops - drops of lemon
int nLavenderDrops - drops of lemon
int nRosemaryDrops - drops of lemon
int nMintDrops - drops of lemon
int nCash - cash value
Return Value: updates the value of esential oil drop inventory and decreases cash for each purchase
*/
void updateBuy(int lemonPrice, int lavenderPrice, int rosemaryPrice, int mintPrice, int *nLemonDrops, int *nLavenderDrops, int *nRosemaryDrops, int *nMintDrops, int *nCash)
{
	int bBuy = 0;
	int BuyOption;
	
	while (bBuy == 0)
	{
	printf("\nWhat Will you Buy? : ");
	scanf("%d", &BuyOption);
	
	while (BuyOption != 1 && BuyOption != 2 && BuyOption !=3 && BuyOption != 4 && BuyOption != 0)
	{
		printf("Enter Correct Option: ");
		scanf("%d", &BuyOption);
	}
	
	if (BuyOption == 1)
	{
		if (lemonPrice == 0)
			printf("Unavailable Essential Oil");
		else if (lemonPrice > *nCash)
			printf("Not enough Cash");
		else
		{
		*nLemonDrops = *nLemonDrops + 10;
		*nCash = *nCash - lemonPrice;
		bBuy=1;
		system("CLS");
		}
	}
	if (BuyOption == 2)
	{
		if (lavenderPrice == 0)
			printf("Unavailable Essential Oil");
		else if (lavenderPrice > *nCash)
			printf("Not enough Cash");
		else
		{
		*nLavenderDrops = *nLavenderDrops + 10;
		*nCash = *nCash - lavenderPrice;
		bBuy=1;
		system("CLS");
		}
	}
	if (BuyOption == 3)
	{
		if (rosemaryPrice == 0)
			printf("Unavailable Essential Oil");
		else if (rosemaryPrice > *nCash)
			printf("Not enough Cash");
		else
		{
		*nRosemaryDrops = *nRosemaryDrops + 10;
		*nCash = *nCash - rosemaryPrice;
		bBuy=1;
		system("CLS");
		}
	}
	if (BuyOption == 4)
	{
		if (mintPrice == 0)
			printf("Unavailable Essential Oil");
		else if (mintPrice > *nCash)
			printf("Not enough Cash");
		else
		{
		*nMintDrops = *nMintDrops + 10;
		*nCash = *nCash - mintPrice;
		bBuy=1;
		system("CLS");
		}
	}
	
		if (BuyOption == 0)
		{
			system("CLS");
			bBuy=1;
		}
		
	}
		bBuy=0;
}

/*
Description: displays sell options, updates essential oil and diffuser oil inventory, updates cash
Parameters: 
int nCash - cash value
int nLemonDrops - drops of lemon
int nlavenderDrops - drops of lavender
int nRosemaryDrops - drops of rosemary
int nMintDrops - drops of mint
int nLemonAve - /10 price of lemon
int nLavenderAve - /10 price of lavender
int nRosemaryAve - /10 price of rosemary
int nMintAve - /10 price of mint
int nClearMinds - price of clearminds
int nEnergyBooster - price of energybooster
int nCalming - price of calming
int nClearMindsInv - bottles of clearminds
int nEnergyBoosterInv - bottles of energy booster
int nCalminginv - bottles of calming
Return Value: decreases essential oil and diffisure oil inventory for each sale. increases cash for each oil bought.
*/
void updateSell(int *nCash, int *nLemonDrops, int *nLavenderDrops, int *nRosemaryDrops, int *nMintDrops, int nLemonAve, int nLavenderAve, int nRosemaryAve, int nMintAve, int nClearMinds, int nEnergyBooster, int nCalming, int *nClearMindsInv, int *nEnergyBoosterInv, int *nCalmingInv)
{
	int SellOption;
	int bSell = 0;
	
	while (bSell==0)
	{
		printf("What will you sell? ");
		scanf("%d", &SellOption);
	while (SellOption != 1 && SellOption != 2 && SellOption != 3 && SellOption != 4 && SellOption != 5 && SellOption != 6 && SellOption != 7 && SellOption != 0 )
	{
		printf("Enter Correct Option: ");
		scanf("%d", &SellOption);
	}
	if(SellOption == 1)
	{
		if (*nLemonDrops>=1)
		{
		system("CLS");
		*nCash = *nCash + nLemonAve;
		*nLemonDrops = *nLemonDrops - 1;
		bSell=1;
		}
		else
		printf("Not enough oil\n");	
	}
	
	if(SellOption == 2)
	{
		if (*nLavenderDrops>=1)
		{
		system("CLS");
		*nCash = *nCash + nLavenderAve;
		*nLavenderDrops = *nLavenderDrops - 1;
		bSell=1;
		}
		else
		printf("Not enough oil\n");
	}
	
	if(SellOption == 3)
	{
		if (*nRosemaryDrops >=1)
		{
		system("CLS");
		*nCash = *nCash + nRosemaryAve;
		*nRosemaryDrops = *nRosemaryDrops - 1 ;
		bSell=1;
		}
		else
		printf("Not enough oil\n");
	}
	
	if(SellOption == 4)
	{
		if (*nMintDrops >=1)
		{
		system("CLS");
		*nCash = *nCash + nMintAve;
		*nMintDrops = *nMintDrops - 1;
		bSell=1;
		}
		else
		printf("Not enough oil\n");
	}
	
	if(SellOption == 5)
	{
		if (*nClearMindsInv >= 1)
		{
		system("CLS");
		*nCash = *nCash + nClearMinds;
		*nClearMindsInv = *nClearMindsInv - 1;
		bSell=1;
		}
		else
		printf("Not enough oil\n");
	}
	
	if(SellOption == 6)
	{
		if (*nEnergyBoosterInv >=1)
		{
		system("CLS");
		*nCash = *nCash + nEnergyBooster;
		*nEnergyBoosterInv = *nEnergyBoosterInv - 1;
		bSell=1;
		}
		else
		printf("Not enough oil\n");
	}
	
	if(SellOption == 7)
	{
		if (*nCalmingInv >=1)
		{
		system("CLS");
		*nCash = *nCash + nCalming;
		*nCalmingInv = *nCalmingInv - 1;
		bSell=1;
		}
		else
		printf("Not enough oil\n");
	}
	
	if(SellOption == 0)
	{
		bSell=1;
		system("CLS");
	}
	}
	bSell=0;	
}

/*
Description: displays make options, updates essential oil and diffuser oil for every transaction. updates cash.
Parameters: 
int makeClearMinds - boolean value for invalid clearminds input
int makeEnergyBooster - boolean value for invalid energybooster input
int makeCalming - boolean value for invalid energybooster input
int nClearMindsInv - bottles of clear minds
int nLemonDrops - drops of lemon
int nRosemaryDrops - drops of rosemary
int nMintDrops - drops of mint
int nCash - cash value
int nEnergyBoosterInv -bottles of energybooster
int nCalmingInv - bottles of calming
int nLavenderDrops - drops of lavender
int nCharge - charge of making diffuser oils
Return Value: decreases essential oil, and increases diffuser oil for each transation. decreases cash due to make charge.
*/
void updateMake (int *makeClearMinds, int *nClearMindsInv, int *nLemonDrops, int *nRosemaryDrops, int *nMintDrops, int *nCash, int *makeEnergyBooster, int *nEnergyBoosterInv, int *makeCalming, int *nCalmingInv, int *nLavenderDrops, int nCharge)
{
	int bMake = 0;
	int MakeOption;
	
	while (bMake == 0)
 	{
 	printf("Which will you make? ");
 	scanf("%d", &MakeOption);
 	
 	while (MakeOption != 1 && MakeOption !=2 && MakeOption !=3 && MakeOption !=0)
 	{
 		printf("Enter Valid Input: ");
 		scanf("%d", &MakeOption);
	 }
 	
 	if (MakeOption == 1)
 	{
 		if (*makeClearMinds)
 			printf("Invalid Input\n");
 		else{
 		system("CLS");
 		*nClearMindsInv = *nClearMindsInv + 1;
 		*nLemonDrops = *nLemonDrops -3;
 		*nRosemaryDrops = *nRosemaryDrops -2;
 		*nMintDrops = *nMintDrops -2;
 		*nCash = *nCash - nCharge;
 		bMake=1;
		}
		}

		
	if (MakeOption == 2)
	{
		if (*makeEnergyBooster)
			printf("Invalid Input\n");
		else{
		system("CLS");
		*nEnergyBoosterInv = *nEnergyBoosterInv + 1;
		*nRosemaryDrops = *nRosemaryDrops - 1;
		*nMintDrops = *nMintDrops - 1;
		*nLemonDrops = *nLemonDrops - 1;
		*nCash = *nCash - nCharge;
		bMake=1;
		}
	}
	
	if (MakeOption == 3)
	{
		if (*makeCalming)
			printf("Invalid Input\n");
		else{
		system("CLS");
		*nCalmingInv = *nCalmingInv + 1;
		*nLavenderDrops = *nLavenderDrops -3;
		*nRosemaryDrops = *nRosemaryDrops -2;
		*nLemonDrops = *nLemonDrops - 1;
		*nCash = *nCash - nCharge;
		bMake=1;
	}
	}
	
	if (MakeOption == 0)
		{
			system("CLS");
			bMake=1;
		}
	}
	*makeCalming = 0;
	*makeEnergyBooster = 0;
	*makeClearMinds =0;
	bMake=0;
}

/*
Description: displays Debt options, updates debt and cash
Parameters: 
int ncash - cash value
int ndebt - debt value
Return Value: cash and debt decreases for every transaction 
*/
void updateDebt (int *nCash, int *nDebt) 
{
	int nRepay;
	
	scanf("%d", &nRepay);
	if(nRepay<=*nCash && nRepay <=*nDebt && nRepay >=0)
	{
	*nDebt = *nDebt - nRepay;
	*nCash = *nCash - nRepay;
	system ("CLS");
	}
	else 
	system ("CLS");	
}

/*
Description: displays loan options, updates loan, cash and debt
Parameters: 
int nCash - cash value
int nLoan - loan value
int nDebt -  debt value
Return Value: increases cash and debt, and decreases loan.
*/
void updateLoan (int *nCash, int *nLoan, int *nDebt)
{
	int nWithdraw;
	
	scanf("%d", &nWithdraw);	
	if(nWithdraw>=0 && nWithdraw<=*nLoan)
	{			
	*nCash = *nCash + nWithdraw;
	*nLoan = *nLoan - nWithdraw;
	*nDebt = *nDebt + nWithdraw * 1.10;
	system("CLS");
	}
	else
	system ("CLS");		
}

/*
Description: displays travel options, updates diffuser oil make charge and updates a travel loop boolean.
Parameters: 
int TravelOption - city where the player is 
int inManila - boolean for manila input
int nCharge - charge for making diffuser oils
int inMakati - boolean for makati input
int inAlabang - boolean for alabang input
int inQC - boolean for quezon city input
int bTravel - travel input loop boolean
Return Value: updates diffuser oil make charge and travel input loop boolean.
*/
void updateTravel (int TravelOption, int inManila, int *nCharge, int inMakati, int inAlabang, int inQC, int *bTravel)
{
		if (TravelOption == 1)
	{
		if (inManila == 1)
			printf("Invalid Input\n");
		else
		{
		*nCharge = rand()%10 +20	;
		*bTravel = 1;
		}
	}
	if (TravelOption == 2)
	{
		if (inMakati == 1)
			printf("Invalid Input\n");
		else
		{
		*nCharge = rand()%20 +80;
		*bTravel = 1;
		}
	}
	if (TravelOption == 3)
	{
		if (inAlabang == 1)
			printf("Invalid Input\n");
		else
		{
		*nCharge = rand()%20 +70;
		*bTravel = 1;
		}
	}
	if (TravelOption == 4)
	{
		if (inQC == 1)
			printf("Invalid Input\n");
		else
		{
		*nCharge = rand()%20 +40;
		*bTravel = 1;
		}
	}
}

void reset (int *nDay, int *TravelOption, int *nCash, int *nDebt, int *nCharge, int *nLoan,int *nLemonDrops,int *nLavenderDrops, int *nRosemaryDrops, int *nMintDrops, int *nClearMindsInv, int *nEnergyBoosterInv, int *nCalmingInv, int *bTravel, int *inManila, int *inMakati, int *inAlabang, int *inQC, int *makeClearMinds, int *makeEnergyBooster, int *makeCalming, int *clearMax, int *energyMax, int *calmMax) 
{
	*TravelOption =1;
	*nDay = 1;
	*nCash = 1500;
	*nDebt = 0;
	*nCharge = rand() % 20 + 10;
	*nLoan = 4000;
	 
	*nLemonDrops = 0;
	*nLavenderDrops = 0;
	*nRosemaryDrops = 0;
	*nMintDrops = 0;
	 
	*nClearMindsInv = 0;
	*nEnergyBoosterInv = 0;
	*nCalmingInv = 0;
	 
	*bTravel = 0;
	 
	*inManila = 0;
	*inMakati = 0;
	*inAlabang = 0;
	*inQC =0;
	 
	*makeClearMinds =0;
	*makeEnergyBooster =0;
	*makeCalming = 0;
	
	*clearMax = 0;
	*energyMax = 0;
	*calmMax = 0;
}

int main()
{
	int nMenu, nAction;
	//int SellOption, MakeOption;
	int TravelOption =1;
	int nDay =1;
	int nCash = 1500;
	int nDebt = 0;
	int lemonPrice, lavenderPrice, rosemaryPrice, mintPrice;
	int nCharge = rand() % 20 + 10;
	int nLoan = 4000;
	
	int nLemonAve = 0;
	int nLavenderAve = 0;
	int nRosemaryAve = 0;
	int nMintAve =0;
	
	int nLemonDrops = 0;
	int nLavenderDrops = 0;
	int nRosemaryDrops = 0;
	int nMintDrops = 0;
	
	int nClearMinds = 0;
	int nEnergyBooster = 0;
	int nCalming = 0;
	
	int nClearMindsInv = 0;
	int nEnergyBoosterInv = 0;
	int nCalmingInv = 0;
	
	int bTravel = 0;
	
	int inManila= 0;
	int inMakati= 0;
	int inAlabang = 0;
	int inQC = 0;
	
	int makeClearMinds =0;
	int makeEnergyBooster =0;
	int makeCalming = 0;
	
	int clearMax = 0;
	int energyMax = 0;
	int calmMax = 0;
	
	//int storedAveLemon = 0;
	
	while (nMenu!=3)
	{
		MainMenu();
		scanf("%d", &nMenu);
		if (nMenu == 1)
		{
			system("CLS");
			while (nDay!=16)
			{
				computeSrand(nDay);
				cityPrices(nDay, &lemonPrice, &lavenderPrice, &rosemaryPrice, &mintPrice, &nClearMinds, &nEnergyBooster, &nCalming, &nLemonAve, &nLavenderAve, &nRosemaryAve, &nMintAve, &clearMax, &energyMax, &calmMax, nLemonDrops, nRosemaryDrops, nMintDrops, nLavenderDrops);
				displayPrices(nDay, nCash, nDebt, lemonPrice, lavenderPrice, rosemaryPrice, mintPrice, nCharge, nClearMinds, nEnergyBooster, nCalming, TravelOption, nLemonAve, nLavenderAve, nRosemaryAve, nMintAve, nLemonDrops, nLavenderDrops, nRosemaryDrops, nMintDrops);
				displayEOInventory( nLemonDrops, nLavenderDrops, nRosemaryDrops, nMintDrops);
				displayDOInventory(nClearMindsInv, nEnergyBoosterInv, nCalmingInv);
				displayOperations();
				scanf("%d", &nAction);
				
				while(nAction != 1 && nAction != 2 && nAction !=3 && nAction !=4 && nAction !=5 && nAction !=6)
				{
					printf("Enter Correct Option: ");
					scanf("%d", &nAction);
				}
				
				if(nAction == 1)
				{
					system("CLS");
					displayBuy(nCash, lemonPrice, lavenderPrice, rosemaryPrice, mintPrice);
					displayEOInventory( nLemonDrops, nLavenderDrops, nRosemaryDrops, nMintDrops);
					printf("\nCash: %d\n", nCash);	
					updateBuy(lemonPrice, lavenderPrice, rosemaryPrice, mintPrice, &nLemonDrops, &nLavenderDrops, &nRosemaryDrops, &nMintDrops, &nCash);
				}
				
				if(nAction == 2)
				{
					system("CLS");
					displayEOInventory( nLemonDrops, nLavenderDrops, nRosemaryDrops, nMintDrops);
					displayDOInventory(nClearMindsInv, nEnergyBoosterInv, nCalmingInv);
					Sell(nLemonAve, nLavenderAve, nRosemaryAve, nMintAve, nClearMinds, nEnergyBooster, nCalming);		
					updateSell(&nCash, &nLemonDrops, &nLavenderDrops, &nRosemaryDrops, &nMintDrops, nLemonAve, nLavenderAve, nRosemaryAve, nMintAve, nClearMinds, nEnergyBooster, nCalming, &nClearMindsInv, &nEnergyBoosterInv, &nCalmingInv);
				}
				
				if(nAction == 3)
				{
					system("CLS");
					displayEOInventory( nLemonDrops, nLavenderDrops, nRosemaryDrops, nMintDrops);
				 	displayMake(nLemonDrops, nRosemaryDrops, nMintDrops, nLavenderDrops, clearMax, energyMax, calmMax, &makeClearMinds, &makeEnergyBooster, &makeCalming);
				 	updateMake (&makeClearMinds, &nClearMindsInv, &nLemonDrops, &nRosemaryDrops, &nMintDrops, &nCash, &makeEnergyBooster, &nEnergyBoosterInv, &makeCalming, &nCalmingInv, &nLavenderDrops, nCharge);
				}
				
				if(nAction == 4)
				{
					system("CLS");
					displayDebt(nDebt);	
					updateDebt(&nCash, &nDebt);
				}
				
				if(nAction == 5)
				{
					system("CLS");
					displayLoan(nLoan);
					updateLoan(&nCash, &nLoan, &nDebt);
				}
				
				if(nAction == 6)
				{
					system("CLS");
					displayTravel(TravelOption, &inManila, &inMakati, &inAlabang, &inQC);

					while (bTravel == 0)
					{
						printf("Where will you travel: ");
						scanf("%d", &TravelOption);
			
					while (TravelOption !=1 && TravelOption !=2 && TravelOption !=3 && TravelOption != 4)
					{
						printf("Input Correct Destination: ");
						scanf("%d", &TravelOption);
					}
						updateTravel(TravelOption, inManila, &nCharge, inMakati, inAlabang, inQC, &bTravel);
					}
					
					inManila = 0;
					inMakati = 0;
					inAlabang = 0;
					inQC = 0;
					bTravel = 0;			
					nDay++;
					system("CLS");
				}
			}
			reset (&nDay, &TravelOption, &nCash, &nDebt, &nCharge, &nLoan, &nLemonDrops, &nLavenderDrops, &nRosemaryDrops, &nMintDrops, &nClearMindsInv, &nEnergyBoosterInv, &nCalmingInv, &bTravel, &inManila, &inMakati, &inAlabang, &inQC, &makeClearMinds, &makeEnergyBooster, &makeCalming, &clearMax, &energyMax, &calmMax); 
		}
		
		else if (nMenu == 2)
		{
			system("CLS");
			printf("Feature Unavailable\n\n");
		}
		
		else if (nMenu == 3)
		printf("\nThank You for Playing!");
		
		else
		{
			system("CLS");
			printf("Invalid option\n\n");
		} 
	}
	return 0;
}
