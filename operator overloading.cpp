#include <iostream>
using namespace std;

class A{
	private:
		int num;
	public:
		void set(){
			cin>>num;
		}
		bool operator > (A& a){
			if(num > a.num)
			return 1;
			else
			return 0;
		}
		bool operator < (A& a){
			if(num > a.num)
			return 0;
			else
			return 1;
		}
};

int main(){
	A temp1,temp2;
	cout<<"Enter first Number: \n";
	temp1.set();
	cout<<"Enter first Number: \n";
	temp2.set();
	if(temp1>temp2){
		cout<<"temp1 is greater than temp2\n";
	}
	else if(temp1<temp2){
		cout<<"temp2 is greater than temp1\n";
	}
	
}
