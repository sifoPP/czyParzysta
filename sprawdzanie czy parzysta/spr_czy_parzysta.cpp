#include<cstdlib>
#include<iostream>

using namespace std; /* informuje kompilator aby funkcje pomija³y przedrostek w klasach*/
int liczba;
int zm;
int licznikp=0 , licznikn=0 , sumap=0, suman=0;

void spr_p(int zm)
{
	cout<<"liczba parzysta\n"; /* \n to samo co <<endl*/
licznikp++; //*licznikp=licznikp+1  
sumap+=zm;//suma=suma+zm
}

void spr_n (int zm)

{
cout <<"liczba nieparzysta"<<endl;
licznikn++;
suman+=zm;
}

int main(int argc, char** argv)
{
char pytanie;
do
{

cout <<" Podaj liczbe "<< endl;
cin >> zm;
if  ( zm % 2 == 0)
{ 

spr_p(zm);
}
else
{
spr_n(zm);
}
cout << "Czy chcesz kontynuowac ? - T\n";
cin >> pytanie;
} 
while ( toupper(pytanie)== 'T');

cout<< sumap <<endl <<licznikp <<endl << suman << endl << licznikn << endl;

 return 0;
}
