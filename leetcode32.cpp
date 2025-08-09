#include<stack>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int longestValidParentheses(string s) {
        stack<int> si;
        si.push(-1);
        int lon = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                si.push(i);
            } else {
                si.pop();
                if(si.empty()){
                    si.push(i);
                }else{
                    lon=max(lon,i-si.top());
                }
            }
        }
        return lon;
}

int main(){
    string s=")()())";
    int ans=longestValidParentheses(s);
    cout << ans;
    return 0;
}