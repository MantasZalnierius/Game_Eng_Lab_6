#include <TestFixture.h>
#include <TestAssert.h>
#include <TestCase.h>
#include <TestSuite.h>
#include <TestCaller.h>
#include "../include/colored_cout.h"
#include <queue>
#include <set>
class LotteryProductionTest : public CppUnit::TestFixture
{
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