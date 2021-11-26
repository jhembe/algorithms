#include<iostream>
using namespace std;

int main(){
    // now let's initialise the variables a = bq + r
    int r, r1,r2,q;

    cout<<"Enter the num1 : ";
    cin>>r1;

    cout<<"Enter the num2 : ";
    cin>>r2;

    while( r2 > 0){

        q = r1/r2;
        r = r1 - q*(r2);
        r1 = r2;
        r2 = r;
    }

    cout<<"The GCD is = "<<r1<<endl;

    return 0;
}