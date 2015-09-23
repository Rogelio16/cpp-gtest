/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(RandoTest, oneChildSmiles)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,false,false) );
}

TEST(RandoTest, twoChildrenSmile)
{
	Rando rando;
	ASSERT_FALSE( rando.shouldWorry(true,true,false) );
}

TEST(RandoTest, noChildrenSmile)
{
	Rando rando;
	ASSERT_FALSE( rando.shouldWorry(false,false,false) );
}

TEST(RandoTest, twoIsPrime)
{
	Rando rando;
	ASSERT_TRUE( rando.isPrime(2) );
}

TEST(RandoTest, tenIsNotPrime)
{
	Rando rando;
	ASSERT_FALSE( rando.isPrime(10) );	
}

TEST(RandoTest, thirtynineIsNotPrime)
{
	Rando rando;
	ASSERT_FALSE( rando.isPrime(39) );
}

TEST(RandoTest, thirteenIsPrime)
{
	Rando rando;
	ASSERT_TRUE( rando.isPrime(13) );
}

TEST(RandoTest, twoIsDivisibleByTwo)
{
	Rando rando;
	ASSERT_TRUE( rando.isDivisbleBy(2,2) );
}

TEST(RandoTest, fiveIsNotDivisbleBy10)
{
	Rando rando;
	ASSERT_FALSE( rando.isDivisbleBy(10,5) );
}

TEST(RandoTest, twoIsLessThanThree)
{
	Rando rando;
	ASSERT_EQ( (rando.nearestToZero(2,3)),2 );
}

TEST(RandoTest, chooseThreeNotZero)
{
	Rando rando;
	ASSERT_EQ( (rando.nearestToZero(0,10)),10 );
}

TEST(RandoTest, chooseTwoNotZero)
{
	Rando rando;
	ASSERT_EQ( (rando.nearestToZero(2,0)),2 );
}

TEST(RandoTest, fiveIsLessThanTen)
{
	Rando rando;
	ASSERT_EQ( (rando.nearestToZero(10,5)),5 );
}
