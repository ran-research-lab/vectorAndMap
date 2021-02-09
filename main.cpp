#include <vector>
#include <map>
#include <string>

// Variables and macros for assertions, DO NOT CHANGE ****
int totalAssertions = 0;
int passedAssertions  = 0;
#define expect( chk )  \
    totalAssertions++; \
    if (!(chk)) \
        printf("Assertion (%s) failed %s at line %d \n", #chk, __FILE__,__LINE__); \
    else { \
        printf("Passed line %d \n", __LINE__); \
        passedAssertions++; \
    }
#define assertionReport() \
     printf("Passed %d of %d assertions\n",passedAssertions,totalAssertions);
//*******************************************************


using namespace std;


int countEqual( const vector<int>::iterator &from, const vector<int>::iterator &to, int value ) {
    return -1;
}

string histogram( const vector<string> &v) {
    string st = "";
    return st;
}


int main() {

    // Pruebas para countEqual
    vector<int> v {10, 20, 30, 20, 10};
    expect(countEqual(v.begin() + 1, v.begin() + 3, 10) == 0);
    expect(countEqual(v.begin(), v.begin() + 3, 10) == 1);

    // Pruebas para histogram
    string tmp = histogram(vector<string> {"foca", "leon", "zorra",
                                           "foca", "perro", "perro", "perro"});
    expect ( (tmp == "[perro:3][foca:2][zorra:1][leon:1]" ||
              tmp == "[perro:3][foca:2][leon:1][zorra:1]") );

    assertionReport();
}

