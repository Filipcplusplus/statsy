#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>

using namespace std;
int i=0;

enum wydarzenie {Blok, za2, za3};


struct akcja
{
	int zawodnik;
	string czas;
	enum wydarzenie zmeczu;
};

akcja akcja[500];
void Dodaj(enum wydarzenie costam)
{
  system("cls");
  cout <<"\n\n\t\tZawodnik : ";
  cin >>akcja[i].zawodnik;
  cout <<"\n\n\t\tCzas : ";
  cin >>akcja[i].czas;
  akcja[i].zmeczu = costam ;
  i++;
}

void Zapisz()
{
  ofstream plik("staty.txt",ios::trunc);
  plik <<i<<"\n";

  for (int j = 0; j < i; j++)
  {
    plik <<akcja[j].zawodnik<<"\n";
    plik <<akcja[j].czas<<"\n";
    plik <<akcja[j].zmeczu<<"\n";
  }
  system("cls");
  cout <<"\n\n\t\tDane zostaly zapisane! \n\n\t\t";

}

int main()
{
char wybor;
for(;;)
{

    cout<<endl;
    cout << "Wybierz akcjê" << endl;
    cout << "-----------------" << endl;
    cout << "1. Blook" << endl;
    cout << "2. Rzut za 2 punkty" << endl;
    cout << "3. Rzut za 3 punkty" << endl;
    cout << "4. Koniec" << endl;



    cout << endl;
    wybor=getch();

    switch(wybor)
    {
    case '1':
        Dodaj(Blok);
    break;

    case '2':
        Dodaj(za2);
    break;

    case '3':
        Dodaj(za3);
    break;

    case '4':
            Zapisz();
            exit(0);
    break;

    default: cout<<"Nie ma takiej akcji";
    }
    getchar();
    system("cls");
}
    return 0;
}
