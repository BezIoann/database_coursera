#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;
int test() {
    std::string s = "lol kek pep";
    std::string delimiter = " ";
    std::string token = s.substr(0, s.find(delimiter));
    cout << token;
    cout << "lol";
    return 0;
}