//
// Created by Joao Henriques David Dos Reis on 05/11/2018.
//

#include "catch.hpp"
#include "Part1.h"

TEST_CASE("Multiples 3 5", "[Problem1]") {

    SECTION("below 10 gives 32") {
        REQUIRE(multiples_3_and_5(10) == 23);
    }

    SECTION("below 15 gives 45") {
        REQUIRE(multiples_3_and_5(15) == 45);
    }

    SECTION("below 50 gives 543") {
        REQUIRE(multiples_3_and_5(50) == 543);
    }

    SECTION("below 1000 gives 233168") {
        REQUIRE(multiples_3_and_5(1000) == 233168);
    }
}


TEST_CASE("Fibonacci", "[Problem2]") {

    SECTION("fib of 0 is 0"){
        REQUIRE(fibonacci(0) == 0);
    }

    SECTION("fib of 1 is 1"){
        REQUIRE(fibonacci(1) == 1);
    }

    SECTION("fib of 2 is 1"){
        REQUIRE(fibonacci(2) == 1);
    }

    SECTION("fib of 6 is 13"){
        REQUIRE(fibonacci(6) == 8);
    }

    SECTION("fib of 8 is 21"){
        REQUIRE(fibonacci(8) == 21);
    }

    SECTION("fib of 12 is 144"){
        REQUIRE(fibonacci(12) == 144);
    }

    SECTION("sum of even fib 1 is 1"){
        REQUIRE(sum_even_fib(1) == 1);
    }

    SECTION("sum of even fib 3 is 2"){
        REQUIRE(sum_even_fib(3) == 2);
    }

    SECTION("sum of even fib 7 is 23"){
        REQUIRE(sum_even_fib(7) == 23);
    }

    SECTION("sum of even fib 10 is 99"){
        REQUIRE(sum_even_fib(10) == 99);
    }

    SECTION("sum of even fib 11 is 188"){
        REQUIRE(sum_even_fib(11) == 188);
    }
}

// BDD implementation

SCENARIO("Fibonacci max limit", "[Problem2]") {

    GIVEN("A limit for fibonacci result") {

        WHEN("limit is 1")
            THEN("the result is 0")
                REQUIRE(sum_even_fib_max(1) == 0);

        WHEN("limit is 2")
            THEN("the result is 2")
                REQUIRE(sum_even_fib_max(2) == 2);

        WHEN("limit is 10")
            THEN("the result is 23")
                REQUIRE(sum_even_fib_max(10) == 10);

        WHEN("limit is 22")
            THEN("the result is 44")
                REQUIRE(sum_even_fib_max(22) == 44);

        WHEN("limit is 4 million")
            THEN("the result is 4613732")
                REQUIRE(sum_even_fib_max(4000000) == 4613732);

        WHEN("limit is 10 million")
            THEN("the result is 19544084")
                REQUIRE(sum_even_fib_max(10000000) == 19544084);
    }
}



