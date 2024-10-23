### compilateur > compilation  : gcc app.c -o prog

### préprocesseur > préprocessing (prétraitement) : 
>>> gcc -E app.c > app.c.E

>>> consultez le contenu de app.c.E

### compléter la définition de la macro-fonction :
>> STACK_PRINT(ident) \
##qui affiche le contenu de la pile sans dépiler ses éléments!
>> 
>> La pile (ou stack) est une structure de données qui fonctionne sur le principe LIFO (Last In, First Out), et il n'est pas censé être possible de parcourir une pile du bas vers le sommet sans dépiler les éléments. L'itération directe à travers les éléments viole l'encapsulation et la nature de la pile, car normalement, on ne peut accéder qu'au sommet de la pile.

### prosposer une macrofonction STACK_PRINT2(ident) en tenant compte de la remarque suivante: 

>> Pour respecter le principe de fonctionnement d'une pile (LIFO – Last In, First Out), il serait nécessaire de dépiler les éléments un à un, en les affichant au fur et à mesure. Cependant, cette approche videra la pile, car chaque élément est retiré.
>> Si vous souhaitez afficher les éléments sans modifier l'état de la pile, une solution consiste à créer une copie temporaire de la pile. Vous pouvez alors dépiler les éléments de la copie, les afficher, tout en
>> conservant l'intégrité de la pile originale.  
