/**
 * \file      StructureSiSinon.h
 * \author    Patrick Etcheverry
 * \date      05 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe StructureSiSinon.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe StructureSiSinon permettant de représenter
 *             des structures conditionnelles de type \c if \c - \c else ou assimilé. 
 */

#ifndef STRUCTURE_SI_SINON_H
#define STRUCTURE_SI_SINON_H

#include "StructureConditionnelle.h"

/** 
 *  \class StructureSiSinon
 *  \brief Une classe pour représenter les structures conditionnelles de type Si-Sinon ( \c if \c - \c else ). 
 *         utilisées dans un code source .
 */
class StructureSiSinon : public StructureConditionnelle
{
public:
/**
 * \brief    Constructeur : construit une structure conditionnelle de type Si-Sinon.
 * \param[in] conditionSi représente la partie Si de la structure. 
 * \param[in] conditionSinon représente la partie Sinon de la structure. 
 */
    StructureSiSinon (ConditionSi conditionSi, ConditionSinon conditionSinon);


    /**
 * \brief    Indique quelle est la partie Si de la structure Si-Sinon.
 * \return   un objet ConditionSi correspondant à la première partie de la structure Si-Sinon.
 */
    ConditionSi getConditionSi ();


    /**
 * \brief      Définit la partie Si de la structure Si-Sinon.
 * \param[in]  conditionSi  un objet ConditionSi représentant la partie Si de la structure Si-Sinon.
 */
    void setConditionSi (ConditionSi* conditionSi);


    /**
 * \brief    Indique quelle est la partie Sinon de la structure Si-Sinon.
 * \return   un objet ConditionSinon correspondant à la seconde partie de la structure Si-Sinon.
 */
    ConditionSinon getConditionSinon ();


    /**
 * \brief      Définit la partie Sinon de la structure Si-Sinon.
 * \param[in]  conditionSinon  un objet ConditionSinon représentant la partie Sinon de la structure Si-Sinon.
 */
    void setConditionSinon (ConditionSinon* conditionSinon);




private:
    /**
    \var ConditionSi* conditionSi
    \brief représente la première partie Si de la structure Si-Sinon.
*/
    ConditionSi* conditionSi;

    /**
    \var ConditionSinon* conditionSinon
    \brief représente la deuxième partie de la structure Si-Sinon.
*/
    ConditionSinon* conditionSinon;
};
#endif