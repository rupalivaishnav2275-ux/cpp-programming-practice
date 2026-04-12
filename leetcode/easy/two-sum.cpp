// 🔹 Problem: Two Sum
// 🔹 Platform: LeetCode
// 🔹 Date: 16 March 2026
// 🔹 Language: C++
// 🔹 Tags: Array, Hash Map
// 🔹 Approach: One-pass Hash Map (Complement Search)
// ======================================================

/*
Problem:
Given an array of integers and a target,
return indices of two numbers such that they add up to the target.

Constraints:
- Exactly one solution exists
- Same element cannot be used twice
*/

// Intuition:
// Instead of checking every pair (O(n^2)),
// We use a hashmap to store visited elements.
// This allows us to find the complement quickly.

// Approach:
// Traverse array once while storing values in a hashmap.
// For each element, check if its complement (target - value)
// already exists in the map.

// Complexity:
// Time: O(n)
// Space: O(n)

// Edge Case:
// Works with negative numbers and duplicate values

// SOLUTION-
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {}; // fallback (though guaranteed one solution)
    }
};

