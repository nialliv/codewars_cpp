#include <string>
#include <iostream>

using namespace std;

string number_to_string(int num)
{
  // your code here
  return to_string(num);
}

int main()
{
  cout << number_to_string(4 - 3) << endl;
  cout << number_to_string(1) << endl;
  cout << number_to_string(-5) << endl;
  return 0;
}