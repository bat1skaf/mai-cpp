#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int longest = 0;
    int current = 0;
    vector<string> nums{ "onedrh", "twodhgdrg", "thfgdfgbdree", "fourjdfhbkfdjbhdfhbjfd", "fivihgfihfghifgiheibhsfdihfx" };
    int sizz = nums[longest].length();
    for(string v : nums) {
        int sizz1 = v.length();
        if(sizz1 > sizz) {
            longest = current;
        }
        current = current + 1;
    }
    cout << longest;
}
