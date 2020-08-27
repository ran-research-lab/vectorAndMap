#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() 
#include "catch.hpp"
#include <vector>
#include <map>

using namespace std;


int sumByStride( const vector<int> &v, int stride ) {
    return 0;
}

string histogram( const vector<string> &v) {
    string st = "";
    return st;
}

TEST_CASE( "Testing the sumByStride() function", "[sumByStride]" ) {
    //REQUIRE( sumByStride(vector<int> {10,20,30,40,50},2)  == 90);
    //REQUIRE( sumByStride(vector<int> {10,20,30,40,50},3)  == 50);
}

TEST_CASE( "Testing the histogram() function", "[histogram]" ) {
    //string tmp = histogram(vector<string> {"foca", "leon", "zorra", "foca", "perro", "perro", "perro"});
    //REQUIRE( (tmp == "[perro:3][foca:2][zorra:1][leon:1]" ||   
              tmp == "[perro:3][foca:2][leon:1][zorra:1]") );
}
