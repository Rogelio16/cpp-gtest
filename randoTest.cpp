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
	ASSERT_TRUE( rando.shouldWorry(true,false,false) );
	ASSERT_FALSE( rando.shouldWorry(false,false,false) );
	ASSERT_FALSE( rando.shouldWorry(true,true,false) );
}

TEST(RandoTest, checkIfPrimeNumbers) 
{
	Rando rando;
	ASSERT_TRUE( rando.isPrime(1));
	ASSERT_TRUE( rando.isPrime(11));
	ASSERT_TRUE( rando.isPrime(5));
	ASSERT_FALSE( rando.isPrime(39));
	ASSERT_FALSE( rando.isPrime(20));
	ASSERT_FALSE( rando.isPrime(9));
	ASSERT_FALSE( rando.isPrime(25));
}

