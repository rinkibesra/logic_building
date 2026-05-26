#include <iostream>
#include <cmath>
using namespace std;
int main(){
    
    int a=1,b=-5,c=6;
    int D=b*b-4*a*c;
    if (D>0)
    {
       float x=(-b+ sqrt(D))/ (2.0*a);
        float y=(-b- sqrt(D))/ (2.0*a);
        cout<<"Two distinct root:"<<x<<" "<<y;
    }
    else if (D==0)
    {
        float x=-b/(2.0*a);
         cout<<"one root:"<<x;
    }
    else
    {
       cout<<"imaginary root";
    }
    
   
 
    return 0;
}