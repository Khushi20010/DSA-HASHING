#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int LongestlengthSubstring(string s){
    unordered_map<char ,int>charIndex;
    int st = 0 , maxlen = 0;
    for(int end =0;end<s.length() ;end++){
        char currentIndex = s[end];
        if(charIndex.find(currentIndex)!= charIndex.end()&& charIndex[currentIndex]>=st){
            st = charIndex[currentIndex]+1;
          

        }
        charIndex[currentIndex] = end;
        maxlen = max(maxlen , end-st+1);
    }
    return maxlen;
}
int main(){
    string s = "abababbabbabababb";
    cout<<"Longest substring without repeating character   "<<LongestlengthSubstring(s)<<endl;
    return 0;
}