#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d, e, sum;
    cin>>a>>b>>c>>d;
    sum = (a * 2 + b * 3 + c * 4 + d) / 10;
    cout<<fixed;
    cout<<setprecision(1)<<"Media: "<<sum<<endl;
    if (sum >= 7.0)
    {
        cout<<"Aluno aprovado.\n";
    }
    else if (sum >= 5.0)
    {
        cout<<"Aluno em exame.\n";
        cin>>e;

        cout<<setprecision(1)<<"Nota do exame: "<<e<<endl;
        if (e + sum / 2.0 > 5.0)
        {
            cout<<"Aluno aprovado.\n";
        }
        else
        {
            cout<<"Aluno reprovado.\n";
        }

        cout<<setprecision(1)<<"Media final: "<<(e + sum ) / 2.0<<endl;
    }
    else
    {
        cout<<"Aluno reprovado.\n";
    }
    return 0;
}
