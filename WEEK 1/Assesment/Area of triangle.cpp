#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    int base, hypotenuse;
    double ans1, ans2;    //ans may come in fractions
    cout<<"Enter base And hypotenuse : ";
    cin>>base>>hypotenuse;
    ans1= sqrt(pow(hypotenuse,2)-pow(base,2));    //Height of triangle formula
 
    cout<<"Height of triangle is : "<<ans1;
    ans2=(0.5*ans1*base);//Area of triangle formula
     cout<<"Area of triangle is : "<<ans2;
 return 0;
}