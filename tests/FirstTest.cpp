#include "CppUTest/TestHarness.h"

TEST_GROUP(FirstTestGroup)
{

    void setup()
    {
    }

    void teardown()
    {
    }
};

TEST(FirstTestGroup, FirstTest)
{
    CHECK_TRUE(true);
}