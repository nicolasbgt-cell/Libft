# Libft
_This activity has been created as part of the 42 curriculum by <nbigot>_

## Description
Ce projet vise à coder une bibliothèque C regroupant les fonctions usuelles que nous pourrons utiliser dans nos futurs projets.

This project aims to code a C library regrouping usual functions that we'll be allowed to use in all our future projects.

## Instructions

### Compilation
```bash
git clone <url_du_repo>
cd libft
make
```

### Utilisation
Inclure le header dans ton fichier C :
```c
#include "libft.h"
```
Compiler avec la librairie :
```bash
gcc mon_fichier.c libft.a -o mon_programme
```

### Nettoyage
```bash
make clean    # supprime les fichiers objets
make fclean   # supprime les fichiers objets et libft.a
make re       # recompile tout
```

## Library

La librairie contient 44 fonctions réparties en plusieurs catégories :

### Fonctions de caractères
- `ft_isalpha` — vérifie si le caractère est alphabétique
- `ft_isdigit` — vérifie si le caractère est un chiffre
- `ft_isalnum` — vérifie si le caractère est alphanumérique
- `ft_isascii` — vérifie si le caractère est dans la table ASCII
- `ft_isprint` — vérifie si le caractère est imprimable
- `ft_toupper` — convertit en majuscule
- `ft_tolower` — convertit en minuscule

### Fonctions de mémoire
- `ft_memset` — remplit une zone mémoire avec un octet
- `ft_bzero` — met une zone mémoire à zéro
- `ft_memcpy` — copie une zone mémoire
- `ft_memmove` — copie une zone mémoire en gérant les chevauchements
- `ft_memchr` — cherche un octet dans une zone mémoire
- `ft_memcmp` — compare deux zones mémoire
- `ft_calloc` — alloue et initialise une zone mémoire à zéro

### Fonctions de chaînes
- `ft_strlen` — calcule la longueur d'une chaîne
- `ft_strlcpy` — copie une chaîne avec limite de taille
- `ft_strlcat` — concatène une chaîne avec limite de taille
- `ft_strchr` — cherche un caractère dans une chaîne (depuis le début)
- `ft_strrchr` — cherche un caractère dans une chaîne (depuis la fin)
- `ft_strncmp` — compare deux chaînes sur n caractères
- `ft_strnstr` — cherche une sous-chaîne dans une chaîne
- `ft_strdup` — duplique une chaîne
- `ft_substr` — extrait une sous-chaîne
- `ft_strjoin` — concatène deux chaînes
- `ft_strtrim` — supprime des caractères en début et fin de chaîne
- `ft_split` — découpe une chaîne selon un délimiteur
- `ft_strmapi` — applique une fonction à chaque caractère (retourne une nouvelle chaîne)
- `ft_striteri` — applique une fonction à chaque caractère (modifie en place)

### Fonctions de conversion
- `ft_atoi` — convertit une chaîne en entier
- `ft_itoa` — convertit un entier en chaîne
- `ft_toupper` — convertit un caractère en majuscule
- `ft_tolower` — convertit un caractère en minuscule

### Fonctions d'affichage
- `ft_putchar_fd` — affiche un caractère sur un file descriptor
- `ft_putstr_fd` — affiche une chaîne sur un file descriptor
- `ft_putendl_fd` — affiche une chaîne suivie d'un saut de ligne sur un file descriptor
- `ft_putnbr_fd` — affiche un entier sur un file descriptor

### Fonctions de liste chaînée
- `ft_lstnew` — crée un nouvel élément
- `ft_lstadd_front` — ajoute un élément en tête de liste
- `ft_lstadd_back` — ajoute un élément en fin de liste
- `ft_lstsize` — retourne la taille de la liste
- `ft_lstlast` — retourne le dernier élément
- `ft_lstdelone` — supprime un élément
- `ft_lstclear` — supprime toute la liste
- `ft_lstiter` — applique une fonction à chaque élément
- `ft_lstmap` — applique une fonction à chaque élément et retourne une nouvelle liste

## Resources
1. [C functions explanation](https://koor.fr/C/Index.wp)
2. [42 Cursus Guide](https://42-cursus.gitbook.io/guide)
3. [ASCII Table](https://www.ascii-code.com/fr) et le MAN du terminal
4. [Makefile](https://dev.to/ashcript/comprendre-le-makefile-exemple-avec-le-langage-c-47n9)
5. [Claude AI](https://claude.ai) — utilisé pour comprendre des définitions techniques
   (ex: "concaténer", "caster") et le README