#include<iostream>
using namespace std;

void towerofhanoi(int n,char from_rod,char to_rod, char aux_rod)
{
	if(n==1)
	{
		cout<<"move disk 1 from rod "<<from_rod <<" to rod "<< to_rod<<endl;
        	
		return ;		
	}
	towerofhanoi(n-1,from_rod,aux_rod,to_rod);
	cout<<"move disk "<<n <<" from rod " << from_rod<<" to rod " << to_rod <<endl;
	towerofhanoi(n-1,aux_rod,to_rod,from_rod);
}
int main()
{
	int n=4;    //number of disks
	towerofhanoi(n,'A','C','B');//A,B and C are name of rods
	return 0;
}
