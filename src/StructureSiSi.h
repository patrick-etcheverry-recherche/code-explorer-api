/**
 * \file      StructureSiSi.h
 * \author    Patrick Etcheverry
 * \date      06 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe StructureSiSi.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe StructureSiSi permettant de représenter
 *             des structures conditionnelles de type \c if \c - \c elsif ou assimilé. 
 */

#ifndef STRUCTURE_SI_SI_H
#define STRUCTURE_SI_SI_H

#include "StructureConditionnelle.h"

/** 
 *  \class StructureSiSi
 *  \brief Une classe pour représenter les structures conditionnelles de type Si-Si ( \c if \c - \c elsif ). 
 *         utilisées dans un code source .
 */
class StructureSiSi : public StructureConditionnelle
{
public:
/**
 * \brief    Constructeur : construit une structure conditionnelle de type Si-Si.
 * \param[in] conditionsSi représente la liste des conditionsSi composant la structure Si-Si. 
 */
    StructureSiSi (ConditionSi*[] conditionsSi);


    /**
 * \brief    Indique le nombre de cas (conditionSi) composant la structure Si-Si.
 * \return   un entier positif correspondant au nombre de ConditionSi composant la structure.
 */
    unsigned int getNbreConditionsSi ();


    /**
 * \brief    Indique quelles sont les ConditionSi utilisées dans structure Si-Si.
 * \return   un tableau d'objets ConditionSi contenant toutes les ConditionSi utilisées dans la structure.
 */
    ConditionSi* getConditionsSi ();

    /**
 * \brief    Ajoute une ConditionSi à la liste des ConditionSi composant la structure Si-Si.
 * \param[in]  conditionSi  La conditionSi à ajouter à la liste des ConditionSi composant la structure Si-Si.
 */
    void addConditionSi (ConditionSi* conditionSi);

    /**
 * \brief    Supprimer une ConditionSi de la liste des ConditionSi composant la structure Si-Si.
 * \param[in]  conditionSi  La conditionSi à supprimer de la liste des ConditionSi composant la structure Si-Si.
 */
    void removeStructure (ConditionSi* conditionSi);



private:
    /**
    \var conditionSi* conditionsSi la liste des ConditionsSi composant la structure Si-Si
    \brief représente toutes les conditionsSi composant la structure Si-Si.
*/
    ConditionSi* conditionsSi;

    /**
    \var unsigned int nbreConditionSi
    \brief représente le nombre de conditionsSi composant la structure Si-Si.
*/
    unsigned int nbreConditionSi;
};
#endif