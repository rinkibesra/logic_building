#include <iostream>
using namespace std;
int main(){
    int cp=100;int sp=120;
    
 if (sp>cp)
 {
    float profit=sp-cp;
    cout<<"profit:"<<profit;
 }
 else if (cp>sp)
 {
    float loss=cp=sp;
    cout<<"loss:"<<loss;
 }
 else 
 {
    cout<<"no profit no loss";
 }
 
    return 0;}