#include <iostream>
#include <vector>
using namespace std;
//FInding all duplicates elements that appears twice in an Array and retrun an Array of that elements(Duplicate Elements)
vector<int> findDuplicates(vector<int>& nums) {
    vector<int> result;
    
    // Traverse the input array
    for (int i = 0; i < nums.size(); i++) {
        // Get the absolute value of the current number
        int num = abs(nums[i]);
        
        // If the value at index num-1 is negative, it means we've seen this number before
        // Add it to the result
        if (nums[num - 1] < 0) {
            result.push_back(num);
        } else {
            // Otherwise, mark it as seen by making the value at index num-1 negative
            nums[num - 1] = -nums[num - 1];
        }
    }
    
    return result;
}

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 1, 1};
    vector<int> duplicates = findDuplicates(nums);
    
    cout << "Duplicate numbers are: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
