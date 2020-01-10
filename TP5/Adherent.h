#ifndef Adherent_h
#define Adherent_h

#include <vector>


class Bibliothèque;
class Livre;

class Adherent {

 public:

    virtual void emprunterLivre();

    virtual void rendreLivre();

 public:
    String nom;
    String prenom;

 public:

    /**
     * @element-type Bibliothèque
     */
    Bibliothèque *myBibliothèque;

    /**
     * @element-type Livre
     */
    std::vector< Livre* > myLivre;
};

#endif // Adherent_h
