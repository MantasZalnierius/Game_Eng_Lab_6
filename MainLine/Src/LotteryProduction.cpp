#include "../include/LotteryProduction.h"
#include <iostream>
#include <tuple>
LotteryProduction::LotteryProduction()
{ 
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

