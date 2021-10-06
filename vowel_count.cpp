#include <iostream>
#include <string>

// int getCountNORMAL(const string& inputStr){
//   return count_if(inputStr.begin(), inputStr.end(), [](const char ch) {
//       switch(ch) {
//           case 'a':
//           case 'e':
//           case 'i':
//           case 'o':
//           case 'u':
//               return true;
//           default:
//               return false;} 
//      });
// }

int getCountMY(const std::string &inputStr)
{
    int num_vowels = 0;
    for (const char ch : inputStr)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            num_vowels++;
    }
    return num_vowels;
}

int main()
{
    std::string word = "abracadabra";
    std::cout << word + " - " << getCountMY(word) << std::endl;
    return 0;
}
