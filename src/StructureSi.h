/**
 * \file      StructureSi.h
 * \author    Patrick Etcheverry
 * \date      05 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe StructureSi.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe StructureSi permettant de représenter
 *             des structures conditionnelles de type \c if (sans partie \c else) ou assimilé. 
 */

#ifndef STRUCTURE_SI
#define STRUCTURE_SI

#include "StructureConditionnelle.h"

/** 
 *  \class StructureSi
 *  \brief Une classe pour représenter les structures conditionnelles de type Si sans partie Sinon.
 *         Il s'agit généralement d'une structure \c if sans partie \c else . 
 */
class StructureSi : public StructureConditionnelle
{
public:
/**
 * \brief    Constructeur : construit une structure conditionnelle de type Si.
 * \param[in] conditionSi représente la partie Si de la structure. 
 */
    StructureSi (ConditionSi conditionSi);


    /**
 * \brief    Indique quelle est la condition utilisée dans la structure Si.
 * \return   un objet ConditionSi correspondant à la première partie de la structure Si-Sinon.
 */
    ConditionSi getConditionSi ();


    /**
 * \brief      Définit la partie Si de la structure.
 * \param[in]  conditionSi  un objet ConditionSi représentant la partie Si de la structure.
 */
    void setConditionSi (ConditionSi* conditionSi);


private:
    /**
    \var ConditionSi* conditionSi
    \brief représente la première partie Si de la structure Si-Sinon.
*/
    ConditionSi* conditionSi;
};
#endif