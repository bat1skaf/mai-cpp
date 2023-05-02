#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> nums { "one", "two", "three", "four", "five" };
    int a = 0;
    while(a < nums.size()) {
        if(a != 0) {
            std::cout << ", ";
        }
        std::cout << nums[a];
        a++;
    }
    return 0;
}
