#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() 
#include "catch_amalgamated.hpp"
#include <vector>
#include <map>

using namespace std;


int countEqual( const vector<int>::iterator &from, const vector<int>::iterator &to, int value ) {
    return -1;
}

string histogram( const vector<string> &v) {
    string st = "";
    return st;
}

TEST_CASE( "Testing the countEqual() function", "[countEqual]" ) {
//    vector<int> v {10, 20, 30, 20, 10};
//    REQUIRE(countEqual(v.begin() + 1, v.begin() + 3, 10) == 0);
//    REQUIRE(countEqual(v.begin(), v.begin() + 3, 10) == 1);
}

TEST_CASE( "Testing the histogram() function", "[histogram]" ) {
    //string tmp = histogram(vector<string> {"foca", "leon", "zorra", "foca", "perro", "perro", "perro"});
    //REQUIRE( (tmp == "[perro:3][foca:2][zorra:1][leon:1]" ||   
    //          tmp == "[perro:3][foca:2][leon:1][zorra:1]") );
}
