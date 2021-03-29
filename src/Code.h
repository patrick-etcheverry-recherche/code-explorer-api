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
 * \brief    Identifie le nombre de librairies utilisées dans le code.
 * \return   Un entier positif ou nul indiquant le nombre de librairies utilisée dans le code.
 */
    unsigned short int getNbreLibrairies();

/**
 * \brief    Identifie toutes les librairies utilisées dans le code source.
 * \return   Un tableau d'objets Librairie représentant tous les librairies utilisées dans le code. \n
 *           Le tableau retourné peut être vide si aucune librairie n'est utilisée dans le code.
 */
    Librairie* getLibrairies();

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
 * \brief    Identifie le nombre d'informations utilisées dans le code.
 * \param[in]  typeInformation  Désigne le type d'information à compter. 
 *             Les valeurs possibles pour ce paramètre sont : \n
 *             - "all" pour compter toutes les informations ;  \n
 *             - "const" pour compter uniquement les constantes; \n
 *             - "magic" pour compter uniquement les nombres magiques; \n
 *             - "var" pour compter uniquement les variables; \n
 *             - "simpleVar" pour compter uniquement les variables simples; \n
 *             - "composedVar" pour compter uniquement les variables structurées;    \n 
 *             - "accu" pour compter uniquement les variables de type accumulateur;  \n
 *             - "count" pour compter uniquement les variables de type compteur; \n
 *             - "index" pour compter uniquement les variables de type indice de boucle.  
 * \return   Un entier positif ou nul indiquant le nombre de d'informations utilisée dans le code.
 */
    unsigned short int getNbreInformations(string typeInformation);

/**
 * \brief    Identifie les informations utilisées dans le code source.
 * \details  Les informations identifiées peuvent être de tout type : il peut s'agir \n
 *           variables, de constantes, de compteurs, d'indice de boucles etc.
  * \param[in]  typeInformation  Désigne le type d'information à récupérer. 
 *             Les valeurs possibles pour ce paramètre sont : \n
 *             - "all" pour récupérer toutes les informations ; \n
 *             - "const" pour récupérer uniquement les constantes; \n
 *             - "magic" pour récupérer uniquement les nombres magiques; \n
 *             - "var" pour récupérer uniquement les variables; \n
 *             - "simpleVar" pour récupérer uniquement les variables simples; \n
 *             - "composedVar" pour récupérer uniquement les variables structurées;  \n   
 *             - "accu" pour récupérer uniquement les variables de type accumulateur;  \n
 *             - "count" pour récupérer uniquement les variables de type compteur; \n
 *             - "index" pour récupérer uniquement les variables de type indice de boucle. 
 * \return   Un tableau d'objets Information représentant toutes les informations utilisées dans le code
 *           ou uniquement celles d'un certain type. \n
 *           Le tableau retourné peut être vide si aucune information du type demandé n'est utilisée dans le code.
 */

    Information* getInformations(string typeInformation);

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
 * \brief    Identifie le nombre de traitements utilisés dans le code.
 * \param[in]  typeTraitement  Désigne le type de traitement à compter. 
 *             Les valeurs possibles pour ce paramètre sont : \n
 *             - "all" pour compter tous les traitements mis en place dans le code ; \n
 *             - "simple" pour compter uniquement les traitements simples; \n
 *             - "composed" pour compter uniquement les traitements composés; \n
 *             - "in" pour compter uniquement les traitements de type "entrée"; \n
 *             - "out" pour compter uniquement les traitements de type "sortie"; \n
 *             - "calc" pour compter uniquement les traitements de type "calcul".
 * \return   Un entier positif ou nul indiquant le nombre de traitements du type demandé.
 */
    unsigned short int getNbreTraitements(string typeTraitement);


/**
 * \brief    Identifie touts les traitements utilisés dans le code source.
 * \details  Les traitements identifiés peuvent être de tout type : il peut s'agir \n
 *           de procédures, de fonctions, voire de blocs de code nommés via un commentaire
 * \param[in]  typeTraitement  Désigne le type de traitement à récupérer. 
 *             Les valeurs possibles pour ce paramètre sont : \n
 *             - "all" pour récupérer tous les traitements mis en place dans le code ; \n
 *             - "simple" pour récupérer uniquement les traitements simples; \n
 *             - "composed" pour récupérer uniquement les traitements composés; \n
 *             - "in" pour récupérer uniquement les traitements de type "entrée"; \n
 *             - "out" pour récupérer uniquement les traitements de type "sortie"; \n
 *             - "calc" pour récupérer uniquement les traitements de type "calcul".
 * \return   Un tableau d'objets Traitement représentant tous les traitements mis en place dans le code. \n
 *           Le tableau retourné peut être vide si aucun traitement n'est défini dans le code.
 */
    Traitement* getTraitements(string typeTraitement);


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
 * \brief    Identifie le nombre de traitements utilisés dans le code.
  * \param[in]  typeCommentaire  Désigne le type de commentaire à compter. 
 *             Les valeurs possibles pour ce paramètre sont : \n
 *             - "all" pour récupérer tous les commentaires présents dans le code ; \n
 *             - "code" pour récupérer uniquement le commentaire global attaché en entête du code; \n
 *             - "information" pour récupérer uniquement les commentaires associés à des informations; \n
 *             - "traitement" pour récupérer uniquement les commentaires associés à des traitements.
 * \return   Un entier positif ou nul indiquant le nombre de commentaires du type demandé.
 */
    unsigned short int getNbreCommentaires(string typeCommentaire);


/**
 * \brief    Identifie touts les commentaires utilisés dans le code source.
 * \details  Les commentaires identifiés peuvent être de tout type : il peuvent 
 *           porter sur des informations, sur des traitements ou sur le code dans sa globalité.
  * \param[in]  typeCommentaire  Désigne le type de commentaire à récupérer. 
 *             Les valeurs possibles pour ce paramètre sont : \n
 *             - "all" pour récupérer tous les commentaires présents dans le code ; \n
 *             - "code" pour récupérer uniquement le commentaire global attaché en entête du code;\n
 *             - "information" pour récupérer uniquement les commentaires associés à des informations;\n
 *             - "traitement" pour récupérer uniquement les commentaires associés à des traitements.
 * \return   Un tableau d'objets Commentaire représentant tous les commentaires insérés dans le code. \n
 *           Les commentaires sont ordonnés selon leur ordre d'apparition dans le code.
 *           Le tableau retourné peut être vide si aucun commentaire n'est défini dans le code.
 */
    Commentaire getCommentaires(string typeCommentaire);


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