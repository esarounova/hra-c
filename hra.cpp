#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void napoveda (){
cout<< "\n Napoveda" << endl;
cout<< "Ve vesnicích muzes prespat (doplneni zivotu a energie) a nebo navštívit lokalni krcmu, kde za menší poplatek sezenes zazracne lektvary (Vylepseni schopnosti)" <<endl;
cout<< "Nebo take muzete pokračovat ve sve ceste na dobrodruzstvim! \n" << endl;
}

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
    stats [1] = {10,};
    stats [2] = {5,};
    stats [3] = {4,};
    stats [4] = {10,};

    break;

    case 2:
    postava="Ranger";
    stats [0] = {1,};
    stats [1] = {10,};
    stats [2] = {4,};
    stats [3] = {5,};
    stats [4] = {10,};
    break;

    case 3:
    postava ="Cleric";
    stats [0] = {1,};
    stats [1] = {8,};
    stats [2] = {5,};
    stats [3] = {4,};
    stats [4] = {10,};
    break;

    case 4:
    postava= "Rogue";
    stats [0] = {1,};
    stats [1] = {9,};
    stats [2] = {7,};
    stats [3] = {5,};
    stats [4] = {10,};
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

void inventar (string inve [5], int rnStats []){
    string jj;
    int N;
    int pocet =0;
    string volba;
    cout<< "\n Ve vasem inventari se prave nachazi:" <<endl;
for (int i=0; i< 5; i++){
    if (inve[i].empty()){
            cout<< "";
            pocet++;
} else {
 cout<< i+1 << ". " << inve [i] << endl;
}
}
if (pocet==5){
    cout<< "Neni tu zhola nic :c" << endl;
}

else {
cout<< "Chcete něco pouzit? (A/N)" << endl;
cin>> jj;
if (jj=="A" || jj=="a"){
   do{ cout<< "Kterou z nich chcete pouzit? (1-5)" << endl;
    cin>> N;
        if ((N <1 || N>5)||(inve[N-1].empty()))
            cout<< "Spatne zvolena hodnota" << endl;
    }while ((N <1 || N>5)||(inve[N-1].empty()));
    cout<< "Opravdu chcete použit predmet: " << inve[N-1] << "?" << endl;
    cin>> volba;

    if (inve[N-1]== "Bilý Monster"){
        rnStats [3] = rnStats[3] + 4;
    cout<< "Vase nova stamina/mana: " << rnStats [3] << " Efekt potrva do konce souboje" << endl;
    inve[N-1]= "";
    }
    else if (inve[N-1]== "Bagetku z matu") {
        rnStats [1] = rnStats[1] + 2;
    cout<< "Vase nova zivoty: " << rnStats [1] << " Efekt potrva do konce souboje" << endl;
    inve[N-1]= "";
    }
        else if (inve[N-1]== "Blato v korbelu") {
             rnStats [2] = rnStats[2] + 2;
    cout<< "Vas novy utok: " << rnStats [2] << " Efekt potrva do konce souboje" << endl;
    inve[N-1]= "";
        }
    }
    }
}

void Prespani(int stats [],int rnStats []) {
if (rnStats [4] < 1) {
    cout<< "Bohuzel nemate na prespani dost penez a z hostince te vyhodili. \n" << "Musite pokracovat v ceste" << endl;
} else
rnStats [4] = rnStats [4]-1;
rnStats [3] = stats [3];
rnStats [2] = stats [2];
rnStats [1] = stats[1];
cout<< "Zivoty byly doplneny tvym krasnym slofikem v pokoji hostince, a vsechny sramy se zahojily." << endl;
cout<< "Nyni musite pokracovat v ceste."<< endl;
}

int monstrum3 (int rnStats [], int stats [], string inve [], string hlaska, string jmenom, int hp, int ut, string jmenom2, int hp2, int ut2, string jmenom3, int hp3, int ut3){
int utok;
int sance = rand () %2;
int penize = rand() % 11;
int sance2 = rand () %2;
int penize2 = rand() % 11;
int sance3 = rand () %2;
int penize3 = rand() % 11;

cout<< "Po par minutach cesty na tebe z poza kere vyskocily "<< jmenom << " a " << jmenom2<<" a " << jmenom3<< "\n maji " << hp<< " a " << hp2 <<" a " << hp3 << "HP zatimco ty mas " << rnStats[1] << "HP " << endl;
do{
do{
cout<< "Co udelate? \n1. Otevreni inventare \n2. Utok \n3. Pokus o uprch"<< endl;
cin>> utok;
} while (utok >3 || utok <1);
switch (utok) {
case 1:
    inventar(inve, rnStats);
    break;

case 2:
    if (rnStats[3]<1){
        cout<<"Kvuli nedostatku energie neubirate zadne zivoty" << endl;
        } else if (hp<1 && hp2 <1 && hp3 >=1){
        cout<< "Utocis na monstrum" << "\n"<< jmenom3<< " prisel o " << rnStats[2] << "HP." << endl;
        hp3= hp3 - rnStats[2];
        } else if (hp<1 && hp2 >=1){
        cout<< "Utocis na monstrum" << "\n"<< jmenom2<< " prisel o " << rnStats[2] << "HP." << endl;
        hp2= hp2 - rnStats[2];
        } else
        cout<< "Utocis na monstrum" << "\n"<< jmenom << " prisel o " << rnStats[2] << "HP." << endl;
        hp= hp - rnStats[2];
        rnStats[3]-1;
    break;

case 3:
    cout<< "To ted bohuzel nefunguje :C"<< endl;
    break;
}
if (hp>=1 && hp2 >=1 && hp3 >=1){
        rnStats [1] = rnStats [1] - ut;
        cout<< jmenom << " utoci a plyve na tebe kyselé sliny. \n Mas " << rnStats[1] << " HP" << endl;
    } else if (hp<1 && hp2 >=1){
        rnStats [1] = rnStats [1] - ut2;
    cout<< jmenom2 << " utoci a strili na tebe vlastovky. \n Mas " << rnStats[1] << " HP" << endl;
    } else if (hp<1 && hp<2 && hp3 >=1){
        rnStats [1] = rnStats [1] - ut3;
    cout<< jmenom3 << " utoci a prasti je obouskem. \n Mas " << rnStats[1] << " HP" << endl;
    }
} while ((hp>=1 || hp2>=1 || hp3 >=1) && rnStats[1]>=1);
if (rnStats[1]<=0){
        cout<< "Zemrel jsi v boji" << endl;
    exit (0);
}else if (hp<1 && hp2 <1 || rnStats [1] >= 1){
cout<< "Vyhral jsi v boji, gratulace" << endl << endl;
rnStats [2] = stats [2];
rnStats [2]= stats [2];
cout<< "Tve staty se vrátily do normalu" << endl;
if (sance ==1){
rnStats[4]= rnStats[4] + penize;
cout<< "Z monstra " << jmenom << " ti padlo " << penize << " zlatych" << endl;
} if (sance2==1){
cout<< "Z monstra " << jmenom2 << " ti padlo " << penize2 << " zlatych" << endl;
}
if (sance3==1){
cout<< "Z monstra " << jmenom3 << " ti padlo " << penize2 << " zlatych" << endl;
}
}
cout<< "Vas zustatek: " << rnStats [4] << endl <<endl;
}

int monstrum2 (int rnStats [], int stats [], string inve [], string hlaska, string jmenom, int hp, int ut, string jmenom2, int hp2, int ut2){
int utok;
int sance = rand () %2;
int penize = rand() % 11;
int sance2 = rand () %2;
int penize2 = rand() % 11;

cout<< "Po par minutach cesty na tebe z poza kere vyskocily "<< jmenom << " a " << jmenom2<< "\n maji " << hp<< " a " << hp2 << "HP zatimco ty mas " << rnStats[1] << "HP " << endl;
do{
do{
cout<< "Co udelate? \n1. Otevreni inventare \n2. Utok \n3. Pokus o uprch"<< endl;
cin>> utok;
} while (utok >3 || utok <1);
switch (utok) {
case 1:
    inventar(inve, rnStats);
    break;

case 2:
    if (rnStats[3]<1){
        cout<<"Kvuli nedostatku energie neubirate zadne zivoty" << endl;
        } else if (hp<1 && hp2 >=1){
        cout<< "Utocis na monstrum" << "\n"<< jmenom2<< " prisel o " << rnStats[2] << "HP." << endl;
        hp2= hp2 - rnStats[2];
        } else
        cout<< "Utocis na monstrum" << "\n"<< jmenom << " prisel o " << rnStats[2] << "HP." << endl;
        hp= hp - rnStats[2];
        rnStats[3]-1;
    break;

case 3:
    cout<< "To ted bohuzel nefunguje :C"<< endl;
    break;
}
if (hp>=1 && hp2 >=1){
        rnStats [1] = rnStats [1] - ut;
        cout<< jmenom << " utoci a plyve na tebe kyselé sliny. \n Mas " << rnStats[1] << " HP" << endl;
    } else if (hp<1 && hp2 >=1){
        rnStats [1] = rnStats [1] - ut2;
    cout<< jmenom2 << " utoci a strili na tebe vlastovky. \n Mas " << rnStats[1] << " HP" << endl;
    }
} while ((hp>=1 || hp2>=1) && rnStats[1]>=1);
if (rnStats[1]<=0){
        cout<< "Zemrel jsi v boji" << endl;
    exit (0);
}else if (hp<1 && hp2 <1 || rnStats [1] >= 1){
cout<< "Vyhral jsi v boji, gratulace" << endl << endl;
rnStats [2] = stats [2];
rnStats [2]= stats [2];
cout<< "Tve staty se vrátily do normalu" << endl;
if (sance ==1){
rnStats[4]= rnStats[4] + penize;
cout<< "Z monstra " << jmenom << " ti padlo " << penize << " zlatych" << endl;
} if (sance2==1){
cout<< "Z monstra " << jmenom2 << " ti padlo " << penize2 << " zlatych" << endl;
}
}
cout<< "Vas zustatek: " << rnStats [4] << endl <<endl;
}

int monstrum1 (int rnStats [], int stats [], string inve [], string hlaska, string jmenom, int hp, int ut){
int utok;
int sance = rand () %2;
int penize = rand() % 11;
cout<< "Po par minutach cesty na tebe z poza kere vyskocil hrozivý"<< jmenom << "\n ma " << hp << "HP zatimco ty mas " << rnStats[1] << "HP " << endl;
do{
do{
cout<< "Co udelate? \n1. Otevreni inventare \n2. Utok \n3. Pokus o uprch"<< endl;
cin>> utok;
} while (utok >3 || utok <1);
switch (utok) {
case 1:
    inventar(inve, rnStats);
    break;

case 2:
    if (rnStats[3]<1){
        cout<<"Kvuli nedostatku energie neubirate zadne zivoty" << endl;
    } else
    cout<< "Utocis na monstrum" << "\n"<< jmenom<< " prisel o " << rnStats[2] << "HP." << endl;
        hp= hp - rnStats[2];
        rnStats[3]-1;
    break;

case 3:
    cout<< "To ted bohuzel nefunguje :C"<< endl;
    break;
}
if (hp>=1){
rnStats [1] = rnStats [1] - 1;
        cout<< jmenom << " utoci a plyve na tebe kyselé sliny. \n Mas " << rnStats[1] << " HP" << endl;
    }
} while (hp>=1 && rnStats[1]>=1);
if (rnStats[1]<=0){
        cout<< "Zemrel jsi v boji" << endl;
    exit (0);
}else if (hp<1 && rnStats [1] >= 1){
cout<< "Vyhral jsi v boji, gratulace" << endl << endl;
rnStats [2] = stats [2];
rnStats [2]= stats [2];
cout<< "Tve staty se vrátily do normalu" << endl;
if (sance ==1){
rnStats[4]= rnStats[4] + penize;
cout<< "Z monstra ti padlo " << penize << " zlatych" << endl << endl;
cout<< "Vas zustatek: " << rnStats [4] << endl <<endl;
}
}
}

int miniboss (int rnStats [], int stats [], string inve [], string hlaska, string jmenom, int hp, int ut){
int utok;
int penize = rand() % 30;
cout<< "Po par minutach cesty na tebe z poza kere vyskocil hrozivý"<< jmenom << "\n ma " << hp << "HP zatimco ty mas " << rnStats[1] << "HP " << endl;
do{
do{
if (hp>=1){
rnStats [1] = rnStats [1] - ut;
rnStats [2]= rnStats [2] - 1;
        cout<< jmenom << "ty rozskrabal oblicej. \n Mas " << rnStats[1] << " HP a tvuj utok se snizil o 1" << endl;
    }
    cout<< "Co udelate? \n1. Otevreni inventare \n2. Utok \n"<< endl;
cin>> utok;
} while (utok >3 || utok <1);
switch (utok) {
case 1:
    inventar(inve, rnStats);
    break;

case 2:
    if (rnStats[3]<1){
        cout<<"Kvuli nedostatku energie neubirate zadne zivoty" << endl;
    } else
    cout<< "Utocis na monstrum" << "\n"<< jmenom<< " prisel o " << rnStats[2] << "HP." << endl;
        hp= hp - rnStats[2];
        rnStats[3]-1;
    break;

default:
    cout<< "Spatne" << endl;
}
} while (hp>=1 && rnStats[1]>=1);
if (rnStats[1]<=0){
        cout<< "Zemrel jsi v boji" << endl;
    exit (0);
}else if (hp<1 && rnStats [1] >= 1){
cout<< "Vyhral jsi v boji, gratulace" << endl << endl;
rnStats [2] = stats [2];
rnStats [3]= stats [3];
cout<< "Tve staty se vrátily do normalu" << endl;
rnStats[4]= rnStats[4] + penize;
cout<< "Z monstra ti padlo " << penize << " zlatych" << endl << endl;
cout<< "Vas zustatek: " << rnStats [4];
}
}

int pyrocoil (int rnStats [], int stats [], string inve []){
int ut=3;
int hp = 20;
bool ohen;
int kola =1 ;
int utok;
cout<< "Skace na vas Pyrocoil ma " << hp << "HP" << endl;
//kazde kolo 2dm- if hori 3dm-na 2 kola, kazde 4. mf bouchne hp-20 rnstats 1 -15, "Pyrovoil preteka a exploduje!"
do{
do{
cout<< "Co udelate? \n1. Otevreni inventare \n2. Utok \n3. Pokus o uprch"<< endl;
cin>> utok;
} while (utok >3 || utok <1);
switch (utok) {
case 1:
    inventar(inve, rnStats);
    break;

case 2:
    if (rnStats[3]<1){
        cout<<"Kvuli nedostatku energie neubirate zadne zivoty" << endl;
    } else
    cout<< "Utocis, a Pyrocoil prisel o " << rnStats[2] << "HP." << endl;
        hp= hp - rnStats[2];
        rnStats[3]-1;
    break;

case 3:
    cout<< "To ted bohuzel nefunguje :C"<< endl;
    break;
}
if (hp>=1 && kola%4==0) {
    cout<< "Pyrocoil preteka a vybuchuje!" << endl;
    hp= hp - 20;
    rnStats[1]= rnStats[1]-15;
    kola++;
    } else if (ohen=1 &&hp>=1) {
    rnStats [1] = rnStats [1] - 2;
cout<< "Pyrocoil utoci a zapaluje vas. \n Mas " << rnStats[1] << " HP a ubira vam utok" << endl;
kola++;
    } else {
    rnStats [1] = rnStats [1] - 1;
cout<< "Pyrocoil utoci a zapaluje vas. \n Mas " << rnStats[1] << " HP a ubira vam utok" << endl;
ohen =1;
kola++;
    }

} while (hp>=1 && rnStats[1]>=1);
if (rnStats[1]<=0){
        cout<< "Zemrel jsi v boji" << endl;
    exit (0);
}else if (hp<1 && rnStats [1] >= 1){
cout<< "VYHRAL JSTE HRU" << endl << endl;
}
}

void Krcma (int rnStats [], string inve [5]){
int produkt;
bool koupe;
string koupeAN;

cout<< "Vstoupil jsi do maleho domecku uprostred vesnice, kde te ihned uvita urostly drak"<< endl;
cout<< "Zdravim priteli. Co to dnes bude?´"<< endl;
cout<< "Vzhlednes nahoru na hospodskeho a tabuli s produkty ktere prodava"<<endl;
cout<< "1. Bily monster (Pridava +4 ke stamine po dobu jednoho souboje) \n Stoji: 7 zlatych \n\n2. Bagetka z matu (Pridava +5 zivotu)\n Stoji 3 zlate \n\n3. Blato v korbelu (Zvysuje utok o +3 po dobu jednoho souboje) \n Stoji: 5 zlatych \n4. Odejít \n" << endl;

do {
        int m=0;
for (int n=0; n==4; n++) {
    inve [n];
    if (inve[n].empty()){
        m++;
    }
}
int i= 5-m;
int P;
        if (inve [0].empty()){
    P=0;
} else if (inve [1].empty()){
    P=1;
} else if (inve [2].empty()){
    P=2;
} else if (inve [3].empty()){
    P=3;
} else if(inve [4].empty()){
    P=4;
}
cout<< "Co si date? Pta se hospodsky" << endl;
cin>> produkt;
switch (produkt){
case 1:
if (rnStats [4] < 7) {
cout<< "Bez penez to nepujde, kamarade... \n" << endl;
} else {
rnStats [4] = rnStats [4] - 7;
cout<< "Prave jste zakoupili Bilý Monster, gratulujeme!"<< endl;
inve [P]= "Bilý Monster";
i++;
}
    break;

case 2:
if (rnStats [4] < 3) {
cout<< "Bez penez to nepujde, kamarade... \n" << endl;
} else {
rnStats [4] = rnStats [4] - 3;
cout<< "Prave jste zakoupili Bagetku z matu, gratulujeme!"<< endl;
inve [P]= "Bagetku z matu";
i++;
}
    break;

case 3:
if (rnStats [4] < 5) {
cout<< "Bez penez to nepujde, kamarade... \n" << endl;
} else {
rnStats [4] = rnStats [4] - 5;
cout<< "Prave jste zakoupili Blato v korbelu, gratulujeme!"<< endl;
inve [P]= "Blato v korbelu";
i++;
}
break;

case 4:
return;
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

cout<< "\n Vitej ve vesnici " << jmenoV << ", pruzkumniku! \n \n";
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
    srand(time(0));
string hlaska;
int hp, hp2, hp3;
int ut, ut2, ut3;
string jmenom, jmenom2, jmenom3;
string inve [5];
int stats [5];
int rnStats [5];
string jmenoV;

vyberPostavy(stats, rnStats);
napoveda();
jmenoV = "Mývalice";
Vesnice (stats, rnStats, jmenoV, inve);
    jmenom= "Vojtech";
    hp= 4;
    ut=2;
        monstrum1 (rnStats, stats, inve, hlaska, jmenom, hp, ut);
jmenom= "Slavomir";
    hp= 5;
    ut=3;
        monstrum1 (rnStats, stats, inve, hlaska, jmenom, hp, ut);
jmenoV = "Gainovice";
cout<< "Gratulujeme, jste na 2. levelu!! \n Vase staty se zvysili o 3!" << endl;
stats [1]= stats [1] + 3;
stats [2]= stats [2] + 3;
stats [3]= stats [3] + 3;
rnStats [1] = stats [1];
rnStats [2] = stats [2];
rnStats [3]= stats [3];
Vesnice (stats, rnStats, jmenoV, inve);

jmenom= "Honza";
    hp= 7;
    ut=4;
    jmenom2= "Janos";
    hp2= 3;
    ut2=1;
monstrum2 (rnStats, stats, inve, hlaska, jmenom, hp, ut, jmenom2, hp2, ut2);
jmenom= "Milan";
    hp= 7;
    ut=4;
        miniboss (rnStats, stats, inve, hlaska, jmenom, hp, ut);

cout<< "Gratulujeme, jste na 3. levelu!! \n Vase staty se zvysili o 3!" << endl;
stats [1]= stats [1] + 3;
stats [2]= stats [2] + 3;
stats [3]= stats [3] + 3;
rnStats [1] = stats [1];
rnStats [2] = stats [2];
rnStats [3]= stats [3];
jmenoV = "Vysoka nad Napikem";
Vesnice (stats, rnStats, jmenoV, inve);
    jmenom= "Vojtech";
    hp= 4;
    ut=2;
        monstrum1 (rnStats, stats, inve, hlaska, jmenom, hp, ut);

jmenom= "Honza";
    hp= 7;
    ut=4;
    jmenom2= "Janos";
    hp2= 3;
    ut2=1;
monstrum2 (rnStats, stats, inve, hlaska, jmenom, hp, ut, jmenom2, hp2, ut2);
jmenom= "Kamil";
    hp= 7;
    ut=4;
    jmenom2= "Zdeno";
    hp2= 3;
    ut2=1;
monstrum2 (rnStats, stats, inve, hlaska, jmenom, hp, ut, jmenom2, hp2, ut2);

jmenom= "Helmud";
    hp= 15;
    ut=4;
        miniboss (rnStats, stats, inve, hlaska, jmenom, hp, ut);
cout<< "Gratulujeme, jste na 4. levelu!! \n Vase staty se zvysili o 3!" << endl;

stats [1]= stats [1] + 3;
stats [2]= stats [2] + 3;
stats [3]= stats [3] + 3;
rnStats [1] = stats [1];
rnStats [2] = stats [2];
rnStats [3]= stats [3];
jmenoV = "Pribinak-fanbaseovice";
Vesnice (stats, rnStats, jmenoV, inve);

jmenom= "Honza";
    hp= 7;
    ut=4;
    jmenom2= "Janos";
    hp2= 3;
    ut2=1;
monstrum2 (rnStats, stats, inve, hlaska, jmenom, hp, ut, jmenom2, hp2, ut2);
jmenom= "Kamil";
    hp= 7;
    ut=4;
    jmenom2= "Zdeno";
    hp2= 3;
    ut2=1;
monstrum2 (rnStats, stats, inve, hlaska, jmenom, hp, ut, jmenom2, hp2, ut2);

jmenoV = "Krizovice";
Vesnice (stats, rnStats, jmenoV, inve);

jmenom= "Adam";
    hp= 7;
    ut=4;
    jmenom2= "Milos";
    hp2= 3;
    ut2=1;
     jmenom3= "Ales";
    hp3= 5;
    ut3=2;
monstrum3 (rnStats, stats, inve, hlaska, jmenom, hp, ut, jmenom2, hp2, ut2, jmenom3, hp3, ut3);

jmenoV = "Finalovice";
Vesnice (stats, rnStats, jmenoV, inve);

pyrocoil (rnStats, stats, inve);
return 0;
}
