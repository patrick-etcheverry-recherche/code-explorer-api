/**
 * \file      StructureConditionnelle.h
 * \author    Patrick Etcheverry
 * \date      05 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe StructureConditionnelle.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe StructureConditionnelle. Il s'agit d'une
 *             classe abstraite qui fait référence à une structure conditionnelle présente dans le code (structure,
 *             \c if , structure \c if \c else , structure \c switch etc.
 */

#ifndef STRUCTURE_CONDITIONNELLE_H
#define STRUCTURE_CONDITIONNELLE_H

#include "StuctureSimple.h"

/** 
 *  \class StructureConditionnelle
 *  \brief Une classe pour constuire et réprésenter les structures conditionnelles présentes dans un code. 
 *  \details Il s'agit d'une classe abstraite qui fait référence à une structure conditionnelle présente 
 *           dans le code (structure \c if , structure \c if \c else , structure \c switch etc.
 */
class StructureConditionnelle : public StructureSimple
{
public:
  virtual ~StructureConditionnelle() = 0;
 
protected:
};
#endif