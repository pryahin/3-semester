#define CATCH_CONFIG_MAIN
#include "../include/check.h"
#include "catch.hpp"

TEST_CASE( "Even parity", "[number]" ) {
    REQUIRE( check(2) == true );
    REQUIRE( check(3) == false );
}