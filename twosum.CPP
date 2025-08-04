  #include<iostream>
  #include<vector>
  #include<unordered_map>
  using namespace std;
  vector<int>twoSum(vector<int>&arr , int target){
   unordered_map<int , int>map;
   for(int i=0;i<arr.size(); i++){
    int needed = target -arr[i];
    if(map.count(needed)){
        return {map[needed] , i};
    }
    map[arr[i]] = i;
   }
   return {};
  }
  int main(){
    vector<int>arr = { 2,5,9,10};
    int target = 15;
    vector<int>result = twoSum(arr , target);
    if(result.size()>0){
        cout<<result[0]<<"and"<<result[1]<<"are the indices\n";
    }
    else{
        cout<<"No pairs are found";
    }
    
  }
