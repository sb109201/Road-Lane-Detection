#include<iostream>
using namespace std;
int search(int a[],int l,int r,int key){
	if(r>=l){
		int mid1=l+(r-1)/3;
		int mid2=r-(r-1)/3;
		if(key==a[mid1])
		 return mid1;
		if(key==a[mid2])
		 return mid2;
		if(key<a[mid1])
		 return search(a,l,mid1-1,key);
		else if(key>a[mid2])
		 return search(a,mid2+1,r,key);
		else 
		 return search(a,mid1+1,mid2-1,key);
	}
	return -1;
}
int main(){
	cout<<"Array size:"<<endl;
	int n;
	cin>>n;
	int a[n];
	cout<<"Elements:"<<endl;
	for(int i=0;i<n;i++)
	 cin>>a[i];
	int num;
	cout<<"Enter number to found:"<<endl;
	cin>>num;
	int m=search(a,0,n-1,num);
	if(m==-1)
	 cout<<"Number is not found"<<endl;
	else
	 cout<<"Number is found at position:"<<m<<endl;
	return 0;
}




















