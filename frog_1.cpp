#include<bits/stdc++.h>
using namespace std;
vector<int> dp(2,-1);
vector<int> arr{10,10};
// int s = 4;
int func(int i){
    if(i == arr.size()-1) return 0;
    int ans = INT_MAX;
    if(dp[i] != -1) return dp[i];
    for(int i1=i+1;i1<=i+2;i1++){
        if(i1 < arr.size()) ans = min(ans , abs(arr[i1] - arr[i]) + func(i1));
    }
    dp[i] = ans;
    // cout<<dp[i]<<" ";
    return ans;
}
int main(){
    // int n;
    // cin>>n;
    // dp[n] = INT_MAX;
    // dp[3] = 0;

    cout<<func(0)<<endl;
    // for(int i=0;i<n;i++) cout<<dp[i]<<" ";
}