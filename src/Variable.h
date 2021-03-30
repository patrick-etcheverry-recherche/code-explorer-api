/**
 * \file      Variable.h
 * \author    Patrick Etcheverry
 * \date      07 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe Variable.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe Variable. Il s'agit d'une
 *             classe abstraite utilisée pour représenter par la suite les variables structurées. 
 */

#ifndef VARIABLE_H
#define VARIABLE_H

#include "Information.h"


/** 
 *  \class Variable
 *  \brief Une classe pour constuire et réprésenter les variables utilisées dans un code. 
 */
class Variable : public Information
{
public:
    /**
 * \brief    Indique si la variable est initialisée.
 * \return   \c true si la variable est initialisée, \c false sinon.
 */
    virtual bool estInitialisee() = 0; // fonction virtuelle pure
};
#endif