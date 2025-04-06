#include <iostream>
using namespace std;

int main() {
int matice [2][3];
int soucet=0;

cout<< "Zadejte 6 hodnot pro matici 2x3:" << endl;
for (int i=0; i<2; i++){
        for (int j = 0; j<3; j++){
                cin>> matice [i][j];
                soucet+= matice [i][j];
        }
}
cout<< soucet;
}
