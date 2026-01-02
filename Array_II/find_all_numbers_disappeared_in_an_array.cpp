/*Q3. Find All Numbers Disappeared in an Array

Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
Example 2:

Input: nums = [1,1]
Output: [2]
 

Constraints:

n == nums.length
1 <= n <= 105
1 <= nums[i] <= n*/


#include <unordered_map>
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr;
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        for(int i=1;i<nums.size()+1;i++)
        {
            if(freq[i]==0){
                arr.push_back(i);
            }
        }
        return arr;
    }

};
