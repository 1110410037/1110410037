#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for(int a=1; a <= x; a++) {
        for(int b=0; b < a; b++)cout << "*";
        cout << "\n";
    }

    int y;
    cin >> y;
    for(int a=y; a >= 1; a--) {
        for(int b=0; b < a; b++)cout << "*";
        cout << "\n";
    }

    int z;
    cin >> z;
    for(int a=1; a <= z;a++){
        for(int b=0; b < z-a; b++)cout << " ";
        for(int c=0; c < a; c++)cout << "*";
        cout<<"\n";
    }

    int i;
    cin >> i;
    for(int a=i; a >= 1; a--) {
        for(int b=0; b < i-a; b++)cout << " ";
        for(int c=0; c < a; c++)cout << "*";
        cout << "\n";
    }
}