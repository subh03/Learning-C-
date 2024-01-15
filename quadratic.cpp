#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float a,b,c,p,q;
    cout<< "What are the coefficient of the equation? Enter a, b, c\n";
    cin>>a>>b>>c;
    p = (-b + sqrt(b*b - 4*a*c))/(2*a);
    q = (-b - sqrt(b*b - 4*a*c))/(2*a);
    cout<<"The roots of the quadratic equation are "<<p<<" "<<q;
    return 0;
}