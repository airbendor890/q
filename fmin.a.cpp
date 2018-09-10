//function to find the minimum(call by val)
#include<iostream>
using namespace std;
int main()
{	int fmin(int a,int b);//initializn
	cout<<"\ngive 2 numbers fr cmprsn "<<endl;
	int a,b;
	//inpt frm usr
	cin>>a>>b;
	
	//fncn invocatn
	fmin(a,b);//call by val

	return 0;

}

int fmin(int a,int b)
{	if(a>b)
	cout<<"\nsecond input is minimum"<<endl;
	else
	if(a<b)
	cout<<"\n first input is minimum"<<endl;
	else
	cout<<"\n they are equal!!!!!!"<<endl;


}
