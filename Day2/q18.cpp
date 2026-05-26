#include <iostream>
using namespace std;
int main(){
    float maths=80,english=90,science=85,hindi=75,sst=74;
    float total=maths+english+science+hindi+sst;
    float percentage=(total/500)*100;
    cout<<"percentage:"<<percentage<<"%"<<endl;
   
    if(percentage>90){
        cout<<"O";
    }
    else if(percentage>80){
        cout<<"E";
    }
    else if(percentage>70){
        cout<<"A+";
    }
    else if(percentage>60){
        cout<<"A";
    }else{
        cout<<"B";
    }
    return 0;}