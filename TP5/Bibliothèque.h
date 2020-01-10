#ifndef Bibliothèque_h
#define Bibliothèque_h

#include <vector>

#include "Adherent.h"
#include "Document.h"


class Bibliothèque {

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

#endif // Bibliothèque_h
