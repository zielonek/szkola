#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int k = 107;
    int d = 0;

    string c = "INTERPRETOWANIE";
    int tab[1000];

    for(int i=0; i < c.length(); ++i){
        tab[i] = c[i];
        d++;
    }

    for(int x=0; x < d; x++){
        tab[x] += k;
        while(tab[x] > 90){
            tab[x] -= 26;
        }
    }

    char l;
    string zaszyfrowany;

    for(int y=0; y < d; y++){
        l = tab[y];
        zaszyfrowany += l;
    }
    cout << zaszyfrowany;
    return 0;
}
