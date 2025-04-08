# PainAuChocolat

## Description

**IMPORTANT** : Ce projet se concentre principalement sur la mise en place d'un workflow GitHub Actions nommé "chocolatine" pour l'intégration continue. L'application d'addition n'est qu'un exemple simple servant à démontrer les fonctionnalités CI/CD.

PainAuChocolat est un projet Epitech qui implémente:
1. Un workflow GitHub Actions complet pour l'intégration continue
2. Une calculatrice d'addition simple en ligne de commande (exemple d'application)

## Workflow GitHub Actions

Le workflow GitHub Actions "chocolatine" est la partie centrale de ce projet. Il automatise:

1. **Vérification du style de code** - Contrôle de la conformité à la norme Epitech
2. **Compilation du projet** - S'assure que le code compile sans erreurs
3. **Tests unitaires** - Exécute les tests avec Criterion
4. **Miroir de repository** - Pousse automatiquement les modifications vers un dépôt miroir

Tout commit ou pull request sur des branches autres que celles commençant par "ga-ignore-" déclenchera automatiquement ce workflow.

## Fonctionnalités de l'application exemple

- Addition de nombres entiers passés en arguments
- Support des nombres négatifs
- Option d'aide (-h)
- Tests unitaires avec Criterion

## Installation

```bash
# Cloner le dépôt
git clone git@github.com:Amayyas/PainAuChocolat.git
cd PainAuChocolat

# Compiler le projet
make
```

## Utilisation

```bash
# Lancer le programme avec des nombres à additionner
./add 5 10 15

# Afficher l'aide
./add -h
```

## Tests

Le projet inclut des tests unitaires utilisant le framework Criterion:

```bash
# Exécuter les tests
make tests_run
```

## Structure du projet

```
.
├── .github
│   └── workflows
│       └── chocolatine.yml   # Configuration CI GitHub Actions (élément principal)
├── main.c                    # Programme exemple d'addition
├── my.h                      # Header file
├── Makefile                  # Fichier de compilation
└── tests
    ├── add_functions.c       # Implémentation des fonctions pour les tests
    └── test_add.c            # Tests unitaires
```

## Intégration Continue

Le projet utilise GitHub Actions pour:
1. Vérifier le style de code (norme Epitech)
2. Vérifier la compilation du programme
3. Exécuter les tests unitaires
4. Pousser automatiquement les modifications vers un dépôt miroir

Pour plus de détails sur la configuration CI, consultez le fichier `.github/workflows/chocolatine.yml`.
