#include <iostream>
#include <windows.h>
using namespace std;

void vyberPostavy (int stats [],int rnStats []) {
string postava;
string jmeno;
int postava1;
char postavaAN;

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
cout<< "Level: " << stats [0] << "\n Zivoty: " << stats [1] << "\n Utok: " << stats [2] << "\n Mana/Stamina: " << stats [3] << "\n Zlato: " << stats [4] << endl;
for(int i= 0; i <5; i++) {
    rnStats [i] = stats [i];
}
}
cout<< "Opravdu chcete byt " << postava << "? (A/N)";
cin>> postavaAN;
} while (postavaAN != 'A'  || postavaAN == 'N');{
cout<< "Vybrali jste postavu: " << postava << endl;
}
char jmenoAN;

cout<< "Skvele! Vybrali jste si postavu! \nAle jake bude vase jmeno?"<< endl;
do{
cout<< "Zadejte jmeno: ";
cin>> jmeno;
cout<< "Jste si jisti jmenem: " << jmeno<< "? (A/N)" << endl;
cin>> jmenoAN;
}while (jmenoAN == 'N' || postavaAN != 'A'); {
cout<< "Vitej " << jmeno<< endl;
}
}

void Prespani(int stats [],int rnStats []) {
if (rnStats [4] < 1) {
    cout<< "Bohuzel nemate na prespani dost penez a z hostince te vyhodili. \n" << "Musite pokracovat v ceste" << endl;
} else
rnStats [4] = rnStats [4]-1;
rnStats [1] = stats [1];
cout<< "Zivoty byly doplneny tvym krasnym slofikem v pokoji hostince, a vsechny sramy se zahojily." << endl;
cout<< "Nyni musite pokracovat v ceste."<< endl;
}

int monstrum1 (int rnStats []){
int utok;
cout<< "Po par minutach cesty na tebe z poza kere vyskocil neznamy plaz" << endl;
cout<< "GRRRR";

cout<< "Co udelate? \n1. Otevreni inventare \n2. Utok \n3. Pokus o uprch";
do {
cin>> utok;
 if (utok <1 || utok >3){
            cout<< "Vyberte jinou volbu: ";
        }
} while (utok > 3 || utok <1);
cout<< "Pokracujte";
return 0;
}

void Krcma (int stats []){
int produkt;
cout<< "Vstoupil jsi do maleho domecku uprostred vesnice, kde te ihned uvita urostly drak"<< endl;
cout<< "Zdravim priteli. Co to dnes bude?"<< endl;
cout<< "Vzhlednes nahoru na hospodskeho a tabuli s produkty ktere prodava"<<endl;
cout<< "1. Bily monster (Pridava +4 ke stamine po dobu jednoho souboje) \n2. (Pridava +2 zivoty)\n3. (Zvysuje utok o +2 po dobu jednoho souboje) \n4. ()\n" << endl;
cin>> produkt;

switch (produkt){
case 1:
    break;

case 2:
    break;

case 3:
    break;

case 4:
    break;
}
}

void Vesnice (int rnStats[], int stats[], string jmenoV) {
int KamDal;

cout<< "Vitej ve vesnici " << jmenoV << ", pruzkumniku! \n \n";
cout<< "Napoveda" << endl;
cout<< "Ve vesnicích muzes prespat (doplneni zivotu a energie) a nebo navštívit lokalni krcmu, kde za menší poplatek sezenes zazracne lektvary (Vylepseni schopnosti)" <<endl;
cout<< "Nebo take muzete pokraèovat ve sve ceste na dobrodruzstvim! \n" << endl;


cout<< "Mate: " << rnStats[4] << " Zlata" << endl;
cout<< "1. Prespani (stoji: 1 Zlato) \n2. Krcma \n3. Jit dal" << endl;
do {
cout<< "Kam byste chteli jit?" << endl;
cin>> KamDal;

} while (KamDal<= 0 || KamDal > 3);{
switch (KamDal) {
case 1:
    Prespani(rnStats, stats);
break;

case 2:
Krcma(rnStats);
break;

case 3:
break;
    }
}
}


int main (){
int stats [5];
int rnStats [5];
string jmenoV;

vyberPostavy(stats, rnStats);
jmenoV = "--";
Vesnice (stats, rnStats, jmenoV);
monstrum1 (rnStats);
return 0;
}

