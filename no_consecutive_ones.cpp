#include<bits/stdc++.h>
using namespace std;
void find(int n,string v,int& c){
    if(n == 0){
        c++;
        return;
    }

    if(v == ""){
        find(n-1,"0",c);
        find(n-1,"1",c);
    }
    else{
        if(v == "0"){
            find(n-1,"0",c);
            find(n-1,"1",c);
        }
        else if(v == "1",c){
            find(n-1,"0",c);
        }
    }
}
int main(){
    int n;
    cin>>n;
    string str = "";
    string v = "";
    int c = 0;
    find(n,v,c);
    cout<<c;
}