/**
 * \file      NombreMagique.h
 * \author    Patrick Etcheverry
 * \date      07 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe NombreMagique.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe NombreMAgique permettant de représenter
 *             les valeurs "en dur" utilisées dans le code et ne portant aucune signification. 
 */

#ifndef NOMBRE_MAGIQUE_H
#define NOMBRE_MAGIQUE_H

#include "Information.h"


/** 
 *  \class NombreMagique
 *  \brief Une classe pour représenter les nombres magiques utilisés dans un code. 
 */
class NombreMagique : public Information
{
public:
/**
 * \brief    Constructeur : construit un objet nombre magique.
 * \param[in] valeur  La valeur du nombre magique.
 */
    NombreMagique (void* valeur);


    /**
 * \brief    Indique la valeur du nombre magique.
 * \return   La valeur du nombre magique.
 */
    void* getValeur ();


    /**
 * \brief      Définit la valeur du nombre magique.
 * \param[in]  valeur  La valeur du nombre magique.
 */
    void setValeur (void* valeur);

private:
    /**
    \var void* valeur
    \brief la valeur du nombre magique.
*/
    void* valeur;
};
#endif