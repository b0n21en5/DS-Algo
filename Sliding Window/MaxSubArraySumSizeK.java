// Leetcoe: 2461. Maximum Sum of Distinct Subarrays With Length K

import java.util.HashMap;

class Solution {
    public long maximumSubarraySum(int[] nums, int k) {
        long mxSum=0, sum=0;

        HashMap<Integer,Integer> fq=new HashMap<Integer,Integer>();

        int n=nums.length;
        for(int i=0;i<n;i++){
            if(fq.get(nums[i])==null){
                sum += nums[i];
                fq.put(nums[i],1);
            }else{
                fq.put(nums[i],fq.get(nums[i])+1);
            }

            if(fq.size() == k && sum > mxSum){
                mxSum = sum;
            }

            if(i-k+1>=0){
                fq.put(nums[i-k+1],fq.get(nums[i-k+1])-1);
                if(fq.get(nums[i-k+1])==0){
                    sum -= nums[i-k+1];
                    fq.remove(nums[i-k+1]);
                }
            }

        }

        return mxSum;
    }
}


class MaxSubArraySumSizeK {
    public static void main (String args[]){
        int nums[]={9,9,9,1,2,3};
        int k=3;

        Solution obj = new Solution();

        long ans= obj.maximumSubarraySum(nums,k);

        System.out.println(ans);
    }
}