//funcn for finding minimum(cll by rfrnc)
#include<iostream>
using namespace std;
int main()
{	void fmin(int &a, int &b);//initializn	 
	cout<<"give two number(integr) s for cmprsn"<<endl;
	int a,b;
	//inpt frm usr
	cin>>a>>b;
	fmin(a,b);//fncn invcn 
	return 0;

}

void fmin(int &a,int &b)//fncn definition
{	if(a>b)
	{cout<<"\n second input is min\n";}
	else
	if(a<b)
	{cout<<"\n first input is min\n";}
	else
	cout<<"\n ohh they are equal!!!!!!!!"<<endl;

}
