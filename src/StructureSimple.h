/**
 * \file      StructureSimple.h
 * \author    Patrick Etcheverry
 * \date      08 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe StructureSimple.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe StructureSimple. Il s'agit d'une
 *             classe qui peut aussi bien représenter une structure conditionnelle ou une structure
 *             itérative. Il s'agit ici d'une classe abstraite utilisée uniquement pour faciliter
 *             la modélisation de structures de contrôle imbriquées. 
 */

#ifndef STRUCTURE_SIMPLE_H
#define STRUCTURE_SIMPLE_H

#include "StuctureDeControle.h"

/** 
 *  \class StructureSimple
 *  \brief Une classe pour constuire et réprésenter les structures de contrôle utilisées dans un code. 
 *  \details Il s'agit d'une classe qui peut aussi bien représenter une structure conditionnelle
 *             ou une structure itérative. \n
 *             Il s'agit ici d'une classe abstraite utilisée uniquement pour faciliter
 *             la modélisation de structures de contrôle imbriquées.
 */
class StructureSimple : public StructureDeControle
{
public:
  virtual ~StructureSimple() = 0;
 
protected:
};
#endif