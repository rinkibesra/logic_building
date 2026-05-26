#include <iostream>
using namespace std;
int main(){
    int a=10,b=160,c=10;
    // cout<<"enter 3 angles of triangles:";
    // cin>>a>>b>>c;
    if(a>0 && b>0 && c>0 && a+b+c==180){
        cout<<"valid triangle";
    }
    else{
        cout<<"invalid triangle";
    }
    return 0;
}