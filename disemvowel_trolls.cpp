#include <iostream>
#include <string>
#include <regex>
using namespace std;

std::string disemvowel(std::string str)
{
    std::regex vowels("[aeiouAEIOU]");
    return std::regex_replace(str, vowels, "");
}

int main(int argc, char const *argv[])
{
    cout << disemvowel("This website is for losers LOL!") << endl;
    return 0;
}

// My solution
// std::string disemvowel(const std::string &str)
// {
//     string result;
//     for (const char &i : str)
//     {
//         if (
//             i != 'a' && i != 'A' &&
//             i != 'e' && i != 'E' &&
//             i != 'u' && i != 'U' &&
//             i != 'o' && i != 'O' &&
//             i != 'i' && i != 'I' )
//         {
//             result.push_back(i);
//         }
//     }
//     return result;
// }