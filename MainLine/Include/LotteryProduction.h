#include <Asserter.h>
#include <set>
#include <utility>
class LotteryProduction
{
public:
    LotteryProduction();
	std::pair<bool, std::set<int>> validateLottery(std::set<int> lotteryNumber);
private:
    int m_numberOfRandomNumbers;
};