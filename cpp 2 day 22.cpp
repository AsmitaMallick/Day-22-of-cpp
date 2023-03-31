
#include <iostream>
#include <cmath> 
using namespace std;

class Point
{
    int x, y;
    friend int Distance(Point, Point);

public:
    Point(int a, int b){
        x = a;
        y = b;
    }
};
int Distance(Point o1, Point o2){
    int x_diff = (o2.x-o1.x);
    int y_diff = (o2.y-o1.y);
    int diff = sqrt(pow(x_diff,2)+pow(y_diff,2));
    return diff;
}

int main(){
    Point p1(3,4), p2(1,1);
    cout<<"the distance between two points is: "<<Distance(p1,p2)<<endl;

    return 0;
}
