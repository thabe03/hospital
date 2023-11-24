#include "Centre.h"
#include "Create.h"
#include "Infirmiere.h"
#include "Start.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

int showClsc(string nom) {
  int n;
  string tweet;
  ifstream infile;
  infile.open("clsc.txt");
  if (infile.good()) {
    cout << "Correspondance: " << endl;
    while (!infile.eof()) {
      getline(infile, tweet);
      if (tweet.find(nom) != std::string::npos) {
        string answer[7];
        string beautify[7] = {"\nNom: ",     "Telephone: ",   "Rue: ", "Ville: ",
                              "Secteur: ", "Code postal: ", "Pays: "};
        stringstream string_stream(tweet);
        int i = 0;
        if (string_stream.good()) {
          while (string_stream.good()) {
            string a;
            getline(string_stream, a, ',');
            answer[i] = a;
            i++;
          }
          for (i = 0; i < 7; i++) {
            cout << beautify[i] << answer[i] << endl;
          }
        }
      } /* //mal implenté 
      else if(!(tweet.find(nom))){
        cout << "Aucune." << endl;
        break;
      }*/
    }
  } else if (infile.fail()) {
    cout << "Aucun Clsc répertorié." << endl;
  }
  infile.close();
  n = addNewClsc(nom);
  return n;
}

int showInfirmiere(string nom) {
  int n;
  string tweet;
  ifstream infile;
  infile.open("infirmiere.txt");
  if (infile.good()) {
    cout << "Correspondance: " << endl;
    while (!infile.eof()) {
      getline(infile, tweet);
      if (tweet.find(nom) != std::string::npos) {
        string answer[9];
        string beautify[9] = {
            "\nIdentifiant: ",       "Fonction: ", "Nom: ",     "Telephone: ",
            "Heures travaillés: ", "Soins: ",    "Adresse: ", "Nom du CLSC: ", "Liste des personnes âgées autonomes: "};
        stringstream string_stream(tweet);
        int i = 0;
        if (string_stream.good()) {
          while (string_stream.good()) {
            string a;
            getline(string_stream, a, ',');
            answer[i] = a;
            i++;
          }
          for (i = 0; i < 9; i++) {
            cout << beautify[i] << answer[i] << endl;
          }
        }
      }
    }
  } else if (infile.fail()) {
    cout << "Aucun(e) infirmier(-ère) répertorié(e)." << endl;
  }
  infile.close();
  n = addNewInf(nom);
  return n;
}

int showResident(string nom) {
  int n;
  string tweet;
  ifstream infile;
  infile.open("resident.txt");
  if (infile.good()) {
    cout << "Correspondance: " << endl;
    while (!infile.eof()) {
      getline(infile, tweet);
      if (tweet.find(nom) != std::string::npos) {
        string answer[5];
        string beautify[5] = {
            "\nNuméro d'assurance social: ", "Nom: ", "Telephone: ", "Adresse: ",
            "Nom de l'infirmière: "};
        stringstream string_stream(tweet);
        int i = 0;
        if (string_stream.good()) {
          while (string_stream.good()) {
            string a;
            getline(string_stream, a, ',');
            answer[i] = a;
            i++;
          }
          for (i = 0; i < 5; i++) {
            cout << beautify[i] << answer[i] << endl;
          }
        }
      }
    }
  } else if (infile.fail()) {
    cout << "Aucun(e) résident(e) répertorié(e)." << endl;
  }
  infile.close();
  n = addNewRes(nom);
  return n;
}