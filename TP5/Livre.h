#ifndef Livre_h
#define Livre_h

#include "Journal.h"

class Adherent;

class Livre : public Journal {

 public:

    virtual void empruntable();

 public:
    Boolean disponible;

 public:

    /**
     * @element-type Adherent
     */
    Adherent *1;
};

#endif // Livre_h
