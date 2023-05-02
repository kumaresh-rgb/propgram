

#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int maxi = INT_MIN; // maximum sum

    for (int i = 0; i < n; i++) {
         int sum = 0;
        for (int j = i; j < n; j++) {
            // subarray = arr[i.....j]           
             sum += arr[j];
            //add all the elements of subarray:
         
            maxi = max(maxi, sum);
           
        }
        
    }

    return maxi;
}

int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}

// 62.7 mb
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        int cur = nums[0];
        for(int i = 1; i<n; i++)
        {
            if(cur+nums[i]<nums[i])
            {
                cur = nums[i];
                
            }
            else
            {
                cur = cur + nums[i];
            }
            ans = max(ans,cur);
            
        }
        return ans;
    }
};

// top 1.87%

class Solution {

    int maxSubArray(vector<int>& nums) {
         int maxi = nums[0]; // maximum sum
    int n= nums.size();
     
     int sum = 0;

    for (int i = 0; i < n; i++) {

        sum += nums[i];

        if (sum > maxi) {
            maxi = sum;
        }

        // If sum < 0: discard the sum calculated
        if (sum < 0) {
            sum = 0;
        }
    }

    // To consider the sum of the empty subarray
    // uncomment the following check:

    //if (maxi < 0) maxi = 0;

    return maxi; 

        
    }
};

// KANDE
// LESS THAN 1 ms execution
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int current_elmt=nums[0];
      int sum=nums[0];
      for(int i=1; i<nums.size();i++){
        current_elmt=max(nums[i],current_elmt+nums[i]);
        sum=max(sum,current_elmt);
      }
      return sum;
    }
};

