//calculate the area and the perimeter of a circle
#include <iostream>
using namespace std;
  
#define PI 3.141
  
int main(){
    float radius, area, Perimeter;
    cout << "Enter radius of circle:\n";
    cin >> radius,Perimeter;
    // Area of Circle = PI x Radius X Radius
    //Perimeter of the circle:2 x PI x Radius
    area = PI*radius*radius;
    Perimeter = 2*PI*radius;
    cout << "Area of circle :" << area;
    cout << "\nPerimeter of the circle:"<< Perimeter;
      
    return 0;
}
//Output:
//Enter radius of circle:
//5
//Area of circle :78.525
//Perimeter of the circle:31.41