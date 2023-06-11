#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    cout<<"enter the number ";
    cin>> a;
    b= a%10;//the ones digit 
    e= {(a-b)/10};
    c = e%10;// the tens digit 
    f = {(e-c)/10};
    d = f%10;// the hundreds digit
    if( (b*b*b) + (c*c*c) + (d*d*d) == a){
        cout<<"the number "<<a<<"is an armstrong number";


    }
    else{
        cout<<"the number "<<a<<" is not an armstrong number";
    }


    return 0;
}