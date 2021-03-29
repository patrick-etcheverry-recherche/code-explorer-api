/**
 * \file      Commentaire.h
 * \author    Patrick Etcheverry
 * \date      04 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe Commentaire.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe Commentaire permettant de représenter
 *             les commentaires mis en place dans un code. 
 */

#ifndef COMMENTAIRE_H
#define COMMENTAIRE_H

#include "Information.h"
#include "Traitement.h"
#include "Code.h"


/** 
 *  \class Commentaire
 *  \brief Une classe pour représenter les commentaires 
 *         présents dans un code source .
 */
class Commentaire
{
public:
/**
 * \brief    Constructeur : construit un objet commentaire.
 * \param[in] contenuCommentaire  Le contenu du commentaire. \n
 *           Par exemple : "Valeur de PI utilisée pour calculer le périmètre du cercle/"
 */
    Commentaire (string contenuCommentaire);


    /**
 * \brief    Indique le contenu du commentaire.
 * \return   Une chaine de caractères correspondant au contenu du commentaire.
 */
    String getContenuCommentaire ();


    /**
 * \brief      Définit le contenu d'un commentaire.
 * \param[in]  contenuCommentaire  une chaîne de caractères représentant le contenu du commentaire.
 */
    void setContenuCommentaire (string contenuCommentaire);



    /**
 * \brief    Indique si le commentaire porte sur le code en général (commentaire situé en entête du code).
 * \return   \c true si le commentaire porte sur le code en général, \c false sinon.
 */
    bool estUnCommentaireSurCode ();

    /**
 * \brief    Indique sur quel code porte le commentaire.
 * \return   Un objet de type Code si le commentaire porte sur un code dans sa globalité, la valeur \c null sinon.
 */
    Code* getCode ();


    /**
 * \brief      Définit sur quel code porte le commentaire (si le commentaire porte sur un code).
 * \param[in]  code  le code sur lequel porte le commentaire. \n
 */
    void setCode (Code* code);




    /**
 * \brief    Indique si le commentaire porte sur une information du code.
 * \return   \c true si le commentaire décrit une information contenu dans le code, \c false sinon.
 */
    bool estUnCommentaireSurInformation ();

    /**
 * \brief    Indique sur quelle information porte le commentaire.
 * \return   Un objet de type Information si le commentaire porte sur une information, la valeur \c null sinon.
 */
    Information* getInformation ();

    /**
 * \brief      Définit sur quelle information porte le commentaire (si le commentaire porte sur une information).
 * \param[in]  information  L'information sur laquelle porte le commentaire. \n
 */
    void setInformation (Information* information);




    /**
 * \brief    Indique si le commentaire porte sur un traitement du code.
 * \return   \c true si le commentaire décrit une traitement implanté dans le code, \c false sinon.
 */
    bool estUnCommentaireSurTraitement ();

    /**
 * \brief    Indique sur quel traitement porte le commentaire.
 * \return   Un objet de type Traitement si le commentaire porte sur un traitement, la valeur \c null sinon.
 */
    Traitement* getTraitement ();

    /**
 * \brief      Définit sur quel traitement porte le commentaire (si le commentaire porte sur un traitement).
 * \param[in]  traitement  Le traitement sur lequel porte le commentaire. \n
 */
    void setTraitement (Traitement* traitement);


private:
    /**
    \var string cheminFichier
    \brief le chemin d'accès au fichier contenant le code source
           Exemple : "c:\dev\exo1\main.cpp"
*/
    string cheminFichier;

    /**
    \var Information* informations
    \brief la liste des informations utlisées dans le code source
*/
    Information* informations;

    /**
    \var Traitement* traitements
    \brief la liste des traitements présents dans le code source
*/
    Traitement* traitements;

};
#endif