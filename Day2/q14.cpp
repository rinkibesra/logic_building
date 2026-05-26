#include <iostream>
using namespace std;
int main(){
    int a=10,b=160,c=10;
    // cout<<"enter 3 angles of triangles:";
    // cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a){
        cout<<"valid triangle";
    }
    else{
        cout<<"invalid triangle";
    }
    return 0;
}