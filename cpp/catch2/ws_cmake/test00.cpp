#include "catch2/catch.hpp"
int Factorial(int number)
{
    return number <= 1 ? 1 : Factorial(number - 1) * number;
}
TEST_CASE("Factorials are computed", "[factorial]")
{
    REQUIRE(Factorial(1) == 1);
    REQUIRE(Factorial(2) == 2);
    REQUIRE(Factorial(3) == 6);
    REQUIRE(Factorial(10) == 3628800);
}
