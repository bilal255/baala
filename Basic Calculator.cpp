/// even if it takes a night or hundered years
/// is'nt it lovely all alone heart made of glass my mind of stone
#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	
	int c;
	cout<<"PLease enter the number of your operation"<<endl;

	cout<<"1 for addition"<<endl<<"2 for subtraction"<<endl<<"3 for multiplication"<<endl<<"4 for division"<<endl<<"5 for power"<<endl<<"6 for square root"<<endl<<"7 for remainder"<<endl;
	cin>>c;
	if (c<=6)
	{
    float a;
	float b;  
	if(c==1)
	{
		
		cout<<"you have choosen addition"<<endl;
		cout<<"please enter your fisrt number=";
		cin>>a;
		cout<<"please enter your second number="<<endl;
		cin>>b;
		cout<<"your answer is="<<endl<<a+b<<endl;
		
	}
	else if(c==2)
	{
	
		cout<<"you have choosen subtratction"<<endl;
		cout<<"please enter first number=";
		cin>>a;
		cout<<"please enter second number=";
		cin>>b;
		cout<<"your answer is="<<endl<<a-b<<endl;
	}
	else if(c==3)
	{
	
		cout<<"you have choosen multiplication"<<endl;
		cout<<"please enter first number=";
		cin>>a;
		cout<<"please enter second number=";
		cin>>b;
		cout<<"your answer is="<<endl<<a*b<<endl;
	}
	else if(c==4)
	{
		
        cout<<"youn have choosen division"<<endl;	
		cout<<"please enter first number=";
		cin>>a;
		cout<<"please enter second number=";
		cin>>b;
		cout<<"your anser is="<<endl<<a/b<<endl;
	}
	else if(c==5)
	{
		cout<<"you have choosen power="<<endl;
		cout<<"please enter base=";
		cin>>a;
		cout<<"please enter power=";
		cin>>b;
		cout<<"answer is="<<endl<<pow(a,b)<<endl;
	}
	else if(c==6)
	{
		cout<<"you have choosen square root="<<endl;
		cout<<"please enter number=";
		cin>>a;
		cout<<"answer is="<<endl<<sqrt(a);
		
		
	}
}
	else
	{
		int a,b;
		cout<<"you have choosen remainder"<<endl;
		cout<<"please enter first number=";
		cin>>a;
		cout<<"please enter second number=";
		cin>>b;
		cout<<"your answer is="<<endl<<a%b;
		
	}
	return 0;
}

