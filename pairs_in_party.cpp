#include<bits/stdc++.h>
using namespace std;
int pairs(int n){
    if(n == 2) return 2;
    if(n == 1) return 1;
    int v = pairs(n-1) + (n-1)*pairs(n-2);
    return v;
}
int main(){
    int n;
    cin>>n;

    cout<<pairs(n);
}