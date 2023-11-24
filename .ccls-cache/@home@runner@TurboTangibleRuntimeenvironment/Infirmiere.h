#ifndef INFIRMIERE_H_
#define INFIRMIERE_H_
#include "Centre.h"
#include <iostream>
using namespace std;

class Infirmiere {
public:
  Infirmiere(int id = 0, string fonction = "", string infnom = "",
             long inftel = 0, int heure = 0, string soins = "",
             string infresidence = "", string clsc = "", string attr="")
      : id(id), fonction(fonction), infnom(infnom), inftel(inftel),
        heure(heure), soins(soins), infresidence(infresidence), clsc(clsc),
        attr(attr) {}
  int getid() const { return id; }
  void setid(int id) { this->id = id; }
  string getfonction() const { return fonction; }
  void setfonction(string fonction) { this->fonction = fonction; }
  string getinfnom() const { return infnom; }
  void setinfnom(string infnom) { this->infnom = infnom; }
  long getinftel() const { return inftel; }
  void setinftel(long inftel) { this->inftel = inftel; }
  int getheure() const { return heure; }
  void setheure(int heure) { this->heure = heure; }
  string getsoins() const { return soins; }
  void setsoins(string soins) { this->soins = soins; }
  string getinfresidence() const { return infresidence; }
  void setinfresidence(string infresidence) {
    this->infresidence = infresidence;
  }
  string getclsc() const { return clsc; }
  void setclsc(string clsc) { this->clsc = clsc; }
  string getattr() const { return attr; }
  void setattr(string attr) { this->attr = attr; }

private:
  string attr;
  int id;
  string fonction;
  string infnom;
  long inftel;
  int heure;
  string soins;
  string infresidence;
  string clsc;
};

#endif