#include <iostream>
using namespace std;

int main()
{
	bool P;
	bool Q;
	int choices;
	
	cout<<"          LOGIC"<<endl<<"PLEASE TYPE 1 FOR TRUE AND 0 FOR FALSE"<<endl;
	cin>>P;
	if(P==1)
	{
	cout<<"P IS TRUE"<<endl;
	}
	if(P==0)
	{
	cout<<"P IS FALSE"<<endl;
	}
	cin>>Q;

	if(Q==1)
	{
	cout<<"Q IS TRUE"<<endl;
	}
	if(Q==0)
	{
	cout<<"Q IS FALSE"<<endl;
	}
	choice:
	cout<<"TYPE THE NUMBER OF YOUR CHOICE \n\n1.AND\n2.OR\n3.NOT"<<endl;
cout<<"CHOICE: ";	
cin>>choices;
if (choices!=1&&choices!=2&&choices!=3)
{
	cout<<"UNDEFINED CHOICE\n\n\n";
	goto choice;
}

	if(choices==1)
	{
		
	if(Q==1&&P==1)
	{
		cout<<"TRUE AND TRUE IS  TRUE";
	}
	if(Q==0&&P==0)
	{
		cout<<"FALSE AND FALSE IS  FALSE";
	}
	if(Q==0&&P==1)
	{
		cout<<"THERE IS A FALSE THEREFORE IT IS FALSE";
	}
	if(Q==1&&P==0)
	{
		cout<<"THERE IS A FALSE THEREFORE IT IS FALSE";
	}
	
	}
	if(choices==2)
	{
			if(Q==1&&P==1)
	{
		cout<<"TRUE AND TRUE IS  TRUE";
	}
	if(Q==0&&P==0)
	{
		cout<<"FALSE AND FALSE IS  FALSE";
	}
	if(Q==0&&P==1)
	{
		cout<<"THERE IS A TRUE THEREFORE IT IS TRUE";
	}
	if(Q==1&&P==0)
	{
		cout<<"THERE IS A TRUE THEREFORE IT IS TRUE";
	}
	}
	if(choices==3)
	{
	if(Q==1)
	{
		cout<<"THE NOT LOGIC OF Q IS FALSE\n";
	}
		if(P==1)
	{
		cout<<"THE NOT LOGIC OF P IS FALSE\n";
	}
		if(Q==0)
	{
		cout<<"THE NOT LOGIC OF Q IS TRUE\n";
	}
		if(P==0)
	{
		cout<<"THE NOT LOGIC OF P IS TRUE\n";
	}
	}
}
