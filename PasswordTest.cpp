/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}
TEST(PasswordTest, short_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Yo");
	ASSERT_EQ(1, actual);
}
TEST(PasswordTest, long_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("AAAAAAAAAAGDHJFDGS");
	ASSERT_EQ(10, actual);
}
TEST(PasswordTest, no_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("");
	ASSERT_EQ(1, actual);
}
TEST(PasswordTest, mixed_case_password)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("wAwW");
	ASSERT_EQ(1, actual);
}
TEST(PasswordTest, lower_case_password)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("wooo");
	ASSERT_EQ(0, actual);
}
TEST(PasswordTest, upper_case_password)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("AAAAAA");
	ASSERT_EQ(0, actual);
}
