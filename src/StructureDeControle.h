/**
 * \file      StructureDeControle.h
 * \author    Patrick Etcheverry
 * \date      08 mars 2021
 * \brief     Spécifie les attributs et méthodes d'une classe StructureDeControle.
 *
 * \details    Ce fichier décrit les caractéristiques d'une classe StructureDeControle. Il s'agit d'une
 *             classe utilisée pour représenter par la suite des structures de contrôle
 *             pouvant être imbriquées. 
 */

#ifndef STRUCTURE_DE_CONTROLE_H
#define STRUCTURE_DE_CONTROLE_H

/** 
 *  \class StructureDeControle
 *  \brief Une classe pour constuire et réprésenter les structures de contrôle utilisées dans un code. 
 */
class StructureDeControle
{
public:
    /**
 * \brief    Indique si la structure de contrôle est une structure imbriquée 
 *           (contenant d'autres structures de contrôle).
 * \return   \c true si la structure de contrôle est une structure imbriquée, \c false sinon.
 */
    bool getEstUneStructureImbriquee(); 

    /**
 * \brief    Indique si la structure de contrôle est une structure conditionnelle.
 * \return   \c true si la structure de contrôle est une structure conditionnelle, \c false sinon.
 */
    bool estUneStructureConditionnelle(); 

    /**
 * \brief    Indique si la structure de contrôle est une structure conditionnelle de type StructureSi.
 * \return   \c true si la structure de contrôle est une structure conditionnelle de type StructureSi, \c false sinon.
 */
    bool estUneStructureSi(); 

    /**
 * \brief    Indique si la structure de contrôle est une structure conditionnelle de type StructureSiSinon.
 * \return   \c true si la structure de contrôle est une structure conditionnelle de type StructureSiSinon, \c false sinon.
 */
    bool estUneStructureSiSinon(); 

    /**
 * \brief    Indique si la structure de contrôle est une structure conditionnelle de type StructureSiSi.
 * \return   \c true si la structure de contrôle est une structure conditionnelle de type StructureSiSi, \c false sinon.
 */
    bool estUneStructureSiSi(); 

    /**
 * \brief    Indique si la structure de contrôle est une structure conditionnelle de type StructureSiSiSinon.
 * \return   \c true si la structure de contrôle est une structure conditionnelle de type StructureSiSiSinon, \c false sinon.
 */
    bool estUneStructureSiSiSinon(); 

    /**
 * \brief    Indique si la structure de contrôle est une structure conditionnelle de type StructureSwitch.
 * \return   \c true si la structure de contrôle est une structure conditionnelle de type StructureSwitch, \c false sinon.
 */
    bool estUneStructureSwitch(); 


    /**
 * \brief    Indique si la structure de contrôle est une structure itérative.
 * \return   \c true si la structure de contrôle est une structure itérative, \c false sinon.
 */
    bool estUneStructureIterative(); 

    /**
 * \brief    Indique si la structure de contrôle est une structure itérative avec nombre de répétition connu.
 * \return   \c true si la structure de contrôle est une structure itérative avec nombre de répétition connu, \c false sinon.
 */
    bool estUneStructureIterativeAvecNbreRepetConnu(); 

    /**
 * \brief    Indique si la structure de contrôle est une structure itérative avec nombre de répétition inconnu.
 * \return   \c true si la structure de contrôle est une structure itérative avec nombre de répétition inconnu, \c false sinon.
 */
    bool estUneStructureIterativeAvecNbreRepetInconnu(); 

    /**
 * \brief    Indique si la structure de contrôle est une structure itérative avec nombre de répétition inconnu
 *           intégrant une condition de continuation ou d'arrêt évaluée au DEBUT de l'itération.
 * \return   \c true si la structure de contrôle est une structure itérative avec nombre de répétition inconnu
 *           intégrant une condition de continuation ou d'arrêt évaluée au DEBUT de l'itération \c false sinon.
 */
    bool estUneIterativeAvecNbreRepetInconnuEtCondAuDebut(); 

    /**
 * \brief    Indique si la structure de contrôle est une structure itérative avec nombre de répétition inconnu
 *           intégrant une condition de continuation ou d'arrêt évaluée à la FIN de l'itération.
 * \return   \c true si la structure de contrôle est une structure itérative avec nombre de répétition inconnu
 *           intégrant une condition de continuation ou d'arrêt évaluée à la FIN de l'itération \c false sinon.
 */
    bool estUneIterativeAvecNbreRepetInconnuEtCondALaFin(); 


    /**
 * \brief    Indique si la structure de contrôle est une structure itérative avec nombre de répétition inconnu
 *           intégrant une condition de continuation ou d'arrêt évaluée au MILIEU de l'itération.
 * \return   \c true si la structure de contrôle est une structure itérative avec nombre de répétition inconnu
 *           intégrant une condition de continuation ou d'arrêt évaluée au MILIEU de l'itération \c false sinon.
 */
    bool estUneIterativeAvecNbreRepetInconnuEtCondAuMilieu(); 

    /**
 * \brief    Indique si la structure de contrôle est une structure itérative avec nombre de répétition inconnu
 *           intégrant plusieurs conditions de continuation ou d'arrêt évaluées à différents moments au cours 
 *           de l'itération.
 * \return   \c true si la structure de contrôle est une structure itérative avec nombre de répétition inconnu
 *           intégrant plusieurs conditions de continuation ou d'arrêt évaluées à différents moments au cours 
 *           de l'itération, \c false sinon.
 */
    bool estUneIterativeAvecNbreRepetInconnuEtCondMultiples(); 

protected:

    /**
 *   \var bool estUneStructureImbriquee
 *   \brief Indique si la structure de contrôle contient d'autres structures de contrôle. 
 */
    bool estUneStructureImbriquee;    
};
#endif