#ifndef CENTRE_H_
#define CENTRE_H_
#include <iostream>
using namespace std;

class Centre {
public:
  Centre(string nom="", long telephone = 0, string rue = "", string ville = "",
         string secteur = "", string codepostal = "", string pays = "")
      : nom(nom), telephone(telephone), rue(rue), ville(ville),
        secteur(secteur), codepostal(codepostal), pays(pays) {}
  long gettelephone() const { return telephone; }
  void settelephone(long telephone) { this->telephone = telephone; }
  string getnom() const { return nom; }
  void setnom(string nom) { this->nom = nom; }
  string getrue() const { return rue; }
  void setrue(string rue) { this->rue = rue; }
  string getville() const { return ville; }
  void setville(string ville) { this->ville = ville; }
  string getsecteur() const { return secteur; }
  void setsecteur(string secteur) { this->secteur = secteur; }
  string getcodepostal() const { return codepostal; }
  void setcodepostal(string codepostal) { this->codepostal = codepostal; }
  string getpays() const { return pays; }
  void setpays(string pays) { this->pays = pays; }

private:
  string nom;
  long telephone;
  string rue;
  string ville;
  string secteur;
  string codepostal;
  string pays;
};

#endif