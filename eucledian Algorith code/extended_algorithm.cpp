#include<iostream>
using namespace std;

int main(){

    // now the variables
    int q,r,r1,r2,s,s1 {1},s2 {0},t,t1 {0},t2 {1};
    // asking for use entry
    cout<<"Enter the first number  : ";
    cin>>r1;

    cout<<"Enter the second number : ";
    cin>>r2;

    // now for the while loop
    while(r2 > 0){
        q = r1/r2;
        r = r1 - q*(r2);
        r1 = r2;
        r2 = r;
        // now we go to the t
        t = t1 - q*t2;
        t1 = t2;
        t2 =  t;
        // now we want to obtain s
        s = s1 - q*s2;
        s1 = s2;
        s2 = s;       

    }
    cout<<"The GCD is : "<<r1<<endl;
    cout<<"The integer S is : "<<s1<<endl;
    cout<<"The integer t is : "<<t1<<endl;

    return 0;
}