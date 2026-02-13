#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main ()
{

    int n;

    cin >> n;

    int c1= 0, c2 = 0, c3 = 0, tc =0;

    char a;
    int b;
    double a1, a2, a3;


    while(n--)
    {

        cin >> b>> a;

        if (a == 'C')
        {
            c1 += b;
        }
        else if (a == 'R')
        {
            c2+= b;
        }
        else
        {
            c3+=b;
        }

    }


    tc = c1 + c2 + c3;


    a1 = (double (c1)/tc)*100;
    a2 = (double (c2)/tc)*100;
    a3 = (double (c3)/tc)*100;



    cout << "Total: " << tc << " cobaias" << endl;
    cout << "Total de coelhos: " << c1 << endl;
    cout << "Total de ratos: " << c2 << endl;
    cout << "Total de sapos: " << c3 << endl;



    cout <<fixed << setprecision(2) << "Percentual de coelhos: "<< a1 <<" %" << endl;
    cout <<fixed << setprecision(2) << "Percentual de ratos: "<< a2 <<" %" << endl;
    cout <<fixed << setprecision(2) << "Percentual de sapos: "<< a3 <<" %" << endl;


    return 0;
}
