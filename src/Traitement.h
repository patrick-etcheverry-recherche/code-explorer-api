/**
 * \file      Traitement.h
 * \author    Patrick Etcheverry
 * \date      04 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe Traitement.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe Traitement permettant de représenter
 *             les traitements mis en place dans un Code. 
 */

#ifndef TRAITEMENT_H
#define TRAITEMENT_H

#include "Code.h"
#include "Information.h"

/** 
 *  \class Traitement
 *  \brief Une classe pour représenter les composants 
 *         d'un code source sous forme d'objets.
 */
class Traitement
{
public:
    /**
 * \brief    Constructeur : construit un objet Traitement à partir de son nom.
 * \param[in] nom  Le nom du traitement. \n
 *           Par exemple : "Calculer périmètre"
 */
    Traitement(String nom);


    /**
 * \brief    Indique le nom du traitement.
 * \return   Une chaine de caractères correspondant au nom du traitement
 */
    String getNom ();


    /**
 * \brief      Définit le nom du traitement.
 * \param[in]  nom  le nom du traitement sous forme de chaîne de caractères. \n
 */
    void setNom (string nom);



protected:
    /**
 *   \var string nom
 *   \brief le nom du traitement.  
 *   \details Le nom du traitement peut prendre plusieurs formes. Il peut s'agir du nom d'une fonction
 *            d'une procédure ou d'une méthode mais le traitement d'un traitement peut également prendre 
 *            la forme d'un commentaire. \n
 *            Exemples : \n
 *            calculerRayon() <-- cas où le traitement est par exemple une fonction
 *            // Calculer le rayon  <-- cas où le traitement est nommé via un commentaire 
 */
    string nom;
};
#endif