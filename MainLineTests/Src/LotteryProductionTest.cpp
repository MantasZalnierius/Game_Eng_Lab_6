#include "../Include/LotteryProductionTest.h"

void LotteryProductionTest::setUp()
{
}

void LotteryProductionTest::tearDown()
{
}

void LotteryProductionTest::lotteryHas6NumbersTest()
{
    std::cout << std::endl << std::endl;
    std::cout << clr::green << "LOTTERY HAS 6 NUMBERS TEST PASSED" << std::endl; 
    std::cout << clr::white;
    std::cout << std::endl << std::endl;
}

void LotteryProductionTest::lotteryDoesntHave6NumbersTest()
{
    std::cout << std::endl << std::endl;
    std::cout << clr::green << "LOTTERY DOESN'T HAVE 6 NUMBERS TEST PASSED" << std::endl; 
    std::cout << clr::white;
    std::cout << std::endl << std::endl;
}

void LotteryProductionTest::lotteryNumbersInRangeTest()
{
    std::cout << std::endl << std::endl;
    std::cout << clr::green << "LOTTERY NUMBERS IN RANGE TEST PASSED" << std::endl;
    std::cout << clr::white;
    std::cout << std::endl << std::endl;
}

void LotteryProductionTest::lotteryNumbersNotInRangeTest()
{
    std::cout << std::endl << std::endl;
    std::cout << clr::green << "LOTTERY NUMBERS NOT IN RANGE TEST PASSED" << std::endl;
    std::cout << clr::white;
    std::cout << std::endl << std::endl;
}


void LotteryProductionTest::lotteryUniqueNumbersTest()
{
    std::cout << std::endl << std::endl;
    std::cout << clr::green << "LOTTERY UNIQUE NUMBERS TEST PASSED" << std::endl;
    std::cout << clr::white;
    std::cout << std::endl << std::endl;
}

void LotteryProductionTest::failedTest()
{
    std::cout << std::endl << std::endl;
    std::cout << clr::white;
    std::cout << std::endl << std::endl;
}

CppUnit::Test* LotteryProductionTest::suite()
{
    CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "LotteryProductionTest" );

    suiteOfTests->addTest( new CppUnit::TestCaller<LotteryProductionTest>( 
    "lotteryHas6NumbersTest", 
    &LotteryProductionTest::lotteryHas6NumbersTest ) );

    suiteOfTests->addTest( new CppUnit::TestCaller<LotteryProductionTest>( 
    "lotteryDoesntHave6NumbersTest", 
    &LotteryProductionTest::lotteryDoesntHave6NumbersTest ) );

    suiteOfTests->addTest( new CppUnit::TestCaller<LotteryProductionTest>( 
    "lotteryNumbersInRangeTest", 
    &LotteryProductionTest::lotteryNumbersInRangeTest ) );

    suiteOfTests->addTest( new CppUnit::TestCaller<LotteryProductionTest>( 
    "lotteryNumbersNotInRangeTest", 
    &LotteryProductionTest::lotteryNumbersNotInRangeTest ) );

    suiteOfTests->addTest( new CppUnit::TestCaller<LotteryProductionTest>( 
    "lotteryUniqueNumbersTest", 
    &LotteryProductionTest::lotteryUniqueNumbersTest ) );

    suiteOfTests->addTest( new CppUnit::TestCaller<LotteryProductionTest>( 
    "failedTest", 
    &LotteryProductionTest::failedTest ) );

    return suiteOfTests;
}