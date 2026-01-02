"""Q4. Set Mismatch
You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.
You are given an integer array nums representing the data status of this set after the error.
Find the number that occurs twice and the number that is missing and return them in the form of an array.

Example 1:

Input: nums = [1,2,2,4]
Output: [2,3]
Example 2:

Input: nums = [1,1]
Output: [1,2]
 

Constraints:

2 <= nums.length <= 104
1 <= nums[i] <= 104


"""




#include <unordered_map>

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> arr;
        int summ=0;
        int dup=0;
        for(int i:nums){
            freq[i]++;
            if (freq[i]==2){
                arr.push_back(i);
                dup=i;
            }
            summ+=i;
        }
        int n=nums.size();
        int natural_sum=((n)*(n+1))/2;
        arr.push_back(natural_sum-summ+dup);
        return arr;
    }
};
