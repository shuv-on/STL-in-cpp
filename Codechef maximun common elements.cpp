#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
void solve(){
    int n;cin>>n;
    int count=0;
    vi va(n);vi vb(n);t_in (va); t_in(vb);
    set <int> s(vb.begin(),vb.end());
    for(int i=0;i<n;i++){
        if(s.find(va[i]) != s.end()){
            count++;
        }
        
    }
    cout<<count<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
