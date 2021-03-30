/**
 * \file      StructureImbriquee.h
 * \author    Patrick Etcheverry
 * \date      05 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe StructureImbriquee.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe StructureImbriquee permettant de représenter
 *             des structures de contrôle imbriquées (une boucle contenant une structure conditionnelle par exemple). 
 */

#ifndef STRUCTURE_IMBRIQUEE_H
#define STRUCTURE_IMBRIQUEE_H

#include "StructureDeControle.h"

/** 
 *  \class StructureImbriquee
 *  \brief Une classe pour représenter les structures de contrôle imbriquées présentes dans un code.
 *  \details  Cette classe permet de représenter des structures de contrôle imbriquées comme par exemple
 *            une boucle contenant une structure conditionnelle, une boucle contenant une autre boucle, etc. 
 */
class StructureImbriquee : public StructureDeControle
{
public:
/**
 * \brief    Constructeur : construit un objet variable structurée.
 * \param[in] structuresImbriquees la liste des structures de contrôle imbriquées dans la structure.  
 */
    StructureImbriquee (const StructureDeControle*[] structuresImbriquees);


    /**
 * \brief    Indique combien de structures de contrôles sont imbriquées dans la structure.
 * \return   un entier positif ou nul indiquant combien de structures de contrôles composent la structure imbriquée.
 */
    unsigned int getNbreStructuresImbriquees ();

    /**
 * \brief    Indique quelles sont les structures de contrôle composant la structure.
 * \return   une liste de structures de contrôle.
 */
    StructureDeControle* getStructuresImbriquees ();

    /**
 * \brief    Ajoute une structure de contrôle à la liste des structures de contrôle composant la structure.
 * \param[in]  structureDeControle  La structure de contrôle à ajouter à la liste des structures de contrôle
 *             composant la structure.
 */
    void addStructure (StructureDeControle* structureDeControle);

    /**
 * \brief    Supprime une structure de contrôle de la liste des structures de contrôle composant la structure.
 * \param[in]  structureDeControle  La structure de contrôle à supprimer de la liste des structure de contrôle
 *             composant la structure.
 */
    void removeStructure (StructureDeControle* structureDeControle);

private:

    /**
    \var unsigned int nbreStructuresImbriquees
    \brief Le nombre de structures de contrôle imbriquées dans la structure.
*/
    unsigned int nbreStructuresImbriquees;

    /**
    \var StructureDeControle* structuresDeControle
    \brief Les structures de contrôle composant la structure.
*/
    StructureDeControle* structuresDeControle;
};
#endif