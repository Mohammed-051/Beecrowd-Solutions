#include<iostream>
using namespace std;

int main()
{
    int d1;
    int h1,m1,s1;
    char e;
    string a,b;
    cin >> a >> d1 >>h1 >>e >>m1 >> e >>s1;
    int h2,m2,s2;
    int d2;


    cin >> a >> d2 >>h2 >>e >>m2 >> e >> s2;

    int t1 = (d1*86400)+(h1*3600)+(m1*60)+s1;
    int t2 = (d2*86400)+(h2*3600)+(m2*60)+s2;
    int r1 = t2-t1;

    int d = r1/86400;

    r1 = r1- (d*86400);

    int h = r1/3600;

    r1 = r1- (h*3600);

    int m = r1/60;

    r1 = r1 - (m*60);

    int s = r1;




    cout << d << " dia(s)" << endl << h << " hora(s)" << endl << m << " minuto(s)" << endl << s  << " segundo(s)" << endl;
    return 0;

}
