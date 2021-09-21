#include<iostream>
using namespace std;

int main()
{
    int edad;
    do
    {
        cout<<"ingrese una edad: ";
	    cin>>edad;
    } while ((edad<18)||(edad>25));
    return 0;
}