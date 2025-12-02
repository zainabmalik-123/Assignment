#include<iostream>
#include<climits>//
using namespace std;
int main()
{
	int num,max=INT_MIN,mini=INT_MAX,sum=0;
	cout<<"enter num"<<endl;
	for(int i=1;i<10;i++)
	cin>>num;
	sum+=num;
	if(num>max)
	max=num;
	if(num<mini)
	mini=num;
	cout<<"maximun:"<<max<<endl;
	cout<<"minimum:"<<mini<<endl;
	cout<<"sum:"<<sum<<endl;
	return 0;
}
