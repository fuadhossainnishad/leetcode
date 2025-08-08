// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

bool compareArray(vector<string>& a1,vector<string>& a2){
sort(a1.begin(),a1.end());
sort(a2.begin(),a2.end());
int c=0;
for(int i=0;i<a1.size();i++){
if(a1[i]==a2[i]) {c++;};
}
return a1.size()==c;
}

vector<int> findSubstring(string s, vector<string>& words) {
        int len = words[0].size();
        int wordlen = words.size();
        vector<string> strar;
        vector<vector<string>> perar;
        vector<int> ans;

        for (int i = 0; i < s.size(); i = i + len) {
            strar.push_back(s.substr(i, len));
        }
        for(int i=0;i<=strar.size()-wordlen;i++){
            vector<string>temp;
            for(int j=i;j<i+wordlen;j++){
                temp.push_back(strar[j]);
            }
            perar.push_back(temp);
        }

        for(int i=0;i<perar.size();i++){
            if(compareArray(words,perar[i])){
            ans.push_back(i*len);
        }
    
}
        return ans;
    }

int main() {
    vector<string> str={"fooo","barr","wing","ding","wing"};
    cout<< "this is leetcode";
    vector<int> res = findSubstring("lingmindraboofooowingdingbarrwingmonkeypoundcake", str);
    for (int idx : res) {
        cout << idx << " ";
    }
    return 0;
}

