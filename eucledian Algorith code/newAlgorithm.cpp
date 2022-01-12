#include<iostream>
using namespace std;

int r, r1,r2,q,temp;
void gcd(){
    q = r1/r2;
    r = r1 - q*(r2);
    r1 = r2;
    r2 = r;
}
void swap(){
    temp=r2;
    r2=r1;
    r1=temp;
}

int main(){
    // now let's initialise the variables a = bq + r
    cout<<"Enter the num1 : ";
    cin>>r1;

    cout<<"Enter the num2 : ";
    cin>>r2;

    while( r2 > 0){

        if(r1>r2){
            gcd();
        }
        else{
            swap();
            gcd();

        }
      
    }

    cout<<"The GCD is = "<<r1<<endl;

    return 0;
}