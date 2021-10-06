#include <iostream>
#include <string>
#include <map>
#include <cctype>

std::string duplicate_encoderMY(const std::string &word)
{
    std::string s = "";
    std::map<char, int> table;
    std::string result = "";

    for (size_t i = 0; i < word.length(); ++i)
        s += tolower(word[i]);

    for (size_t i = 0; i < s.length(); ++i)
        table[s[i]]++;

    for (size_t i = 0; i < s.length(); ++i)
    {
        if (table[s[i]] == 1)
            result += "(";
        else
            result += ")";
    }

    return result;
}

// std::string duplicate_encoderNORMAL(const std::string &word)
// {
//     std::map<char, int> table;
//     for (auto x : word)
//         table[std::tolower(x)]++;
//     std::string result;
//     for (auto x : word)
//         result += (table[std::tolower(x)] == 1) ? "(" : ")";
//     return result;
// }

int main()
{
    std::string input = "Success";
    // std::cin >> input;

    std::cout << input + " - " + duplicate_encoderMY(input) << std::endl;

    return 0;
}

// "din" = > "((("
//           "recede" = > "()()()"
//                        "Success" = > ")())())"
//                                      "(( @" = > "))(("