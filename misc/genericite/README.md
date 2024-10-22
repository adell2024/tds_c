### compilateur > compilation  : gcc app.c -o prog

### préprocesseur > préprocessing (prétraitement) : gcc -E > app.c.E
>>> consultez le contenu de app.c.E

### compléter la définition de la macro-fonction :
>> STACK_PRINT(ident) \
##qui affiche le contenu de la pile sans dépiler ses éléments!
>> 
>> La pile (ou stack) est une structure de données qui fonctionne sur le principe LIFO (Last In, First Out), et il n'est pas censé être possible de parcourir une pile du bas vers le sommet sans dépiler les éléments. L'itération directe à travers les éléments viole l'encapsulation et la nature de la pile, car normalement, on ne peut accéder qu'au sommet de la pile.

### prosposer une macrofonction STACK_PRINT2(ident) en tenant compte de la remarque suivante: 

>> Pour respecter le principe de fonctionnement d'une pile, il faudrait une approche où on dépile les éléments un à un, les affichant au passage. Toutefois, cela vide la pile. Si vous voulez afficher sans altérer l'état de la pile, il faudrait utiliser une copie temporaire.  
