#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool sortbysec(const pair<ll,ll> &a, 
              const pair<ll,ll> &b) 
{ if(a.first==b.first) return a.second< b.second;
    return (a.first < b.first); 
} 
int main(){
    long long n,x;
    cin>>n;
    vector< pair<ll,ll> > v;
    for(long long i=1;i<=2*n;i++){
        cin>>x;
        v.push_back({ x,i});
    }
    sort(v.begin(),v.end(),sortbysec);
    ll ans=0,pt=1;
    for(int i=0;i<2*n-1;i+=2){
        ans+=abs(v[i].second-pt);
        pt=v[i].second;
    }
    pt=1;
    for(int i=1;i<2*n;i+=2){
        ans+=abs(v[i].second-pt);
        pt=v[i].second;
    }
    cout<<ans<<endl;
    return 0;
}
