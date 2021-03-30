/**
 * \file      VariableStructuree.h
 * \author    Patrick Etcheverry
 * \date      04 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe VariableStucturee.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe VariableStructuree permettant de représenter
 *             des variables structurées (tableau, enregistrement, objet...) utilisées dans un code. 
 */

#ifndef VARIABLE_STRUCTUREE_H
#define VARIABLE_STRUCTUREE_H

#include "Variable.h"

/** 
 *  \class VariableStructuree
 *  \brief Une classe pour représenter les variables structurées (tableau, enregistrement, objet...)
 *         utilisées dans un code source .
 */
class VariableStructuree
{
public:
/**
 * \brief    Constructeur : construit un objet variable structurée.
 * \param[in] variables la liste des variables composant la variable structurée.  
 */
    VariableStructuree (const Variable*[] variables);


    /**
 * \brief    Indique combien de variables composent la variable structurée.
 * \return   un entier positif ou nul indiquant combien de variables composent la variable structurée.
 */
    unsigned int getNbreComposants ();

    /**
 * \brief    Indique quelles sont les variables composant la variable structurée.
 * \return   une liste de variables.
 */
    Variable* getComposants ();

    /**
 * \brief    Ajoute une variable à la liste des variables composant la variable structurée.
 * \param[in]  variable  La variable à ajouter à la liste des variables composant la variable structurée.
 */
    void addVariable (Variable* variable);

    /**
 * \brief    Supprime une variable à la liste des variables composant la variable structurée.
 * \param[in]  variable  La variable à supprimer de la liste des variables composant la variable structurée.
 */
    void removeVariable (Variable* variable);

private:

    /**
    \var unsigned int nbreVariables
    \brief Le nombre de variables composant la variable structurée.
*/
    unsigned int nbreVariables;

    /**
    \var Variable* variables
    \brief Les variables composant la variable structurée.
*/
    Variable* variables;
};
#endif