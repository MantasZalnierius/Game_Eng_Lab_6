#include <TestFixture.h>
#include <TestAssert.h>
#include <TestCase.h>
#include <TestSuite.h>
#include <TestCaller.h>
#include "../include/colored_cout.h"
#include "../../MainLine/Include/LotteryProduction.h"
#include <queue>
#include <set>
class LotteryProductionTest : public CppUnit::TestFixture
{
private:
    LotteryProduction* m_lottery;
    std::set<int> m_lotteryNumbers;
    const int m_MAX_LOTTERY_NUMBERS{6};
public:
    static CppUnit::Test* suite();
    void setUp();
    void tearDown();
    void lotteryHas6NumbersTest();
    void lotteryDoesntHave6NumbersTest();
    void lotteryNumbersNotInRangeTest();
    void lotteryNumbersInRangeTest();
    void lotteryUniqueNumbersTest();
    void failedTest();
};