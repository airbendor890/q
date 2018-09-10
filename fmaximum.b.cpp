//funcn for finding maximum(cll by rfrnc)
#include<iostream>
using namespace std;
int main()
{	void fmax(int &a, int &b);//initializn	 
	cout<<"give two number(integr) s for cmprsn"<<endl;
	int a,b;
	//inpt frm usr
	cin>>a>>b;
	fmax(a,b);//fncn invcn 
	return 0;

}

void fmax(int &a,int &b)//fncn definition
{	if(a>b)
	{cout<<"\n first input is max\n";}
	else
	if(a<b)
	{cout<<"\n second input is max\n";}
	else
	cout<<"\n ohh they are equal!!!!!!!!"<<endl;

}
