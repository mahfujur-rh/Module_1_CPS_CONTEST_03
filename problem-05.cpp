//https://codeforces.com/contest/1560/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;cin>>tc;
    while(tc--){
        int s;cin>>s; int cnt=0;
        for(int i=1;;i++){
            if(i%3==0 or i%10==3){
                continue;
            }
            cnt++;
            if(cnt==s){
                cout<<i<<endl;
                break;
            }
        }
    }
    
    return 0;
}
