#include <iostream>
using namespace std;

int main(){
	
	//First come First Serve
	
	int i,max,cpu[100],wt=0,tat=0;
	
	cout<<"Enter total no of processes :"<<endl;
	cin>>max;
	
	cout<<"CPU Burst time :"<<endl;
	for(int i=0;i<max;i++){
		cin>>cpu[i];
	}
	
	cout<<"Cpu Burst   waitng time   turnaround time  "<<endl;
	for(int i=0;i<max;i++){
		tat=wt+cpu[i];
		cout<<cpu[i]<<"\t\t"<<wt<<"\t\t"<<tat<<endl;
		wt=wt+cpu[i];
	}
	
	
	
	
	
}
