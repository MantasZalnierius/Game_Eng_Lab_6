#include <Asserter.h>
#include <set>
#include <utility>
class LotteryProduction
{
public:
    LotteryProduction();
    void run();
	std::pair<bool, std::set<int>> validateLottery(std::set<int> lotteryNumber);
private:
    int m_numberOfRandomNumbers;
    const int MAX_INPUTS{6};
};