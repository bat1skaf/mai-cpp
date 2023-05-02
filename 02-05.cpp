#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> nums { "one", "two", "three", "four", "five" };
    for(int i = 0; i < nums.size(); i++) {
        if (i != 0) {
            std::cout << ", ";
        }
        std::cout << nums[i];
    }
    return 0;
}
