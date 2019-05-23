#include<bits/stdc++.h>
using namespace std;
int tree[10]
void buildtree(int *a,int * tree,int start,int end,int index){
	//base case
	if(start==end){
		tree[index]=a[start];
		return ;
	}
	int mid=(start+end)/2;
	buildtree(a,tree,start,mid,2*index);
	buildtree(a,tree,mid+1,end,2*index+1);
	tree[index]=tree[2*index]+tree[2*index+1];
	
}
void updatetree(int *a,int * tree,int start,int end,int index,int idx,int value)
{
		if(start==end){
			a[idx]=value;
		tree[index]=value;
		return ;
	}
	int mid=(start+end)/2;
	if(mid>=idx)
	{
		updatetree(a,tree,start,mid,2*index,idx,value);
	}else{
		updatetree(a,tree,mid+1,end,2*index+1,idx,value);
	}
	tree[index]=tree[2*index]+tree[2*index+1];
}
int query(int * tree,int start,int end,int index,int left,int right)
{
	//completly outside
	if(start>right || end<left)
	return 0;
	//completly inside
	if(start>=left && end<=right)
	{
		return tree[index];
	}
	//partially outside
	int mid=(start+end)/2;
	int ans1=query(tree,start,mid,2*index,left,right);
	int ans2=query(tree,mid+1,end,2*index+1,left,right);
	return ans1+ans2;
}
int main()
{
	int arr[]={1,2,3,6,5};
	int * tree=new int [20];
	buildtree(arr,tree,0,4,1);
	updatetree(arr,tree,0,4,1,3,10);
	for(int i=1;i<10;i++)
	cout<<tree[i]<<" "<<i<<endl;
	cout<<"sum is "<<endl;
	cout<<query(tree,0,4,1,2,4);
	return 0;
}
