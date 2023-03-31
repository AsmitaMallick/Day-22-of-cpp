#include<iostream>
using namespace std;
class point{
	int a,b;
	public:
		point(int x, int y){
			a = x;
		    b = y; 
			}
			void displaypoint(){
				cout<<"the point is ("<<a<<","<<b<<")"<<endl;
			}
	
};
int main(){
	point p(2,3);
	p.displaypoint();
	
	point q(6,9);
	q.displaypoint();
	return 0;
}






