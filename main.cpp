#include <iostream>

using namespace std;

int main()
{
 
  int teaspoons, tablespoons, cups, quarts;

  cout << "enter teaspoons" << endl;
  cin >> teaspoons;
 
  tablespoons = teaspoons / 3;
  teaspoons = teaspoons % 3;

  cups = tablespoons / 16;
  tablespoons = tablespoons % 16;

  quarts = cups / 4;
  cups = cups % 4;

  cout << quarts << " quarts: "<< cups << " cups: " << tablespoons <<  " tablespoons: " << teaspoons << " teaspoons: " << endl;
  
 
}