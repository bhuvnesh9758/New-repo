#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string c,a;
cin>>c>>a;
int na=0,nb=0,nc=0,nd=0,aa,b,cc,d;
for(int i=0;i<n;i++){
if(c[i]=='0'&& a[i]=='0') na++;
if(c[i]=='0'&& a[i]=='1') nb++;
if(c[i]=='1'&& a[i]=='0') nc++;
if(c[i]=='1'&& a[i]=='1') nd++;
}
int f=0;
for( b=0;b<=nb&&!f;b++){
for(d=0;d<=nd;d++){
cc=nb+nd-b-2*d;
aa=n/2-(b+cc+d);
if(cc>=0 && aa>=0 && (cc<=nc) && (aa <= na)){
f=1;
break;
}
}
}
if(f){
set<int>s;
for(int i=0;i<n;i++){
if(c[i]=='0'&& a[i]=='0' && aa>0) aa--,s.insert(i+1);;
else if(c[i]=='0'&& a[i]=='1' && b>0) b--,s.insert(i+1);;
else if(c[i]=='1'&& a[i]=='0' && cc>0) cc--,s.insert(i+1);;
else if(c[i]=='1'&& a[i]=='1' && d>0) d--,s.insert(i+1);;
}
for(auto a:s){
cout<<a<<" ";
}
}
else
cout<<"NO"<<endl;
return 0;
}

