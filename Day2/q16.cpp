#include <iostream>
using namespace std;
int main(){
    int a=10,b=160,c=10;
    // cout<<"enter 3 angles of triangles:";
    // cin>>a>>b>>c;
    if(a==b && b==c && a==c){
        cout<<"equilateral triangle";
    }
    else if(a==b || b==c || a==c){
        cout<<"isosceles triangle";
    }
    else{
        cout<<"scalene triangle";
    }
    return 0;}