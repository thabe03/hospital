#ifndef START_H_
#define START_H_
#include <iostream>
using namespace std;

int no() {
  string bienv =
      "Bienvenue sur le système de gestion des infirmiers(-ères)\n1. "
      "Rechercher la fiche d'un CLSC\n2. Rechercher la fiche d'un(e) "
      "infirmier(-ère)\n3. Rechercher la fiche d'un(e) résident(e)\n4. "
      "Quitter\nEntrez un numéro: ";
  cout << bienv;
  int n;
  cin >> n;
  return n;
}

#endif