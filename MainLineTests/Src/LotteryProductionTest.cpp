#include "../Include/LotteryProductionTest.h"

void LotteryProductionTest::setUp()
{
    m_lottery = new LotteryProduction();
}

void LotteryProductionTest::tearDown()
{
    delete m_lottery;
}

void LotteryProductionTest::lotteryHas6NumbersTest()
{
    std::cout << std::endl << std::endl;

    m_lotteryNumbers = {1, 2, 3, 5, 7, 24};
    std::pair<bool, std::set<int>> lotteryPair = m_lottery->validateLottery(m_lotteryNumbers);
    bool lotteryIsValid = lotteryPair.first;
    m_lotteryNumbers = lotteryPair.second;


    CPPUNIT_ASSERT(m_lotteryNumbers.size() == m_MAX_LOTTERY_NUMBERS);
    CPPUNIT_ASSERT(lotteryIsValid == true);

    std::cout << clr::green << "LOTTERY HAS 6 NUMBERS TEST PASSED" << std::endl; 
    std::cout << clr::white;
    std::cout << std::endl << std::endl;
}

void LotteryProductionTest::lotteryDoesntHave6NumbersTest()
{
    std::cout << std::endl << std::endl;

    m_lotteryNumbers = {1, 2, 3, 5, 7};
    std::pair<bool, std::set<int>> lotteryPair = m_lottery->validateLottery(m_lotteryNumbers);
    bool lotteryIsValid = lotteryPair.first;
    m_lotteryNumbers = lotteryPair.second;


    CPPUNIT_ASSERT(m_lotteryNumbers.size() != m_MAX_LOTTERY_NUMBERS);
    CPPUNIT_ASSERT(lotteryIsValid == false);

    std::cout << std::endl << std::endl;
    std::cout << clr::green << "LOTTERY DOESN'T HAVE 6 NUMBERS TEST PASSED" << std::endl; 
    std::cout << clr::white;
    std::cout << std::endl << std::endl;
}

void LotteryProductionTest::lotteryNumbersInRangeTest()
{
    std::cout << std::endl << std::endl;

    m_lotteryNumbers = {1, 2, 3, 5, 7, 24};
    std::pair<bool, std::set<int>> lotteryPair = m_lottery->validateLottery(m_lotteryNumbers);
    bool lotteryIsValid = lotteryPair.first;
    m_lotteryNumbers = lotteryPair.second;
    std::set<int>::iterator itr;


    for (itr = m_lotteryNumbers.begin(); itr == m_lotteryNumbers.end(); itr++)
    {
        CPPUNIT_ASSERT(*itr >= 1 && *itr <= 46);
    }
    CPPUNIT_ASSERT(lotteryIsValid == true);


    std::cout << clr::green << "LOTTERY NUMBERS IN RANGE TEST PASSED" << std::endl;
    std::cout << clr::white;
    std::cout << std::endl << std::endl;
}

void LotteryProductionTest::lotteryNumbersNotInRangeTest()
{
    std::cout << std::endl << std::endl;

    m_lotteryNumbers = {101, 99, 88, 77, 66, 55};
    std::pair<bool, std::set<int>> lotteryPair = m_lottery->validateLottery(m_lotteryNumbers);
    bool lotteryIsValid = lotteryPair.first;
    m_lotteryNumbers = lotteryPair.second;
    std::set<int>::iterator itr;


    for (itr = m_lotteryNumbers.begin(); itr == m_lotteryNumbers.end(); itr++)
    {
        CPPUNIT_ASSERT(!*itr >= 1 && !*itr <= 46);
    }
    CPPUNIT_ASSERT(lotteryIsValid == false);


    std::cout << std::endl << std::endl;
    std::cout << clr::green << "LOTTERY NUMBERS NOT IN RANGE TEST PASSED" << std::endl;
    std::cout << clr::white;
    std::cout << std::endl << std::endl;
}


void LotteryProductionTest::lotteryUniqueNumbersTest()
{
    std::cout << std::endl << std::endl;

    // Sets by nature have unique values, so if the set size is equal to the 
    // the max size of the lottery, then that means that lottery set unique values for all 6 numbers.
    m_lotteryNumbers = {25, 1, 5, 9, 7, 12};
    std::pair<bool, std::set<int>> lotteryPair = m_lottery->validateLottery(m_lotteryNumbers);
    bool lotteryIsValid = lotteryPair.first;
    m_lotteryNumbers = lotteryPair.second;
    CPPUNIT_ASSERT(m_lotteryNumbers.size() == m_MAX_LOTTERY_NUMBERS);
    CPPUNIT_ASSERT(lotteryIsValid == true);


    std::cout << clr::green << "LOTTERY UNIQUE NUMBERS TEST PASSED" << std::endl;
    std::cout << clr::white;
    std::cout << std::endl << std::endl;
}

void LotteryProductionTest::lotteryNoUnqiueNumbersTest()
{
    std::cout << std::endl << std::endl;

    m_lotteryNumbers = {25, 1, 5, 12, 12, 12};
    std::pair<bool, std::set<int>> lotteryPair = m_lottery->validateLottery(m_lotteryNumbers);
    bool lotteryIsValid = lotteryPair.first;
    m_lotteryNumbers = lotteryPair.second;
    CPPUNIT_ASSERT(m_lotteryNumbers.size() != m_MAX_LOTTERY_NUMBERS);
    CPPUNIT_ASSERT(m_lotteryNumbers.size() == 4);
    CPPUNIT_ASSERT(lotteryIsValid == false);


    std::cout << clr::green << "LOTTERY No UNIQUE NUMBERS TEST PASSED" << std::endl;
    std::cout << clr::white;
    std::cout << std::endl << std::endl;
}


void LotteryProductionTest::failedTest()
{
    // This test is just to showcase what appears in the console, when a test assertion has failed.
    m_lotteryNumbers = {25, 1, 5, 7, 6, 4};

    CPPUNIT_ASSERT(m_lottery->validateLottery(m_lotteryNumbers).second.size() != m_MAX_LOTTERY_NUMBERS);

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
    "lotteryNoUnqiueNumbersTest", 
    &LotteryProductionTest::lotteryNoUnqiueNumbersTest ) );

    suiteOfTests->addTest( new CppUnit::TestCaller<LotteryProductionTest>( 
    "failedTest", 
    &LotteryProductionTest::failedTest ) );

    return suiteOfTests;
}