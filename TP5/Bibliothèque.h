#ifndef Biblioth�que_h
#define Biblioth�que_h

#include <vector>

#include "Adherent.h"
#include "Document.h"


class Biblioth�que {

 public:

    virtual void ajouterAdherent();

    virtual void enleverAdherent();

    virtual void ajouterDocument();

 public:

    /**
     * @element-type Adherent
     */
    std::vector< Adherent > myAdherent;

    /**
     * @element-type Document
     */
    std::vector< Document > myDocument;
};

#endif // Biblioth�que_h
