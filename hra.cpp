#include <iostream>
using namespace std;

void vyberPostavy (int stats [],int rnStats []) {
string postava;
string jmeno;
int postava1;
string postavaAN;

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
    stats [4] = {50,};

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
} while (postavaAN != "A"  || postavaAN == "N");{
cout<< "Vybrali jste postavu: " << postava << endl;
}
string jmenoAN;

cout<< "Skvele! Vybrali jste si postavu! \nAle jake bude vase jmeno?"<< endl;
do{
cout<< "Zadejte jmeno: ";
cin>> jmeno;
cout<< "Jste si jisti jmenem: " << jmeno<< "? (A/N)" << endl;
cin>> jmenoAN;
}while (jmenoAN == "N" || postavaAN != "A"); {
cout<< "Vitej " << jmeno<< endl;
}
}

void inventar (string inve [5]){
    cout<< "\n Ve vasem inventari se prave nachazi:" <<endl;
for (int i=0; i< 5; i++){
    cout<< inve [i] << endl;
}
}

void Prespani(int stats [],int rnStats []) {
if (rnStats [4] < 1) {
    cout<< "Bohuzel nemate na prespani dost penez a z hostince te vyhodili. \n" << "Musite pokracovat v ceste" << endl;
} else
rnStats [4] = rnStats [4]-1;
rnStats [3] = stats [3];
rnStats [1] = stats[1];
cout<< "Zivoty byly doplneny tvym krasnym slofikem v pokoji hostince, a vsechny sramy se zahojily." << endl;
cout<< "Nyni musite pokracovat v ceste."<< endl;
}

int monstrum1 (int rnStats [], string inve [], string hlaska, string jmeno){
int utok;
int zlato;
int n= rand () % 101;
if (n>50){
    zlato= rand() % 6;
}
cout<< zlato;
int hp= 2;
cout<< "Po par minutach cesty na tebe z poza kere vyskocil hrozivý"<< jmeno << endl;
do{
do{
cout<< "Co udelate? \n1. Otevreni inventare \n2. Utok \n3. Pokus o uprch";

cin>> utok;
} while (utok >3 || utok <1);
        if (utok == 3){
           cout<< "To ted bohuzel nefunguje";
          } else if (utok == 1){
    inventar(inve);
           }
        else if (utok == 2){
        cout<< "monstrum rika au au" << endl;
    }
} while (hp >=1 || rnStats [1] >=1);
if (rnStats==0){
        cout<< "Zemrel jsi v boji" << endl;
    return 0;
}else
cout<< "Vyhral jsi v boji, gratulace";
}

void Krcma (int rnStats [], string inve [5]){
int produkt;
bool koupe;
string koupeAN;
int i=0;

cout<< "Vstoupil jsi do maleho domecku uprostred vesnice, kde te ihned uvita urostly drak"<< endl;
cout<< "´Zdravim priteli. Co to dnes bude?´"<< endl;
cout<< "Vzhlednes nahoru na hospodskeho a tabuli s produkty ktere prodava"<<endl;
cout<< "1. Bily monster (Pridava +4 ke stamine po dobu jednoho souboje) \n Stoji: 7 zlatych \n\n2. Bagetka z matu (Pridava +2 zivoty)\n Stoji 3 zlate \n\n3. Blato v korbelu (Zvysuje utok o +2 po dobu jednoho souboje) \n Stoji: 5 zlatych \n4. Odejít \n" << endl;

do {
cout<< "Co si date? Pta se hospodsky" << endl;
cin>> produkt;
switch (produkt){
case 1:
if (rnStats [4] < 7) {
cout<< "Bez penez to nepujde, kamarade... \n" << endl;
} else {
rnStats [4] = rnStats [4] - 7;
cout<< "Prave jste zakoupili Bilý Monster, gratulujeme!"<< endl;
inve [i]= "Bilý Monster";
i++;
}
    break;

case 2:
if (rnStats [4] < 3) {
cout<< "Bez penez to nepujde, kamarade... \n" << endl;
} else {
rnStats [4] = rnStats [4] - 3;
cout<< "Prave jste zakoupili Bagetku z matu, gratulujeme!"<< endl;
inve [i]= "Bagetku z matu";
i++;
}
    break;

case 3:
if (rnStats [4] < 5) {
cout<< "Bez penez to nepujde, kamarade... \n" << endl;
} else {
rnStats [4] = rnStats [4] - 5;
cout<< "Prave jste zakoupili Blato v korbelu, gratulujeme!"<< endl;
inve [i]= "Blato v korbelu";
i++;
}
break;

case 4:
    break;

default:
cout<< "... Neumis cist? Nic takoveho neprodavame";
}
if (produkt!=4) {
cout<< "Nechces neco jineho? (A/N)" <<endl;
cin>> koupeAN;
    if (koupeAN == "A" || koupeAN == "a"){
        koupe= 1;
    }
        else if (i==5){
            cout<< "Nemate dostatek mista v inventari"<< endl;
            koupe=0;
        } else if (koupeAN == "N" || koupeAN == "n"){
        koupe = 0;
        }
}
} while (koupe !=0);{
cout<< "Na videnou, priteli hospodsky rekne behem toho co odchazis z krcmy \n" << endl;
}
}


void Vesnice (int rnStats[], int stats[], string jmenoV, string inve [5]) {
int KamDal;

cout<< "Vitej ve vesnici " << jmenoV << ", pruzkumniku! \n \n";
cout<< "Napoveda" << endl;
cout<< "Ve vesnicích muzes prespat (doplneni zivotu a energie) a nebo navštívit lokalni krcmu, kde za menší poplatek sezenes zazracne lektvary (Vylepseni schopnosti)" <<endl;
cout<< "Nebo take muzete pokračovat ve sve ceste na dobrodruzstvim! \n" << endl;
cout<< " \n Mate: " << rnStats[4] << " Zlata" << endl;
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
Krcma(rnStats,inve);
break;

case 3:
break;

    }
}
}


int main (){
string hlaska;
string jmeno;
string inve [5];
int stats [5];
int rnStats [5];
string jmenoV;

vyberPostavy(stats, rnStats);
jmenoV = "Mývalice";
Vesnice (stats, rnStats, jmenoV, inve);
monstrum1 (rnStats, inve, hlaska, jmeno);
return 0;
}
