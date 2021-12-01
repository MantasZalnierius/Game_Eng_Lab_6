#include "../include/LotteryProduction.h"
#include <iostream>
#include <tuple>
LotteryProduction::LotteryProduction()
{ 
}


void LotteryProduction::run()
{
	int NumberOfInputs = MAX_INPUTS;
	std::set<int> lotteryNumbers;
	LotteryProduction lottery;
	bool retryLottery = true;
	while(retryLottery)
	{
		std::cout << "ENTER 6 NUMBERS, ONE BY ONE, FROM RANGE 1 TO 46" << std::endl;
		while(NumberOfInputs > 0)
		{
			int input;
			std::cin >> input;
			lotteryNumbers.insert(input);
			NumberOfInputs--;
		}
		if(lottery.validateLottery(lotteryNumbers).first)
		{
			std::cout << "THIS IS A VALID LOTTERY" << std::endl;
		}
		else
		{
			std::cout << "THIS IS NOT A VALID LOTTERY" << std::endl;
		}
		std::cout << "DO YOU WANT TO ENTER ANOTHER LOTTERY (1: YES, 2 NO)" << std::endl;
		int answer;
		std::cin >> answer;
		if(answer == 1)
		{
			retryLottery = true;
			NumberOfInputs = 6;
			lotteryNumbers.clear();
			system("CLS");
		}
		else
		{
			retryLottery = false;
		}
	}
}

std::pair<bool, std::set<int>> LotteryProduction::validateLottery(std::set<int> lotteryNumber)
{
	bool isValid = false;
	if(lotteryNumber.size() == 6)
	{
		std::set<int>::iterator itr = lotteryNumber.begin();
		while (itr != lotteryNumber.end())
		{
			if(*itr >= 1 && *itr <= 46)
			{
				isValid = true;
			}
			else
			{
				isValid = false;
			}
			itr++;
		}
	}
	return std::make_pair(isValid, lotteryNumber);
}

