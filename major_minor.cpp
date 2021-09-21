#include<iostream>
using namespace std;
int main() //este codigo se puede recortar hasta tener 23 lineas pero se veria un poco mas feo y largo
{int menor,numb;
    int array[]=numb.split(" ");
    
    int arrSize;
    
    for (int i = 0; i < array; i++)
    {
            cin>>array[i];
            return arrSize =sizeof(array)/sizeof(array[0]);
    }
    
    for(int i=0;i<arrSize; i++)               // 0,1,2,3,4
    {
        for ( int j = i+1; j < arrSize; j++)
        {
            if (array[i]>=array[j])
            {
                menor=array[i];
                array[i]=array[j];
                array[j]=menor;
            }
        }
    }
    cout<<"[";
    for ( int i = 0; i < arrSize; i++)
    {
        cout<<array[i];
        if (i!=arrSize-1)
        {
            cout<<",\t";
        }
    }
    cout<<"]"<<"\n";
   cout<<"the minor nummber of the array is: "<<array[0]<<"\n";
   cout<<"the major number is: "<<array[arrSize-1]<<"\n";
}