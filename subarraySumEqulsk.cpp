#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int subarraySum(vector<int>&arr , int k){
    unordered_map<int , int>prefixSumcount;
    int count =0 ,currentSum =0;
    for(int i=0;i<arr.size() ; i++){
        currentSum +=arr[i];
        int remainingSum = currentSum -k;
        if(prefixSumcount .count(remainingSum)>0){
            count+=prefixSumcount[remainingSum];
        }
        prefixSumcount[currentSum]++;
    }
    
    return count;
}
int main(){
    vector<int>arr = {2,3,4,5,6,7,8,9};
    int k=7;
    cout<<"Number of subarray with sum equals"<<" "<<k<<" "<<"is " <<subarraySum(arr , k)<<endl;
    return 0;
}
