// DistTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


// BowlingGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "gtest\gtest.h"
#include "gmock\gmock.h"

class C {
public:
    virtual int foo() {
        return 0;
    }
};

class MockC :public C {
public:
    MOCK_METHOD0(foo, int());
};

int bar(C& c) {
    return c.foo();
}
TEST(GMockTest, test) {
    using ::testing::Return;
    MockC mock_c;
    EXPECT_CALL(mock_c, foo())
        .Times(3)
        .WillRepeatedly(Return(10));

    EXPECT_EQ(10, bar(mock_c));
    EXPECT_EQ(10, bar(mock_c));
    EXPECT_EQ(10, bar(mock_c));
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    std::getchar(); // keep console window open until Return keystroke
    return 1;
}


