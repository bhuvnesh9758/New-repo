#include<bits/stdc++.h>
using namespace std;
vector<int> prefix(string s){
    vector<int >f(s.length());
    f[0]=0;
    for(int i=1;i<s.length();i++){
        int j=f[i-1];
        while(j>0 && s[i]!=s[j])
        j=f[j-1];
        if(s[i]==s[j])j++;
        f[i]=j;
    }
    return f;
}
int main(){
    string s,p;
    cin>>p>>s;
    vector<int> v=prefix(p);
    int j=0,cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=p[j]){
            while(j>0 and s[i]!=p[j]){
                j=v[j-1];
            }
        }
        if(s[i]==p[j]){
            j++;
        }
        if(j==p.length()){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
