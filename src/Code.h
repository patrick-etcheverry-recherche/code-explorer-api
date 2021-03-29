/**
 * \file      Code.h
 * \author    Patrick Etcheverry
 * \date      02 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe Code.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe Code permettant de représenter
 *             les éléments constituant un code source sous forme d'objets (variables, 
 *             traitements, commentaires, librairies...). 
 */

#ifndef CODE_H
#define CODE_H

#include "Information.h"
#include "Traitement.h"
#include "Commentaire.h"
#include "Librairie.h"

/** 
 *  \class Code
 *  \brief Une classe pour représenter les composants 
 *         d'un code source sous forme d'objets.
 */
class Code
{
public:
/**
 * \brief    Constructeur : charge un code se trouvant au sein d'un fichier.
 * \details  Le fichier contenant le code à charger est défini à partir de son nom système. \n
 *           Le code chargé est analysé et décomposé en objets (Information, Traitement, Commentaire...)
 *           reliés entre eux (tel Commentaire est associé à telle Information, telle Information
 *           intervient dans tel Traitement...)  
 * \param[in] cheminFichier  Le chemin d'accès au fichier contenant le code source. \n
 *           Par exemple : "/home/pierre/prog/helloWorld.php"
 */
    Code (string cheminFichier);

    /**
 * \brief    Indique le chemin d'accès du fichier contenant le code source.
 * \return   Une chaine de caractères correspondant au chemin d'accès du fichier.
 */
    String getCheminFichier ();


    /**
 * \brief      Définit le chemin d'accès du fichier contenant le code source.
 * \param[in]  cheminFichier  une chaîne de caractères représentant le chemin d'accès au fichier contenant le Code.
 */
    void setCheminFichier (string cheminFichier);



/**
 * \brief    Identifie toutes les librairies utilisées dans le code source.
 * \param    critereTri   Critère utilisé pour ordonner les librairies retournées \n
 *           Deux valeurs possibles :
 *           - "alphabetique" pour récupérer les librairies triées de manière croissante par leur nom ;
 *           - "ordreApparition" pour récupérer les librairies triées selon leur ordre d'apparition dans le code.
 * \return   Un tableau d'objets Librairie représentant tous les librairies utilisées dans le code. \n
 *           Le tableau retourné peut être vide si aucune librairie n'est utilisée dans le code.
 */
    Librairie* getLibrairies(string critereTri);

    /**
 * \brief    Ajoute une librairie à la liste des librairies utilisées par le programme.
 * \param[in]  librairie  La librairie à ajouter à la liste des librairies utilisées dans le code. \n
 */
    void addLibrairie (Librairie* librairie);

    /**
 * \brief    Supprime la librairie de la liste des librairies utilisées dans le code.
 * \param[in]  librairie  Le traitement à supprimer de la liste traitements qui utilisent l'information en résultat. \n
 */
    void removeLibrairie (Librairie* librairie);



/**
 * \brief    Identifie toutes les informations utilisées dans le code source.
 * \details  Les informations identifiées peuvent être de tout type : il peut s'agir \n
 *           variables, de constantes, de compteurs, d'indice de boucles etc.
 * \param[in]    critereTri   Critère utilisé pour ordonner les informations retournées \n
 *           Deux valeurs possibles :
 *           - "alphabetique" pour récupérer les informations triées de manière croissante par leur nom ;
 *           - "ordreApparition" pour récupérer les informations triées selon leur ordre d'apparition dans le code.
 * \return   Un tableau d'objets Information représentant tous les informations utilisées dans le code. \n
 *           Le tableau retourné peut être vide si aucune information n'est utilisée dans le code.
 */

    Information* getInformations(string critereTri);

    /**
 * \brief    Ajoute une information à la liste des informations utilisées par le programme.
 * \param[in]  information  L'information à ajouter à la liste des informations utilisées dans le code. \n
 */
    void addInformation (Information* information);

    /**
 * \brief    Supprime l'information de la liste des informations utilisées dans le code.
 * \param[in]  information  L'information à supprimer de la liste informations utilisées dans le code.
 */
    void removeInformation (Information* information);


/**
 * \brief    Identifie touts les traitements utilisés dans le code source.
 * \details  Les traitements identifiés peuvent être de tout type : il peut s'agir \n
 *           de procédures, de fonctions, voire de blocs de code nommés via un commentaire
 * \param[in]    critereTri   Critère utilisé pour ordonner les traitements retournés \n
 *           Deux valeurs possibles :
 *           - "alphabetique" pour récupérer les traitements triés de manière croissante par leur nom ;
 *           - "ordreApparition" pour récupérer les traitements triés selon leur ordre d'apparition dans le code.
 * \return   Un tableau d'objets Traitement représentant tous les traitements mis en place dans le code. \n
 *           Le tableau retourné peut être vide si aucun traitement n'est défini dans le code.
 */
    Traitement* getTraitements(string critereTri);


    /**
 * \brief    Ajoute un traitement à la liste des traitements présents dans le programme.
 * \param[in]  traitement  Le traitement à ajouter à la liste des traitements mise en place dans le code.
 */
    void addTraitement (Traitement* traitement);

    /**
 * \brief    Supprime le traitement de la liste des traitements présents dans le code.
 * \param[in]  traitement  Le traitement à supprimer de la liste traitements présents dans le code.
 */
    void removeTraitement (Traitement* traitement);


/**
 * \brief    Identifie touts les commentaires utilisés dans le code source.
 * \details  Les commentaites identifiés peuvent être de tout type : il peut s'agir \n
 *           de commentaires sur une ligne, sur plusieurs lignes (bloc de commentaires)
 *           ou encore de commentaires structurés à destination d'outils type javadoc ou
 *           Doxygen par exemple.
 * \return   Un tableau d'objets Commentaire représentant tous les commentaires insérés dans le code. \n
 *           Les commentaires sont ordonnés selon leur ordre d'apparition dans le code.
 *           Le tableau retourné peut être vide si aucun commentaire n'est défini dans le code.
 */
    Commentaire getCommentaires();


    /**
 * \brief    Ajoute un commentaire à la liste des commentaires présents dans le programme.
 * \param[in]  commentaire  Le commentaire à ajouter à la liste des commentaires présents dans le code.
 */
    void addCommentaire (Commentaire* commentaire);

    /**
 * \brief    Supprime le commentaire de la liste des commentaires présents dans le code.
 * \param[in]  commentaire  Le commentaire à supprimer de la liste des commentaires présents dans le code.
 */
    void removeCommentaire (Commentaire* commentaire);

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
    Information* traitements;

};
#endif