//programm to include question 2,3and 4(lab 6)
#include<iostream>
using namespace std;
int main()
{//initializn of fncns-----------------------------------
	int fmax(int a,int b);
	int fmin(int a,int b);
	int sum(int x,int y);

//---------------------------------------
	cout<<"Read the convection below and do your choice for opertion\n";
	cout<<"\n finding sum = 1";
	cout<<"\n finding maximum = 2";
	cout<<"\n finding minimum = 3"<<endl;
//----------------------------------------
//taking inputs---------------------------
	int choice,a,b;
	char agn;
     do
     {
	cout<<"input two numbers"<<endl;
	cin>>a>>b;
	cout<<"input your choice of operation"<<endl;
	cin>>choice;cout<<endl;
//----------------------------------------
//switch case-----------------------------
	switch (choice)
	{ case 1:
			sum(a,b);
			break;

	  case 2:
			fmax(a,b);
			break;
	  case 3:
			fmin(a,b);
			break;
	  default :
			cout<<"\n\n error! invalid input"<<endl;
			break;
	}

	cout<<"\n\ndo you want to do more operations tell yes or no(y/n)\n";
	cin>>agn;

     }while(agn=='y');	


	return 0;	

}
//--------------------------------------------------
int fmax(int a,int b)
{	if(a>b)
	cout<<"\nfirst input is greater"<<endl;
	else
	if(a<b)
	cout<<"\n second input is greater"<<endl;
	else
	cout<<"\n they are equal!!!!!!"<<endl;


}
//---------------------------------------------------
int fmin(int a,int b)
{	if(a>b)
	cout<<"\nsecond input is minimum"<<endl;
	else
	if(a<b)
	cout<<"\n first input is minimum"<<endl;
	else
	cout<<"\n they are equal!!!!!!"<<endl;


}
//---------------------------------------------------
int sum(int x,int y)
{	int summ=x+y;
	cout<<"\n sum is  :   "<<summ<<endl;

}
//--------------------------------------------------






















