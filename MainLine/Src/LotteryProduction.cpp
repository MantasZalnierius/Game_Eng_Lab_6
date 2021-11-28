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
		isValid = true;
	}
	return std::make_pair(isValid, lotteryNumber);
}

