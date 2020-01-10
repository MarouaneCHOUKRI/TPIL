#ifndef Emprunte_h
#define Emprunte_h

#include "date.h"


class Emprunte {

 public:

    virtual void pronlongerDateRetour();

 public:
    date date_emprunt;
    date date_retour;
};

#endif // Emprunte_h
