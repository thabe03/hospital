#include "Centre.h"
#include "Infirmiere.h"
#include "PersAge.h"
#include "Read.h"
#include "Start.h"
#include <fstream>
#include <iostream>
#include <list>
using namespace std;

int main() {
  int n = no();
  while (n != 4) {
    switch (n) {
    case 1: {
      string nom;
      cout << "Recherche de CLSC par correspondance en remplaçant les espaces par des <<_>> et en minuscule: ";
      cin >> nom;
      n = showClsc(nom);
      break;
    }
    case 2: {
      string nom;
      cout << "Recherche d'infirmier(-ère) par correspondance en remplaçant les espaces par des <<_>> et en minuscule: ";
      cin >> nom;
      n = showInfirmiere(nom);
      break;
    }
    case 3: {
      string nom2;
      cout << "Recherche de résident(e) par correspondance en remplaçant les espaces par des <<_>> et en minuscule: ";
      cin >> nom2;
      n = showResident(nom2);
      break;
    }
    default: {
      n = no();
      break;
    }
    }
  }
  cout << "Vous avez quitté le programme.";
  return 0;
};

// create delete read update
// reste définie dans un .cpp*/
// memcpy(cp, cf, sizeof(cf);