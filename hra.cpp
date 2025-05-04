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
    stats [1] = {6,};
    stats [2] = {7,};
    stats [3] = {8,};
    stats [4] = {5,};

    break;

    case 2:
    postava="Ranger";
    stats [0] = {1,};
    stats [1] = {7,};
    stats [2] = {5,};
    stats [3] = {10,};
    stats [4] = {5,};
    break;

    case 3:
    postava ="Cleric";
    stats [0] = {1,};
    stats [1] = {5,};
    stats [2] = {5,};
    stats [3] = {7,};
    stats [4] = {5,};
    break;

    case 4:
    postava= "Rogue";
    stats [0] = {1,};
    stats [1] = {5,};
    stats [2] = {9,};
    stats [3] = {8,};
    stats [4] = {5,};
    break;
    }
cout<< "Level: " << stats [0] << "\n Zivoty: " << stats [1] << "\n Utok: " << stats [2] << "\n Mana: " << stats [3] << "\n Zlato: " << stats [4] << endl;
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

int Krcma (int stats []){
cout<< "Vstoupil jsi do maleho domeèku uprostred vesnice, kde te ihned uvita urostly drak"<< endl;
cout<< "Zdravim priteli. Co to dnes bude?"<< endl;
cout<< "Vzhlednes nahoru na hospodskeho a tabuli s produkty ktere prodava"<<endl;
cout<< "1. \n2.\n3. \n4.\n" << endl;
return 0;
}

void Vesnice (int stats[], string jmenoV) {
int KamDal;

cout<< "Vitej ve vesnici" << jmenoV << ", prùzkumníku! \n";
cout<< "Nápovìda" << endl;
cout<< "Ve vesnicích muzes prespat (doplneni zivotu a energie) a nebo navštívit lokalni krcmu, kde za menší poplatek sezenes zazracne lektvary (Vylepseni schopnosti)" <<endl;
cout<< "Nebo take muzete pokraèovat ve sve ceste na dobrodruzstvim!" << endl;


cout<< "Mate: " << stats [4] << " Zlata" << endl;
cout<< "1. Pøespání (stoji: 1 Zlato) \n 2. Krcma \n 3. Jít dál" << endl;
do {
cout<< "Kam byste chteli jit?" << endl;
cin>> KamDal;

} while (KamDal<= 0 || KamDal >= 3);{
switch (KamDal) {
case 1:
break;

case 2:
Krcma(stats);
break;

case 3:
break;
    }
}
}
int Pyrocoil (){
}

int main (){
string jmenoV;
int stats [10];
vyberPostavy();
Vesnice (stats, jmenoV);

return 0;
}

