#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>&arr){
    int candidate = 0, count =0;
    for(int i=0;i<arr.size();i++){
        if(count == 0){
            candidate =  arr[i];
        }
        if(arr[i] == candidate ){
            count++;
        }
        else{
            count--;
        }
    }
    return candidate;
}
int main(){
    vector<int>arr = {2,2,3,3,4,4,3,3,4,4};
    cout<<"Majority element is:"<<majorityElement(arr)<<endl;
    return 0;
}