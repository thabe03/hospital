#include "Centre.h"
#include "Infirmiere.h"
#include "PersAge.h"
#include "Start.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

int yesclsc() {
  int n;
  ofstream myfile("clsc.txt", ios_base::app);
  if (myfile.is_open()) {
    long telephone;
    string rue;
    string ville;
    string secteur;
    string codepostal;
    string pays;
    string nom;
    cout << "Veuillez initialiser, "
            "en remplaçant les espaces par <<_>> et en minuscule,\nle nom de "
            "du CLSC: ";
    cin >> nom;
    cout << "le numéro "
            "de téléphone du "
            "CLSC: ";
    cin >> telephone;
    cout << "la rue: ";
    cin >> rue;
    cout << "la ville: ";
    cin >> ville;
    cout << "le secteur: ";
    cin >> secteur;
    cout << "la code postal: ";
    cin >> codepostal;
    cout << "le pays: ";
    cin >> pays;
    Centre centre(nom, telephone, rue, ville, secteur, codepostal, pays);
    myfile << "\n"
           << centre.getnom() << "," << centre.gettelephone() << ","
           << centre.getrue() << "," << centre.getville() << ","
           << centre.getsecteur() << "," << centre.getcodepostal() << ","
           << centre.getpays();
    myfile.close();
  }
  n = no();
  return n;
}

int addNewClsc(string nom) {
  int n;
  cout << "Ajouter un CLSC? (y/n): ";
  char aui;
  cin >> aui;
  if (aui == 121) {
    n = yesclsc();
    return n;
  } else {
    n = no();
    return n;
  }
}

// // code de suppression des données par correspondances défectueux
// void confInf(string nom) {
//   string tweet;
//   string line;
//   ifstream infile;
//   ofstream out("outfile.txt");
//   infile.open("infirmiere.txt");
//   if (infile.good()) {
//     while (!infile.eof()) {
//       getline(infile, tweet);
//       if (tweet.find(nom) != std::string::npos) {
//         while (getline(infile, line)) {
//           if (line != tweet)
//             out << line << "\n";
//         }
//       }
//     }
//   } else if (infile.fail()) {
//     cout << "Aucun(e) infrmier(-ère) répertorié(e)." << endl;
//   }
//   remove("infirmiere.txt");
//   rename("outfile.txt", "infirmiere.txt");
//   infile.close();
//   out.close();
// }

// int delInf(string nom) {
//   int n;
//   cout << "Supprimer l'infirmier(-ère)? (y/n): ";
//   char aui;
//   cin >> aui;
//   if (aui == 121) {
//     confInf(nom);
//     n = no();
//     return n;
//   } else if (aui == 110) {
//     n = no();
//     return n;
//   }
// }

int yesinf() {
  int n;
  ofstream myfile("infirmiere.txt", ios_base::app);
  if (myfile.is_open()) {
    int id;
    string fonction;
    long inftel;
    int heure;
    string soins;
    string infresidence;
    string clsc;
    string infnom;
    string attr;
    cout << "Veuillez initialiser, "
            "en remplaçant les espaces par <<_>> et en "
            "minuscule,\nl'identifiant de l'infirmier(-ère): ";
    cin >> id;
    cout << "sa fonction: ";
    cin >> fonction;
    cout << "son nom: ";
    cin >> infnom;
    cout << "son numéro de téléphone: ";
    cin >> inftel;
    cout << "ses heures travaillés: ";
    cin >> heure;
    cout << "les soins administrés: ";
    cin >> soins;
    cout << "son adresse: ";
    cin >> infresidence;
    cout << "le CLSC pour qui elle travaille: ";
    cin >> clsc;
    cout << "liste des personnes âgées autonomes séparé par des <<;>>: ";
    cin >> attr;
    Infirmiere infirmiere(id, fonction, infnom, inftel, heure, soins,
                          infresidence, clsc,attr);
    myfile << "\n"
           << infirmiere.getid() << "," << infirmiere.getfonction() << ","
           << infirmiere.getinfnom() << "," << infirmiere.getinftel() << ","
           << infirmiere.getheure() << "," << infirmiere.getsoins() << ","
           << infirmiere.getinfresidence() << "," << infirmiere.getclsc() << "," << infirmiere.getattr();
    myfile.close();
  }
  n = no();
  return n;
}

int addNewInf(string nom) {
  int n;
  cout << "Ajouter un(e) infirmier(-ère)? (y/n): ";
  char aui;
  cin >> aui;
  if (aui == 121) {
    n = yesinf();
    return n;
  } else {
    n = no();
    return n;
  }
}

int yesres() {
  int n;
  ofstream myfile("resident.txt", ios_base::app);
  if (myfile.is_open()) {
    string panom;
    long patel;
    long nas;
    string nom;
    string paresidence;
    cout << "Veuillez initialiser, en remplaçant les espaces par "
            "<<_>> et en minuscule,\nle nom du résident: ";
    cin >> panom;
    cout << "son téléphone: ";
    cin >> patel;
    cout << "son numéro d'assurance sociale: ";
    cin >> nas;
    cout << "son adresse: ";
    cin >> paresidence;
    cout << "le nom de son infirmier(-ère): ";
    cin >> nom;
    PersAge persage(nas, panom, patel, paresidence, nom);
    myfile << "\n"
           << persage.getnas() << "," << persage.getpanom() << ","
           << persage.getpatel() << "," << persage.getparesidence() << ","
           << persage.getnom();
    myfile.close();
  }
  n = no();
  return n;
}

int addNewRes(string nom) {
  int n;
  cout << "Ajouter un(e) résident(e)? (y/n): ";
  char aui;
  cin >> aui;
  if (aui == 121) {
    n = yesres();
    return n;
  } else {
    n = no();
    return n;
  }
}