# Projet_Bloc_2_POO Jeu de la vie

Le jeu de la vie est un automate inventé par John Conway en 1970. Le jeu se déroule sur une grille
en 2 dimensions dont les cases sont appelées cellules. Chaque cellule possède un état (vivant ou mort)
et ce dernier varie à chaque itération.

## Règles du jeu

Une cellule morte possédant exactement trois voisines vivantes devient vivante, sinon elle reste morte.

Une cellule vivante possédant deux ou trois voisines vivantes reste vivante, sinon elle meurt.

Ces règles sont modifiables.

## Installation

Pour installer ce jeu de la vie, vous pouvez directement utiliser la commande "git clone" (pour plus d'informations sur git veuillez vous référer à ce guide : https://git-scm.com/) ou télécharger tous les fichiers et les placer dans le même dossier.

Une fois installé, ouvrez le dossier sur Visual Studio Code (ou editeur de texte de votre choix) https://code.visualstudio.com/. 
Veillez à ce que vous ayez g++ installé sur votre machine afin de compiler le code correctement.

Dans le terminal tapez les commandes suivantes :

```bash
g++ -std=c++17 -Wall -Wextra -c *.cpp
```

```bash
g++ -std=c++17 -Wall -Wextra *.o -o "nom de votre choix" -lsfml-graphics -lsfml-window -lsfml-system
```

```bash
./"nom choisit précédement"
```

## Utilisation

Une fois toutes ces instructions réalisées correctement, le programme vous demandera si vous souhaitez sauvegarder vos fichier ou afficher le jeu de la vie à l'écran. Si vous souhaitez afficher, une fenêtre graphique apparaitra avec la première itération du jeu de la vie. Chaque fois que vous fermez la fenêtre graphique, le code passe à l'ittération suivante.

Pour modifier la grille initiale, vous devrez modifier le fichier sous format csv.


## Licence

Libre de droit