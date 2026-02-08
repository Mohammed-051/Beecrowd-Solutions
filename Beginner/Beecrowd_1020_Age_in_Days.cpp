#include<iostream>
using namespace std;

int main()
{
    int a,r,s;

    cin>> a;

    int y= a/365;
    r = a - y*365;

    int m = r / 30;
    r = r - m*30;

    int d = r;

    cout<< y << " ano(s)"<< endl <<m <<" mes(es)"  << endl<<d <<" dia(s)" << endl;
}
