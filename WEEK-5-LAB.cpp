#include<iostream>
#include<math.h>
#include<fstream>

using namespace std;

int main()
{
    float var1, var2;

    cout<<"Enter the Width of a right angled triangle :  ";
    cin>> var1;
    cout<<"Enter the Height of a right angled triangle : ";
    cin>> var2;

    auto result = sqrt( pow(var1,2) + pow(var2,2) );

    ofstream myfile;
    myfile.open ("output.txt");
    myfile << "Your Triangle has three sides that are " <<var1 <<" , " <<var2 <<" and " <<result <<". \n\n\n";
    myfile.close();

    return 0;


}