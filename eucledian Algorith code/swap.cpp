#include <iostream>
using namespace std;
 
void swap(){

}

int main()
{
	cout << "\n\n Swap two numbers :\n";
	cout << "-----------------------\n";
	int t1, t2, temp;
	cout << " Input 1st number : ";
	cin >> t1 ;
	cout << " Input 2nd number : ";
	cin >> t2;	
	temp=t2;
	t2=t1;
	t1=temp;
    cout << " After swapping the 1st number is : "<< t1 <<"\n" ; 
    cout << " After swapping the 2nd number is : "<< t2 <<"\n\n" ; 	