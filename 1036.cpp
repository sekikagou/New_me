#include<cstdio>
#include<cstdlib>
using namespace std;
typedef struct Info{
	char NAME[15],ID[15],G;
	int S;
}Info;
int main(){
	Info temp,Male,Female;
	bool fm=false,ff=false;
	int M;
	scanf("%d",&M);
	Male.S=0,Female.S=0;
	while(M){
		scanf("%s %c %s %d",temp.NAME,&temp.G,temp.ID,&temp.S);
		if(temp.G=='M'){
			if(fm==false)
			fm=true;
			if(temp.S>Male.S)
			Male=temp;
		}
		else if(temp.G=='F'){
			if(ff==false)
			ff=true;
			if(temp.S>Female.S)
			Female=temp;
		}
		M--;
	}
	if(fm==false)
	printf("Absent\n");
	else
	printf("%s %s\n",Male.NAME,Male.ID);
	if(ff==false)
	printf("Absent\n");
	else
	printf("%s %s\n",Female.NAME,Female.ID);
	if(fm==true&&ff==true)
	printf("%d",Female.S-Male.S);
	else
	printf("NA");
}
