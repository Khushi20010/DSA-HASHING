#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int longest = 0;

    for (int num : nums) {
        // Only start counting if it's the beginning of a sequence
        if (!numSet.count(num - 1)) {
            int current = num;
            int length = 1;

            // Count how many numbers are in the current sequence
            while (numSet.count(current + 1)) {
                current++;
                length++;
            }

            longest = max(longest, length);
        }
    }
    return longest;
}

int main() {
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    cout << "Length of longest consecutive sequence: " << longestConsecutive(arr) << endl;
    return 0;
}
