#include <iostream>
using namespace std;

void vyberPostavy () {
string postava;
string jmeno;
int postava1;
char postavaAN;

int stats [5];
cout<< "Dobry den, vitejte v me uzasne gamesce" << endl;
cout<< "Jako prvni si musite vybrat classu vaseho charakteru!" << endl;
cout<< "Mate na vyber z: \n 1. Mag \n 2. Ranger \n 3. Cleric \n 4. Rogue" << endl;
do {
    do {
    cout<< "Vyberte si postavu 1-4" << endl;
    cin>>postava1;

    }while(postava1 <=0 || postava1 >=5 );{

    switch (postava1){

    case 1:
    postava="Mag";
    stats [0] = {1,};
    stats [1] = {1,};
    stats [2] = {1,};
    stats [3] = {1,};
    stats [4] = {0,};

    break;

    case 2:
    postava="Ranger";
    stats [0] = {1,};
    stats [1] = {2,};
    stats [2] = {2,};
    stats [3] = {2,};
    stats [4] = {0,};
    break;

    case 3:
    postava ="Cleric";
    stats [0] = {1,};
    stats [1] = {3,};
    stats [2] = {3,};
    stats [3] = {3,};
    stats [4] = {0,};
    break;

    case 4:
    postava= "Rogue";
    stats [0] = {1,};
    stats [1] = {4,};
    stats [2] = {4,};
    stats [3] = {4,};
    stats [4] = {0,};
    break;

    default:
    cout<< "Spatne zadana hodnota!" << endl;
    }
cout<< "Level:" << stats [0] << "\n Zivoty:" << stats [1] << "\n Utok:" << stats [2] << "\n Mana" << stats [3] << "\n Zlato:" << stats [4] << endl;
}
cout<< "Opravdu chcete byt " << postava << "? (A/N)";
cin>> postavaAN;
} while (postavaAN == 'N');{
cout<< "Vybrali jste postavu: " << postava << endl;
}
char jmenoAN;

cout<< "Skvele! Vybrali jste si postavu! \nAle jake bude vase jmeno?"<< endl;
do{
cout<< "Zadejte jmeno: ";
cin>> jmeno;
cout<< "Jste si jisti jmenem: " << jmeno<< "? (A/N)" << endl;
cin>> jmenoAN;
}while (jmenoAN == 'N'); {
cout<< "Vitej " << jmeno<< endl;
}
}

int main (){
vyberPostavy();

return 0;
}

