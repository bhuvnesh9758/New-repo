#include<bits/stdc++.h>
using namespace std;
int main(){
		int n;
		cin>>n;
		int a[n+1];
		priority_queue<int>q;
		for(int i=1;i<=n;i++){

			cin>>a[i];
			q.push(a[i]);		}
		sort(a+1,a+n+1);
		bool flag=true;
		if(n==1){
			cout<<0<<endl;
			return 0;
		}
		if(n==2){
			int sum=a[1]-a[0];
			if(sum&1){
				cout<<a[1]-a[0]<<endl;
			}else{
				cout<<sum/2<<endl;
			}
			return 0;
		}
		int prev=q.top();
		q.pop();
		int diff=prev-q.top();
		q.pop();
		prev=prev-diff;
		cout<<diff<<prev<<endl;;
		while(!q.empty()){
			int ele=q.top();
			q.pop();
			if(ele+diff!=prev){

				flag=false;
				break;
			}
			prev=ele;
		}
		if(flag)
			cout<<diff<<endl;
		else
			cout<<-1<<endl;
	return 0;
}