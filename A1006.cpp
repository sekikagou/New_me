#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstring>
using namespace std;
typedef struct Staff{
	string ID;
	int ih,im,is,oh,om,os;
}Staff;
int M;
Staff all[100000];
int main(){
	scanf("%d",&M);
	int i,j;
	for(i=0;i<M;i++){
		cin>>all[i].ID;
		scanf("%d:%d:%d %d:%d:%d",&all[i].ih,&all[i].im,&all[i].is,&all[i].oh,&all[i].om,&all[i].os);
	}
	Staff temp=all[0];
	for(i=0;i<M;i++){
		if(temp.ih>all[i].ih)
		temp=all[i];
		else if(all[i].ih==temp.ih&&all[i].im<temp.im)
		temp=all[i];
		else if(all[i].ih==temp.ih&&all[i].im==temp.im&&all[i].is<temp.is)
		temp=all[i];
	}
	cout<<temp.ID<<" ";
	temp=all[0];
	for(i=0;i<M;i++){
		if(all[i].oh>temp.oh)
		temp=all[i];
		else if(all[i].oh==temp.oh&&all[i].om>temp.om)
		temp=all[i];
		else if(all[i].oh==temp.oh&&all[i].om==temp.om&&all[i].os>temp.os)
		temp=all[i];
	}
	cout<<temp.ID;
}
