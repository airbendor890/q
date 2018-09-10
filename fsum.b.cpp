//progm to add to numbers (call by refrence)
#include<iostream>
//#include<conio>
using namespace std;
int main()
{  //initializn of fncn
	int sum(int &x,int &y);
	//tk two numbers from usr
	int a,b;	
	cout<<"\ngive two numbers for addition   "<<endl;
	cin>>a>>b;

	//fncn invocation
	int l=sum(a,b);//paramtrs tknn frm usr and returnd value is strd in l

	cout<<"\n\n\n\n\n sum is  "<<l<<endl;
	cout<<"\n now ur incremented numbers are"<<a<<"  : "<<b<<endl;
}
//----------fncn dfntn ------------------
int sum(int &x,int &y)
{	int summ=x+y;
	
	x++;y++;		//changing paramtrs rflctd permanently
	return summ;

}
//---------------------------------------
