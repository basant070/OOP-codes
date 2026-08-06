#include <iostream>
using namespace std;

float volume(int , float);
float volume( int );
float volume(float , float, float);

int main() {

    float l,b, h, s ;
    int r,R;

    cout << "Enter radius of circle : " <<endl;
    cin>>r;
    cout<<"The volume of circle is : "<<volume(r)<<endl;
    cout<<"Enter length and breadth and height of rectangle :"<<endl;
    cin>>l>>b>>h;
    cout<<"The volume of Rectangle is "<< volume(l, b, h)<<endl;
    cout<<"Enter the radius and height of Cylinder: ";
    cin>>R>>h;
    cout<<"The area of Cylinder is "<<volume(R,h)<<endl;
    
    return 0;


}
float volume(int r)
{
    return ((4/3)*3.14*r*r*r);
}
float volume( float  A, float B, float C )
{
    return(A*B*C);
}
float volume(int D, float P)
{
    return (3.14*D*D*P);
}
