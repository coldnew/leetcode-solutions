#include <gtest/gtest.h>

#include <thread>
#include "1114-Print-In-Order.cpp"

TEST(PrintInOrderTest, Foo) {
  {
    testing::internal::CaptureStdout();

    Foo foo;
    std::thread t1([&foo]() { foo.first([]() { std::cout << "first"; }); });
    std::thread t2([&foo]() { foo.second([]() { std::cout << "second"; }); });
    std::thread t3([&foo]() { foo.third([]() { std::cout << "third"; }); });
    t1.join();
    t2.join();
    t3.join();

    EXPECT_EQ("firstsecondthird", testing::internal::GetCapturedStdout());
  }

  {
    testing::internal::CaptureStdout();

    Foo foo;
    std::thread t3([&foo]() { foo.third([]() { std::cout << "third"; }); });
    std::thread t2([&foo]() { foo.second([]() { std::cout << "second"; }); });
    std::thread t1([&foo]() { foo.first([]() { std::cout << "first"; }); });
    t3.join();
    t2.join();
    t1.join();

    EXPECT_EQ("firstsecondthird", testing::internal::GetCapturedStdout());
  }
}
