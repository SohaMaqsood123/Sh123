#include <iostream>
using namespace std;

int main(){
	int n,p,j,b[50],w,t,i,temp=0;
	w=0;
	float awt=0,att=0,aw=0,at=0;
	cout<<"Enter the process no:"<<endl;
	cin>>n;
	
	for(i=0;i<n;i++){
		cout<<"Enter the burst time for the process"<<i+1<<endl;
		cin>>b[i];
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			if(b[i<b[j]]){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;	
			}
			
		}
	}
	
	cout<<"Processes\t\tBurst time\t\twating time\t\tturnaround time"<<endl;
	
	     for(i=0;i<n;i++){
	     	t=w+b[i];
	     	cout<<i+1<<"\t\t\t"<<b[i]<<"\t\t\t"<<w<<"\t\t\t"<<t<<endl;
	     	at=at+t;
	     	aw=aw+w;
	     	w=w+b[i];
		 }
	att=at/n;
	awt=aw/n;
	cout<<"Average waiting time and Average turnaround time :"<<endl;
	cout<<awt<<"\t"<<att<<endl;
	

	return 0;
}
