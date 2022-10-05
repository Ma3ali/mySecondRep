//B222222222222
#include<iostream>
using namespace std; 
int main()
{     

	int x,d1,d2,d3,d4,r,t;
	cout<<"enter a 4-digits number in [1000:9999] : ";
	cin>>x;//x=4321 , r=1234
	t=x;
	d1=x%10;//d1=1
	x=x/10;//x=432

	d2=x%10;//d2=2
	x=x/10;//x=43

	d3=x%10;//d3=3
	x=x/10;//x=4

	d4=x%10;//d4=4
	x=x/10;//x=0

	r=d1*1000+d2*100+d3*10+d4;
	cout<<"reverse : "<<r<<endl;
	//if(d1==d4 && d2==d3)
	x=t;
		if(x==r)
		cout<<"Palindrome\n";
	else
		cout<<"Not Palindrome\n";

	system("PAUSE");      
	return 0; 
}