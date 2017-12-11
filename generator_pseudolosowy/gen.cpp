
#include<iostream>
#include<cstdlib>
#include<time.h>
#include<stdio.h>

using namespace std;
int liczba, trafienie, licz_prob=0,pocz ,kon,zakres;
int main()
{
cout<<" Od jakiej do jakiej liczby losowac"<<endl ;
cin>>pocz;
cin>>kon;
cout <<" Ok , wytypowalem liczbe "<< endl;
srand(time(NULL));
zakres = kon - pocz +1 ;


liczba = rand()%zakres+pocz;/* losowanie przez system liczby pseldolosowej*/

while(trafienie!=liczba)/* gdy jest trafienie wyswietla info o ilosci prób*/
{
	licz_prob++; /* zliczanie ilosci podanych strza³ów*/
	cout <<" Zgadnij jaka wytypowalem:"<<endl;
	cin >>trafienie;/*przypisanie liczby z klawiatury do zmiennej trafienie*/
	
	if(trafienie ==liczba)
	cout<< "Brawo zgadles za "<<licz_prob<<" razem. "<<endl;
	else if(trafienie <liczba)
	cout<< "Liczba jest niestety za mala"<<endl;
	else if(trafienie >liczba)
	cout<< "Liczba tym razem za duza"<<endl;
		
}

return 0;
}


