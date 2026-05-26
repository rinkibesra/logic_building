#include <iostream>
using namespace std;
int main(){
    int amount=786;
    int notes[]={500,200,100,50,20,10,5,2,1};
    int n=sizeof(notes)/sizeof(int);
    int count=0;
    for(int i=0;i<n;i++){
        count+=amount/notes[i];
        
        amount=amount%notes[i];
        
    }cout<<count;

 
    return 0;
}