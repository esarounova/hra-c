#include <iostream>
using namespace std;

void vyberPostavy () {
string postava;
string jmeno;
int postava1;


int stats [5] = {1, 5, 3, 7, 0};
cout<< "Dobry den, vitejte v me uzasne gamesce" << endl;
cout<< "Jako prvni si musite vybrat classu vaseho charakteru!" << endl;
cout<< "Mate na vyber z: \n 1. Mag \n 2. Ranger \n 3. Cleric \n 4. Rogue" << endl;

do {
cout<< "Vyberte si postavu 1-4" << endl;
cin>>postava1;

}while(postava1 <=0 || postava1 >=5 );{

switch (postava1){

case 1:
postava="Mag";
break;

case 2:
postava="Ranger";
break;

case 3:
postava ="Cleric";
break;

case 4:
postava= "Rogue";
break;

default:
cout<< "Spatne zadana hodnota!" << endl;
}

if (postava1 < 5 && postava1 >0)
cout<< "Vybrali jste postavu: " << postava << "\n Level:"<< stats[0] << " \n Zivoty:" <<stats[1]<< "\n Utok:" << stats[2]<< "\n Mana:" << stats[3] << " \n Zlato:" << stats[4] << endl;
}
}

int main (){
vyberPostavy();

return 0;
}

