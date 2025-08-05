#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int longestSubarraySum(vector<int>&arr, int k){
    unordered_map<int  , int>prefixSumcount;
    int sum =0  ,maxLen =0;
    for(int i=0;i<arr.size() ; i++){
        sum +=arr[i];
        if(sum ==k){
            maxLen =i+1;
        }
        if(prefixSumcount.find(sum-k) != prefixSumcount.end()){
            int prevSum  =prefixSumcount[sum-k];
            maxLen = max(maxLen , i-prevSum);
            

        }
        if(prefixSumcount.find(sum) == prefixSumcount.end()){
            prefixSumcount[sum]  =i;
        }
    }
    return maxLen;
}
int main(){
    vector<int>arr = {1,2,3,1,2,3,1,2,3,44};
    int k=47;
    cout<<"Longest subarray sum is: "<<k<<"  has length   "<<longestSubarraySum(arr , k)<<endl;
    return 0;
}