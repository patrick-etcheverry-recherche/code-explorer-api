/**
 * \file      Type.h
 * \author    Patrick Etcheverry
 * \date      07 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe Type.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe Type permettant de représenter
 *             les types des différentes informations (variables, constantes...) utilisées dans un code. 
 */

#ifndef TYPE_H
#define TYPE_H

#include "Information.h"


/** 
 *  \class Type
 *  \brief Une classe pour représenter le type (entier, caractère...) d'une information. 
 */
class Type
{
public:
/**
 * \brief    Constructeur : construit un objet type.
 * \param[in] nom  Le nom du type. \n
 *           Par exemple : int
 */
    Type (string nom);


    /**
 * \brief    Indique le nom du type du commentaire.
 * \return   Une chaine de caractères correspondant au nom du type.
 */
    string getNomType ();


    /**
 * \brief      Définit le nom d'un type de variable.
 * \param[in]  nom  une chaîne de caractères représentant le contenu du commentaire.
 */
    void setNomType (string nom);

   /**
 * \brief    Indique la ou les informations qui sont de ce type.
 * \return   Un ensemble d'objets Information qui possèdent ce type.
 *           Si aucune information ne possède ce type, la valeur \c null est retournée.
 */
    Information* getInformations ();

    /**
 * \brief    Ajoute une information à la liste des informations ayant ce type.
 * \param[in]  information  L'information à ajouter à a liste des informations possédant ce type.
 */
    void addInformation (Information* information);

    /**
 * \brief    Supprime l'information de la liste des informations ayant ce type.
 * \param[in]  information  L'information à supprimer de la liste des informations possédant ce type.
 */
    void removeInformation (Information* information);

private:
    /**
    \var string nom
    \brief le nom du type
           Exemple : "int"
*/
    string nom;

    /**
    \var Information* informations
    \brief la liste des informations qui sont de ce type
*/
    Information* informations;
};
#endif