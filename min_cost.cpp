#include<bits/stdc++.h>
using namespace std;
vector<int> arr{10,30,40,50,20};
vector<int> dp(5,-1);
vector<int> DP(5,INT_MAX);
void f(int i,int k){
    for(int i1=i+1;i1<=i+k;i1++){
        if(i1<arr.size()) DP[i] = min(DP[i] , abs(arr[i]-arr[i1])+DP[i1]);
    }
}
int mincost(int i,int k){
    if(i == arr.size()-1) return 0;
    int ans = INT_MAX;
    if(dp[i] != -1) return dp[i];
    for(int i1=i+1;i1<=i+k;i1++){
        if(i1 < arr.size()) ans = min(ans, abs(arr[i] - arr[i1]) + mincost(i1,k));
    }
    dp[i] = ans;
    return ans;
}
int main(){
    DP[4] = 0;
    for(int i=3;i>=0;i--){
        f(i,3);
    }
    cout<<DP[0];
    // cout<<mincost(0,3);
}