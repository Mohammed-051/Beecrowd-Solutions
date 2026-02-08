#include<bits/stdc++.h>
using namespace std;

#include <stdio.h>


int main(){
    int notes, R;

    cin >> notes;

    cout << notes << endl;
    printf("%d nota(s) de R$ 100,00\n", notes/100);
    R = (notes%100);


    printf("%d nota(s) de R$ 50,00\n", R/50);
    R = (R%50);

    printf("%d nota(s) de R$ 20,00\n", R/20);
    R = (R%20);

    printf("%d nota(s) de R$ 10,00\n", R/10);
    R = (R%10);

    printf("%d nota(s) de R$ 5,00\n", R/5);
    R = (R%5);

    printf("%d nota(s) de R$ 2,00\n", R/2);
    R = (R%2);

    printf("%d nota(s) de R$ 1,00\n", R/1);
    return 0;
}

