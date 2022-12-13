#include<iostream>
using namespace std;

int main()
{
    int a=1;
    int r=2;
    int n;
    int sn;
    cout<<"Input the Numbers of Level :";
    cin>>n;

    sn =(n * (2 * a + (n-1)* r))/2;
    cout<<"Total number of Nodes : "<<sn;

    return 0;

}
