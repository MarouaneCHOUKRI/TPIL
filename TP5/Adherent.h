#ifndef Adherent_h
#define Adherent_h

#include <vector>


class Biblioth�que;
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
     * @element-type Biblioth�que
     */
    Biblioth�que *myBiblioth�que;

    /**
     * @element-type Livre
     */
    std::vector< Livre* > myLivre;
};

#endif // Adherent_h
