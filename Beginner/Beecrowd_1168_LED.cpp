#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i;
    char a[101];
    long long sum;

    cin >> n;

    for ( i = 0; i < n; i++)
    {

        scanf("%s", &a);
        k = 0;
        sum = 0;
        while (true)
        {
            if(a[k] == '\0')break;
            if(a[k] == '1') sum += 2;
            if(a[k] == '2') sum += 5;
            if(a[k] == '3') sum += 5;
            if(a[k] == '4') sum += 4;
            if(a[k] == '5') sum += 5;
            if(a[k] == '6') sum += 6;
            if(a[k] == '7') sum += 3;
            if(a[k] == '8') sum += 7;
            if(a[k] == '9') sum += 6;
            if(a[k] == '0') sum += 6;
            k++;
        }
       cout << sum <<" leds"<< endl;
    }

    return 0;
}
