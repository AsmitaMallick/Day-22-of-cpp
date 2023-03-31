#include<iostream>
using namespace std;
//default arguments
class simple{
	int a,b,c;
	public:
		simple(int data1, int  data2=6, int data3=8){
			a = data1;
			b = data2;
			c = data3;
		}
		void printnumber(){
		cout<<"the numbers are: "<<a <<", "<<b<<" and "<<c<<endl;
	}
};
int main(){
	simple s1(1)	;
	s1.printnumber();
	return 0;
}
