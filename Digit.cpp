#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t,d;
    cin>>t;
    while(t--){
        ll n;
        cin>>n>>d;
        string s=to_string(n);
        int min=d,cnt=0;
        for(int j=s.length()-1;j>=0;j--){
        	if(s[j]-48 >min)
        	{
        		s.erase(j,1);
        		cnt++;
			}else if(s[j]-48 <min){
				min=s[j]-48;
			}
		}
		cout<<s;
		while(cnt--)
		cout<<d;
		cout<<endl;
    }
return 0;
}

