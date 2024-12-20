#include <iostream>
#include "Grafo.cpp" 
int main() { Grafo<int> grafo;
grafo.aggiungiNodo(Capo d’Orlando);
grafo.aggiungiNodo(Brolo); grafo.aggiungiNodo(Gioiosa Marea);
grafo.aggiungiNodo(Sant’Agata);
grafo.aggiungiNodo(Patti);

grafo.aggiungiArco(Capo d’Orlando, Brolo, 10Km);
grafo.aggiungiArco(Capo d’Orlando, Gioiosa Marea, 17km);
grafo.aggiungiArco(Brolo, Sant’Agata, 28km);
grafo.aggiungiArco(Gioiosa Marea, Patti, 13km);
grafo.aggiungiArco(Sant’Agata, Patti, 47km);
grafo.aggiungiArco(Patti, Brolo, 24km);
    grafo.stampa();
std::cout << "È presente il nodo Capo d’Orlando? " << (grafo.verificaNodo(Capo d’Orlando) ? "Sì" : "No") << std::endl;
 std::cout << "È presente un arco tra Capo d’Orlando e Brolo? " << (grafo.verificaArco(Capo d’Orlando, Brolo) ? "Sì" : "No") << std::endl;
    std::cout << "È presente un arco tra Capo d’Orlando e Sant’Agata? " << (grafo.verificaArco(Capo d’Orlando, Sant’Agata) ? "Sì" : "No") << std::endl;
grafo.nodiAdiacenti(Capo d’Orlando);
grafo.rimuoviArco(Capo d’Orlando, Brolo);
std::cout << "Adiacenza dopo la rimozione dell'arco tra Capo d’Orlando e Brolo:" << std::endl;
grafo.stampa();
grafo.rimuoviNodo(Gioiosa Marea);
std::cout << "Adiacenza dopo la rimozione del nodo Gioiosa Marea:" << std::endl;
grafo.stampa();
 grafo.aggiungiNodo(Floresta);
 grafo.aggiungiArco(Patti, Floresta, 36km);
    std::cout << "Adiacenza dopo l'aggiunta di Floresta e dell'arco tra Patti e Floresta:" << std::endl;
grafo.stampa();
    }
    return 0;
}
