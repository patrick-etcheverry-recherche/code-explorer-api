### Présentation du projet
Ce *repository* vise à établir la spécification d'une API capable d'analyser la structure d'un code source. L'objectif est de disposer de fonctionnalités permettant :
- de charger un code source à partir d'un fichier ;
- de décomposer ce code sous forme d'objets représentant la structure du code ;
- d'analyser la structure du code à partir des objets précédemment identifiés.

L'analyse du code source de départ doit permettre d'identifier les éléments utilisés dans le code, les liens entre ces éléments de sorte à produire une représentation objet de la structure du code. Il s'agira par exemple d'être en mesure de reconnaître :
- les variables utilisées ;
- les constantes utilisées ;
- les commentaires mis en place ;
- les liens éventuels entre commentaires et variables / constantes ;
- les structures conditionnelles utilisées et leur type ;
- les éléments consituant une structure conditionnelle (conditions,instructions déclenchées...) ;
- les structures itératives utilisées et leur type ;
- les éléments consituant une structure itérative (indice de boucle, pas, condition d'arrêt...);
- les sous-programmes utilisés ;
- la nature d'un sous-programme (fonction / procédure / méthode) ;
- les paramètres d'un sous-programme ;
- le mode de passage (valeur, référence...) de chaque paramètre ;
- etc, etc. :-)

### Documentation relative au projet
La documentation afférente au projet peut être consultée [sur la page dédiée](https://patrick-etcheverry-recherche.gitlab.io/code-explorer). Elle comporte :
- des éléments de modélisation ;
- la documentation des différentes classes imaginées.



