#include <iostream>
#include <string>
// #include <algorithm>
// #include <vector>

using namespace std;


std::string reverseString(const std::string& str) {
  return std::string(str.rbegin(), str.rend());
}


int main() {
    cout << reverseString("hello") << endl;
    return 0;
}




// My solution
// string reverseString (const string& str )
// {
//     string result;
//     vector<char> v;

//     for (const char& i : str) {
//         v.push_back(i);
//     }

//     for(int i = v.size() - 1; i >= 0; --i) {
//         result.push_back(v[i]);
//     }
//     return result;
// }