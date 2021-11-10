#include <iostream>
#include <algorithm>
#include <vector>

std::string tickets(const std::vector<int> &peopleInLine){
  int count[2] = {0,0};
  for(auto v: peopleInLine) {
    if(v == 25) count[0]++;
    if(v == 50) {count[1]++; count[0]--;}
    if(v == 100) {count[0]--; count[1]>0? count[1]-- : count[0]-=2;}
    if(count[0]<0||count[1]<0) return "NO";
  }
  return "YES";
}

int main(int argc, char const *argv[])
{
    // std::vector<int> input = {25, 25, 50, 50};
    std::vector<int> input = {100, 50, 25, 25, 25};
    std::cout << "Inputing vector - ";
    for (const int i : input)
        std::cout << i << " ";
    std::cout << "\n"
              << "Result - " << tickets(input) << std::endl;
    return 0;
}
