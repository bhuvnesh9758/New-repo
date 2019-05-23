#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second
int oper(string a,string b){
    map<string ,int> mp;
    mp[a]=0;
    int pos=0;
    int n=a.length();
    for(int i=0;i<a.length();i++)
    if(a[i]=='_'){
    pos=i;break;}
    queue<pair<string ,int> > q;
    q.push({ a,pos});
    while(!q.empty()){
        auto p=q.front();
        q.pop();
        int pos=p.s;
        int dist=mp[p.f];
        string s=p.f;
        if(pos>0){
            string temp=p.f;
            swap(temp[pos],temp[pos-1]);
            if(!mp.count(temp)){
                if(temp==b){
                    return 1+dist;
                    break;
                }
                mp[temp]=1+ dist;
                q.push({temp,pos-1});
            }
        }
         if(pos<n-1){
            string temp=p.f;
            swap(temp[pos],temp[pos+1]);
            if(!mp.count(temp)){
                if(temp==b){
                    return 1+dist;
                    break;
                }
                mp[temp]=1+ dist;
                q.push({temp,pos+1});
            }
        }
        if(pos > 1 &&s[pos-1 ] !=s[pos-2]){
            string temp=s;
            swap(temp[pos],temp[pos-2]);
            if(!mp.count(temp)){
                if(temp==b){
                    return 1+dist;
                    break;
                }
                mp[temp]=1+ dist;
                q.push({temp,pos-2});
            }
        }
        if(pos <n-2  &&s[pos+1 ] !=s[pos+2]){
            string temp=s;
            swap(temp[pos],temp[pos+2]);
            if(!mp.count(temp)){
                if(temp==b){
                    return 1+dist;
                    break;
                }
                mp[temp]=1+ dist;
                q.push({temp,pos+2});
            }
        }
    }
}
main ()
{
    string a,b;
    cin>>a>>b;
    cout<<oper(a,b);
  return 0;
}

