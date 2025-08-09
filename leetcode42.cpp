#include <bits/stdc++.h>
using namespace std;
    
int trap(vector<int>& height) {
        int l = height.size();
        vector<int> left;
        vector<int> right(l);
        int sum = 0;
        int t1 = height[0];
        int t2 = height[l - 1];

        for (int i = 0; i < l; i++) {
            if (height[i] >= t1) {
                left.push_back(height[i]);  
                t1 = height[i];
            }else{
                left.push_back(t1);  
            }
        }
        
        for (int j = l - 1; j >= 0; j--) {
            if (height[j] >= t2) {
                right[j] = height[j];    
                t2 = height[j];
            }else{
                right[j] = t2;  
            }
        }

        for (int i = 0; i < l; i++) {
            if (left[i] > right[i]) {
                sum += (right[i] - height[i]);
            } else {
                sum += (left[i] - height[i]);
            }
        }
        return sum;
    }

int main() {
    vector<int> height={4,2,0,3,2,5};
    int res = trap(height);
    cout << res;
    return 0;
}
