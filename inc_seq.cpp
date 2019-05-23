#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int left=0,right=n-1;
	string s="";
	int prev=-1;
	while(left<=right){
		int value=min(a[left],a[right]);
		if(a[left]>prev || a[right]>prev){
			if(value==a[left] &&value>prev){
				s+='L';
				left++;
			}else{
				s+='R';
				right--;
			}
			prev=value;
		}else{
			break;
		}
	}
	cout<<s.length()<<endl<<s;
}