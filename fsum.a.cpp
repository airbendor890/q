//progm to add to numbers (call by value)
#include<iostream>
using namespace std;
int main()
{  //initializn of fncn
	int sum(int x,int y);
	//tk two numbers from usr
	int a,b;	
	cout<<"\ngive two numbers for addition   "<<endl;
	cin>>a>>b;

	//fncn invocation
	sum(a,b);//paramtrs tknn frm usr


return 0;


}
//----------fncn dfntn ------------------
int sum(int x,int y)
{	int summ=x+y;
	cout<<"\n sum is  :   "<<summ<<endl;

}
//---------------------------------------
