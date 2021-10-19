// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"

#include "student.hpp" // student implementations

// =====================
// tests for exercise 1
// ---------------------

TEST_CASE("Ex1", "[example]") //Exercise 1, tagged with example
{
    
    //TODO: Set up tests
    REQUIRE(replace(function()==Approx(5)); //within 1 of 5
    REQUIRE(replace(function()==Approx(3).margin(5)); //within 5 units of 3
    
    //Checks keeps running if fails
    CHECK(function()==0)

    //Checks if a function throws an exception
    REQUIRE_THROWS_WITH( openThePodBayDoors(), Contains( "afraid" ) && Contains( "can't do that" ) );
        
}

// Notes: 
// can use variables and libraries
// can use logic operators and loops


