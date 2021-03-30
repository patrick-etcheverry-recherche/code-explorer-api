/**
 * \file      Constante.h
 * \author    Patrick Etcheverry
 * \date      07 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe Constante.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe Constante permettant de représenter
 *             les types constantes utilisées dans un code. 
 */

#ifndef CONSTANTE_H
#define CONSTANTE_H

#include "Information.h"


/** 
 *  \class Constante
 *  \brief Une classe pour représenter les constantes utilisées dans un code. 
 */
class Constante : public Information
{
public:
/**
 * \brief    Constructeur : construit un objet constante.
 * \param[in] valeur  La valeur de la constante.
 */
    Constante (void* valeur);


    /**
 * \brief    Indique la valeur de la constante.
 * \return   Une valeur correspondant à la valeur de la constante.
 */
    void* getValeur ();


    /**
 * \brief      Définit la valeur de la constante.
 * \param[in]  valeur  une valeur correspondant à la valeur de la constante.
 */
    void setValeur (void* valeur);

private:
    /**
    \var void* valeur
    \brief la valeur de la constante.
*/
    void* valeur;
};
#endif