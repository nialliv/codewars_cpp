#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string makeUpperCase(string input_str) {
  string result;

  transform(input_str.begin(), input_str.end(), input_str.begin(), ::toupper);

  return input_str;
}

int main() {
  cout << makeUpperCase("hello");

  return 0;
}