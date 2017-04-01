#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;
int i=0;

enum wydarzenie {Blok, za2, za3};

struct akcja
{
	int zawodnik;
	string czas;
	enum wydarzenie zmeczu;
};

akcja akcja [500];
void Dodaj(int akcja)
{
  system("cls");
  cout <<"\n\n\t\tZawodnik : ";
  cin >>akcja[i].zawodnik;
  cout <<"\n\n\t\tCzas : ";
  cin >>akcja[i].czas;
  cout <<"\n\n\t\takcja : ";
  cin >>akcja[akcja].wydarzenie;
  i++;
  cin.ignore();
  cout <<"\n\n\t\tNacisnij enter";
  getchar();
}

void Zapisz()
{
  ofstream plik("baza.txt",ios::trunc);
  plik <<i<<"\n";

  for (int j = 0; j < i; j++)
  {
    plik <<dane[j].zawodnik<<"\n";
    plik <<akcja[j].czas<<"\n";
    plik <<dane[j].wydarzenie<<"\n";
  }
  system("cls");
  cout <<"\n\n\t\tDane zostaly zapisane! \n\n\t\t";
  system("pause");

}

int main(){

Dodaj (1);
Zapisz();

}
