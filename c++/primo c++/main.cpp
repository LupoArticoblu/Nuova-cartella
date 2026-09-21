//io sta per input output, e stream è un flusso di dati. In questo caso, std::cout è lo stream di output standard, che permette di stampare dati sullo schermo.
#include <iostream>

#include <string>
//libreria di funzioni matematiche
#include <cmath>

//così come in Java, anche in C++ esiste un concetto di namespace, che serve a raggruppare funzioni e variabili. In questo caso, std è il namespace standard della libreria C++.
using namespace std;

int main(){

    
    //fa destra a sinistra: testo, inseriscilo nell'output della console.
    std::cout << "Hello World!" << std::endl;//senza namespace
    
    cout << "Hello World!" << endl;//con namespace
    
    //dichiarazione + assegnazione = inizializzazione
    int era = 0;//variabile
    
    era = 1;//riassegnazione
    
    const int CERA = 50; // costante, scrivila in maiuscolo per convenzione, non può essere modificata
    
    std::string nome = "Lucio";//stringa, tipo di dato per rappresentare testo
    
    //come richiamare una variabile, concetto di centralizzazione
    std::cout << "siamo nella " << era << " era" << std::endl;
    std::cout << "Sono " << nome << " e domani compio " << era << " anno" << std::endl;

    //input utente
    string input;
    std::cout << "Come ti chiami? ";

    std::cin >> input;
    std:: cout << "Ciao " << input << std::endl;

    //operazioni
    int eta = 30;
    eta+= 5;

    std::cout << std::pow(eta, 2) << std::endl; // elevamento a potenza
    std::cout << std::sqrt(eta) << std::endl; // radice quadrata

    //stringhe: sono un insieme di caratteri che formano una o più parole
    string nome = "lucio"; //ho scritto il nome con una lettera minuscola, ma voglio che la prima lettera sia maiuscola. 

    nome[0] = 'L'; //così ho modificato il primo carattere della stringa, che è un array di caratteri, e l'ho cambiato in maiuscolo.


    
    return 0;
}