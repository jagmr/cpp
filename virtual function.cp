#include<iostream>
using namespace std;

class bca
{
    public:
	  virtual void print()
	    {
	    	cout<<"you are in bca class";
		}	
	 void show()
	 {
	 	cout<<"\nyou r in bca class thats not a virtual function.That why the bca class run,because we use pointer.";
	 }
};
class mca:public bca
{
  public:
  void print()
  {cout<<"you r in mca class i.e..,\"virtual class\"";}
  void show()
	  {cout<<"you r in mca class ";} //overriding	
};
int main()
{
	bca *bptr;
	mca m;
	bptr=&m;
	
	//virtual function, binded at latebinding(run time)
	bptr->print();
	
	//non-virtual function,binded at earlybinding(compile time)
	bptr->show(); 
}
