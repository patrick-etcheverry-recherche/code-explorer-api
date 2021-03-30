/**
 * \file      VariableSimple.h
 * \author    Patrick Etcheverry
 * \date      04 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe VariableSimple.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe VariableSimple permettant de représenter
 *             des variables basiques (entier, caractèren, booléen...) utilisées dans un code. 
 */

#ifndef VARIABLE_SIMPLE_H
#define VARIABLE_SIMPLE_H

#include "Variable.h"

/** 
 *  \class VariableSimple
 *  \brief Une classe pour représenter les variables simples (entier, caractèren, booléen...) 
 *         utilisées dans un code source .
 */
class VariableSimple : public Variable
{
public:
/**
 * \brief    Constructeur : construit un objet variable simple.
 * \param[in] estInitialisee indique si la variable est initialisée, à la déclaration ou bien après la déclaration. 
 * \param[in] valDepart indique quelle est la valeur initiale de la variable si une telle valeur est définie. 
 */
    VariableSimple (bool estInitialisee = false, void* valDepart = null);


    /**
 * \brief    Indique si la variable a été initialisée.
 * \return   \c true si la variable a été initialisée, \c false sinon.
 */
    bool getEstInitialisee ();


    /**
 * \brief      Définit si la variable a été initialisée ou pas.
 * \param[in]  estInitialisee  un booléen indiquant si la variable a été initialisée ou pas.
 */
    void setEstInitialisee (bool estInitialisee);


    /**
 * \brief    Indique la valeur initiale de la variable si celle-ci a été initialisée.
 * \return   La valeur initiale de la variable si celle-ci a été initialisée, \c null sinon.
 */
    void* getValeurDepart ();


    /**
 * \brief      Définit la valeur de départ de la variable si celle-ci est initialisée.
 * \param[in]  valDepart  La valeur initiale de la variable si celle-ci est initialisée.
 */
    void setValeurDepart (void* valDepart);


private:
    /**
    \var bool estInitialisee
    \brief Indique si la variable a été initialisée, que ce soit à la déclaration ou suite à la déclaration.
*/
    bool estInitialisee;

    /**
    \var void* valeurDepart
    \brief la valeur de départ de la variable si celle-ci a été initialisée.
*/
    void* valeurDepart;
};
#endif