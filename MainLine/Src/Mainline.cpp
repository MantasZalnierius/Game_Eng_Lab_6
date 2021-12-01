#include "../include/LotteryProduction.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
int main()
{
    srand(static_cast<unsigned>(time(nullptr)));
	LotteryProduction lottery;
	lottery.run();
	std::cin.get();
	return 0;
}