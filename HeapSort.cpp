#include<cstdio>
#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void Heapify(int A[],int k,int n){
	int max=k;
	if(2*k<=n&&A[max]<A[2*k]){
		max=2*k;
	}
	if(2*k+1<=n&&A[max]<A[2*k+1]){
		max=2*k+1;
	}
	if(k!=max){
		swap(A[k],A[max]);
		Heapify(A,max,n);
	}
}
void Sort(int A[],int n){
	int i;
	for(i=n;i>=1;i--){
		swap(A[1],A[i]);
		Heapify(A,1,i-1);
	}
}
int main()
{
	int n,*A,i;
	printf("Please Enter N:");
	scanf("%d",&n);
	A=new int[n+1];
	for(i=1;i<=n;i++){
		scanf("%d",&A[i]);
	}
	for(int k=n/2;k>=1;k--){
		Heapify(A,k,n);
	}
	for(i=1;i<=n;i++){
		printf("%d ",A[i]);
	}
	Sort(A,n);
	printf("\n");
	for(i=1;i<=n;i++){
		printf("%d ",A[i]);
	}
}
