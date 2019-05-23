#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    for(int i=1;i<s.length();i++)
        if(s[i]<s[i-1]) return false;
    return true;
}
string rev(string s,int i,int j){
    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return s;
}
int main(){
    int n,k;
    cin>>n;
    char a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    a[n]='\0';
    cin>>k;
    set<string>vis;
    queue<pair<string,int> >per;
    per.push({a,0});
    int ans=0;
    bool flag=false;
//       if(!flag){
         while(!per.empty()){
             auto left=per.front();
             per.pop();
             string s=left.first;
             int val=left.second;
             vis.insert(s);
             if(check(s)){
                    ans=val;
                flag=true;
                break;
            }
            string cp=s;
            for(int i=0;i<=n-k;i++){
                auto str=rev(cp,i,i+k-1);
            if(vis.find(str)==vis.end()){
                per.push({str,val+1});
            }
            cp=s;
            }
          }
//        }else break;
//    }
    if(flag)
    cout<<ans<<endl;else
    cout<<-1<<endl;
return 0;
}

