//function to find the maximum(call by val)
#include<iostream>
using namespace std;
int main()
{	int fmax(int a,int b);//initializn
	cout<<"\ngive 2 numbers fr cmprsn "<<endl;
	int a,b;
	//inpt frm usr
	cin>>a>>b;
	
	//fncn invocatn
	fmax(a,b);//call by val

	return 0;

}

int fmax(int a,int b)
{	if(a>b)
	cout<<"\nfirst input is greater"<<endl;
	else
	if(a<b)
	cout<<"\n second input is greater"<<endl;
	else
	cout<<"\n they are equal!!!!!!"<<endl;


}
