#include "Infirmiere.h"
#ifndef PERSAGE_H_
#define PERSAGE_H_
#include <iostream>
using namespace std;

class PersAge {
public:
  PersAge(long nas, string panom, long patel, string paresidence, string nom)
      : nom(nom), nas(nas), panom(panom), patel(patel),
        paresidence(paresidence) {}
  long getnas() const { return nas; }
  void setnas(long nas) { this->nas = nas; }
  string getpanom() const { return panom; }
  void setpanom(string panom) { this->panom = panom; }
  long getpatel() const { return patel; }
  void setpatel(long patel) { this->patel = patel; }
  string getparesidence() const { return paresidence; }
  void setparesidence(string paresidence) { this->paresidence = paresidence; }
  string getnom() const { return nom; }
  void setnom(string nom) { this->nom = nom; }

private:
  long nas;
  string panom;
  long patel;
  string paresidence;
  string nom;
};

#endif