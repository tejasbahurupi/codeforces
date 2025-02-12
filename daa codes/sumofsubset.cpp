#include <iostream>
#include <vector>
using namespace std;

// Function to print a subset
void printSubset(const vector<int> &subset)
{
    for (int val : subset)
        cout << val << " ";
    cout << endl;
}

// Backtracking function to find subsets that sum to the target
void subsetSum(vector<int> &nums, vector<int> &subset, int index, int currentSum, int target)
{
    // If the current sum is equal to target, print the subset
    if (currentSum == target)
    {
        printSubset(subset);
        return;
    }

    // If the current sum exceeds the target or we've checked all elements, return
    if (currentSum > target || index == nums.size())
        return;

    // Include the current element in the subset
    subset.push_back(nums[index]);
    subsetSum(nums, subset, index + 1, currentSum + nums[index], target);

    // Exclude the current element from the subset (backtrack)
    subset.pop_back();
    subsetSum(nums, subset, index + 1, currentSum, target);
}

// Driver code
int main()
{
    vector<int> nums = {10, 7, 5, 18, 12, 20, 15}; // Example set
    int target = 35;                               // Target sum
    cout << "Subsets that sum to " << target << " are:\n";
    vector<int> subset;
    subsetSum(nums, subset, 0, 0, target);
    return 0;
}
