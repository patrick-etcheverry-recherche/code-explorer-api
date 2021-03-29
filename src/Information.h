/**
 * \file      Information.h
 * \author    Patrick Etcheverry
 * \date      04 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe Information.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe Information permettant de représenter
 *             les informations (constantes, variables...) utilisées dans un Code. 
 */

#ifndef INFORMATION_H
#define INFORMATION_H

#include "Code.h"
#include "Traitement.h"
#include "Type.h"
#include "Commentaire.h"

/** 
 *  \class Information
 *  \brief Une classe pour représenter les informations (variables, objets, constantes) 
 *         utilisées dans un un code source.
 */
class Information
{
public:
    /**
 * \brief    Constructeur : construit un objet Information à partir de son nom
 *           et de sa convention de nommage
 * \param[in] nom  Le nom de l'information. \n
 *           Par exemple : "perimètre"
  * \param[in] conventionNommage  La convention de nommage utilisée pour nommer l'information. \n
 *           Par exemple : "camelCase"
 */
    Information (String nom, String conventionNommage);


    /**
 * \brief    Indique le nom de l'information.
 * \return   Une chaine de caractères correspondant au nom de l'information
 */
    String getNom ();


    /**
 * \brief      Définit le nom de l'information.
 * \param[in]  nom  Le nom de l'information sous forme de chaîne de caractères. \n
 */
    void setNom (string nom);


    /**
 * \brief    Indique la convention de nommage utilisée pour nommer l'information.
 * \return   Une chaine de caractères correspondant à la convention de nommage utilisée pour nommer l'information.
 */
    String getConventionNommage ();


    /**
 * \brief      Définit la convention de nommage utilisée pour nommer l'information.
 * \param[in]  convention  La convention de nommage utilisée pour nommer l'information. \n
 */
    void setConventionNommage (string convention);


    /**
 * \brief    Indique le type d'une information (int, String, int[]...).
 * \return   Un objet Type correspondant au type de l'information.
 */
    Type* getType ();


    /**
 * \brief    Définit le type d'une information.
 * \param[in]  type  Le type de l'information. \n
 */
    void setType (Type* type);



    /**
 * \brief    Indique, s'il existe, le commentaire attaché à l'information lors de sa déclaration.
 * \return   Un objet Commentaire correspondant à la description éventuelle de l'information. \n
 *           Si aucun commentaire n'est attaché à la déclaration de l'information, la valeur \c null est retournée.
 */
    Commentaire* getCommentaire ();


    /**
 * \brief    Définit un commentaire associé à la déclaration d'une information.
 * \param[in]  commentaire  Le type de l'information. \n
 */
    void setCommentaire (Commentaire* commentaire);


    /**
 * \brief    Indique le ou les traitements pour lesquels l'information joue le rôle de donnée.
 * \return   Un ensemble d'objets Traitement pour lesquels l'information joue le rôle de donnée.
 *           Si aucun traitement n'utilise cette information en tant que donnée, la valeur \c null est retournée.
 */
    Traitement* getTraitementsEnDonnee ();

    /**
 * \brief    Ajoute un traitement à la liste des traitements qui utilisent l'information en donnée.
 * \param[in]  traitementIn  Le traitement à ajouter à a liste des traitements qui utilisent l'information en donnée. \n
 */
    void addTraitementEnDonnee (Traitement* traitementIn);

    /**
 * \brief    Supprime le traitement de la liste des traitements qui utilisent l'information en donnée.
 * \param[in]  traitement  Le traitement à supprimer de la liste traitements qui utilisent l'information en donnée. \n
 */
    void removeTraitementEnDonnee (Traitement* traitement);


    /**
 * \brief    Indique le ou les traitements pour lesquels l'information joue le rôle de résultat.
 * \return   Un ensemble d'objets Traitement pour lesquels l'information joue le rôle de résultat.
 *           Si aucun traitement ne produit cette information en tant que résultat, la valeur \c null est retournée.
 */
    Traitement* getTraitementsEnResultat ();

    /**
 * \brief    Ajoute un traitement à la liste des traitements qui utilisent l'information en résultat.
 * \param[in]  traitementOut  Le traitement à ajouter à la liste des traitements qui utilisent l'information en résultat. \n
 */
    void addTraitementEnResultat (Traitement* traitementOut);

    /**
 * \brief    Supprime le traitement de la liste des traitements qui utilisent l'information en résultat.
 * \param[in]  traitement  Le traitement à supprimer de la liste traitements qui utilisent l'information en résultat. \n
 */
    void removeTraitementsEnResultat (Traitement* traitement);


    /**
 * \brief    Indique si l'information est une constante.
 * \return   \c true si l'information est une constante, \c false sinon.
 */
    bool estUneConstante ();


    /**
 * \brief    Indique si l'information est un nombre magique (valeur en dur dans le code).
 * \return   \c true si l'information est un nombre magique, \c false sinon.
 */
    bool estUnNombreMagique ();


    /**
 * \brief    Indique si l'information est une variable.
 * \return   \c true si l'information est une variable, \c false sinon.
 */
    bool estUneVariable ();


    /**
 * \brief    Indique si l'information est une variable simple (entier, caractère, booléen...).
 * \return   \c true si l'information est une variable simple, \c false sinon.
 */
    bool estUneVariableSimple ();


    /**
 * \brief    Indique si l'information est une variable structurée (tableau, enregistement, objet...).
 * \return   \c true si l'information est une variable structurée, \c false sinon.
 */
    bool estUneVariableStructuree ();


    /**
 * \brief    Indique si l'information est une variable de type accumulateur.
 * \return   \c true si l'information est un accumulateur, \c false sinon.
 */
    bool estUnAccumulateur ();


    /**
 * \brief    Indique si l'information est un variable de type compteur.
 * \return   \c true si l'information est un compteur, \c false sinon.
 */
    bool estUnCompteur ();


    /**
 * \brief    Indique si l'information est une variable utilisée en tant qu'indice de boucle.
 * \return   \c true si l'information est un indice de boucle, \c false sinon.
 */
    bool estUnIndiceDeBoucle ();


protected:
    /**
 *   \var string nom
 *   \brief Le nom de l'information.  
 */
    string nom;

    /**
 *   \var string conventionNommage
 *   \brief La convention de nommage utilisée pour nommer l'information. \n
 *   \details Cet attribut peut prendre une des valeurs suivantes : \n
      - "camelCase", \n
      - "pascalCase", \n
      - "snakeCase", \n
      - "kebabCase", \n
      - "undefinedStyle" si la convention de nommage ne correspond à aucun des styles précédents.\n \n
      Pour plus d’infos sur les 4 premiers styles : \n
      <https://medium.com/better-programming/string-case-styles-camel-pascal-snake-and-kebab-case-981407998841>
 */
    string conventionNommage;


    /**
 *   \var Type* type
 *   \brief Le type de l'information.
 */
    Type* type;


    /**
 *   \var Commentaire* commentaire
 *   \brief Le commentaire éventuel attaché à la variable lors de sa déclaration.
 */
    Commentaire* commentaire;


    /**
 *   \var Traitement* enDonneeDe
 *   \brief Le ou les traitements pour lesquels l'information joue le rôle de donnée.
 */
    Traitement* enDonneeDe;

    /**
 *   \var Traitement* enResultatDe
 *   \brief Le ou les traitements pour lesquels l'information joue le rôle de résultat.
 */
    Traitement* enResultatDe;

};
#endif