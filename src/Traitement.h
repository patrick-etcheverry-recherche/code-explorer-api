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
 *  \brief Une classe pour représenter les traitements 
 *         présents dans un code source.
 */
class Traitement
{
public:
    /**
 * \brief    Constructeur : construit un objet Traitement à partir de son nom.
 * \param[in] nom  Le nom du traitement. \n
 *           Par exemple : "Calculer périmètre"
 * \param[in] code  Le code dans lequel le traitement est programmé.
 */
    Traitement(String nom, Code* code);


   /**
 * \brief    Indique le code dans lequel le traitement est mis en place.
 * \return   Un objet code correspondant au code dans lequel le traitement est programmé.
 */
   Code* getCode();

   /**
 * \brief    Définit le code dans lequel le traitement est programmé.
 * \param[in]  code  Le code dans lequel le traitement est mis en place.
 */
   void setCode(Code* code);




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



   /**
 * \brief    Indique la ou les informations nécessaires à l'exécution du traitement.
 * \return   Un ensemble d'objets Information qui jouent le rôle de donnée pour le traitement.
 *           Si aucune information ne joue le rôle de donnée pour ce traitement, la valeur \c null est retournée.
 */
    Information* getDonnees ();

    /**
 * \brief    Ajoute une information à la liste des informations nécessaires pour exécuter le traitement.
 * \param[in]  informationIn  L'information à ajouter à a liste des informations qui jouent le rôle de donnée pour le traitement. \n
 */
    void addDonnee (Information* informationIn);

    /**
 * \brief    Supprime l'information de la liste des informations nécessaires pour exécuter le traitement.
 * \param[in]  information  L'information à supprimer de la liste des informations qui jouent le rôle de donnée pour le traitement. \n
 */
    void removeDonnee (Information* information);


    /**
 * \brief    Indique la ou les informations qui sont nécessaires pour l'exécution du traitement.
 * \return   Un ensemble d'objets Information désignant les informations qui joue le rôle de donnée pour le traitement.
 *           Si aucune information n'est en donnée du traitement, la valeur \c null est retournée.
 */
    Information* getResultats ();

    /**
 * \brief    Ajoute une information à la liste des informations qui sont produites par le traitement.
 * \param[in]  informationOut  L'information à ajouter à la liste des informations qui jouent le rôle de résultat pour le traitement. \n
 */
    void addResultat (Information* informationOut);

    /**
 * \brief    Supprime l'information à la liste des informations qui sont produites par le traitement.
 * \param[in]  information  L'information à supprimer de la liste des informations qui jouent le rôle de résultat pour le traitement. \n
 */
    void removeResultat (Information* information);


    /**
 * \brief    Indique la ou les traitements qui sont exécutés après le traitement.
 * \return   Un ensemble d'objets Traitement désignant les traitements qui s'exécutentaprès le traitement.
 *           Si aucune traitement n'est exécuté après le traitement, la valeur \c null est retournée.
 */
    Traitement* getTraitementsApres ();

    /**
 * \brief    Ajoute un traitement à la liste des traitements qui s'exécutent après le traitement.
 * \param[in]  traitementApres  Le traitement à ajouter à la liste des traitements qui s'exécutent après le traitement. \n
 */
    void addTraitementApres (Traitement* traitementApres);

    /**
 * \brief    Supprime un traitement de la liste des traitements qui s'exécutent après le traitement.
 * \param[in]  traitement  Le traitement à supprimer de la liste des traitements qui s'exécutent après le traitement. \n
 */
    void removeTraitementApres (Traitement* traitement);


    /**
 * \brief    Indique si le traitement est composé ou pas.
 * \return   \c true si le traitement est un traitement composé, \c false si le traitement est un traitement simple.
 */
    bool estCompose ();

    /**
 * \brief    Donne la liste des sous-traitements d'un traitement.
 * \return   Les traitements considérés comme des sous-traitements du traitement.
 *           Si le traitement n'est pas composé, la valeur \c null est retournée.
 */
    Traitement* getSousTraitements ();

    /**
 * \brief    Ajoute un sous-traitement à la liste des sous-traitements d'un traitement.
 * \param[in]  sousTraitement  Le sous-traitement à ajouter à la liste des sous-traitements du traitement. \n
 */
    void addSousTraitement (Traitement* sousTraitement);

    /**
 * \brief    Supprime un sous-traitement de la liste des sous-traitements du traitement.
 * \param[in]  sousTraitement  Le traitement à supprimer de la liste des sous-traitements du traitement. \n
 */
    void removeSousTraitement (Traitement* sousTraitement);


    /**
 * \brief    Indique si le traitement est une entrée.
 * \return   \c true si le traitement est une entrée, \c false sinon.
 */
    bool estUneEntree ();

    /**
 * \brief    Indique si le traitement est une sortie.
 * \return   \c true si le traitement est une sortie, \c false sinon.
 */
    bool estUneSortie ();

    /**
 * \brief    Indique si le traitement est un calcul.
 * \return   \c true si le traitement est un calcul, \c false sinon.
 */
    bool estUnCalcul ();

protected:

    /**
 *   \var Code* code
 *   \brief Le code dans lequel le traitement est programmé.  
 */
    Code* code;

    /**
 *   \var string nom
 *   \brief Le nom du traitement.  
 *   \details Le nom du traitement peut prendre plusieurs formes. Il peut s'agir du nom d'une fonction
 *            d'une procédure ou d'une méthode mais le traitement d'un traitement peut également prendre 
 *            la forme d'un commentaire. \n
 *            Exemples : \n
 *            calculerRayon() <-- cas où le traitement est par exemple une fonction
 *            // Calculer le rayon  <-- cas où le traitement est nommé via un commentaire 
 */
    string nom;


    /**
 *   \var Information* donnees
 *   \brief La liste des informations jouant le rôle de donnée pour le traitement.  
 *   \details Cet attribut représente la liste des informations jouant le rôle de donnée pour le traitement. \n
 *             Une information joue le rôle de donnée pour un traitement si sa valeur est nécessaire pour 
 *            pouvoir exécuter le traitement. 
 */
    Information* donnees;


    /**
 *   \var Information* resultats
 *   \brief La liste des informations produites par le traitement.  
 *   \details Cet attribut représente la liste des informations jouant le rôle de résultat pour le traitement. \n
 *             Une information est un résultat pour un traitement si sa valeur est calculée ou modifiée par le traitement.
 */
    Information* resultats;


    /**
 *   \var Traitement* sontApres
 *   \brief La liste des traitements qui s'exécutent après le traitement.  
 *   \details Cet attribut représente la liste des traitements exécutés après le traitement.
 */
    Traitement* sontApres;

};
#endif