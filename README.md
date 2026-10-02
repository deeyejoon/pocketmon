### Pokémon OOP Battle Simulator

A small Pokémon-inspired battle simulator I built to practice **object-oriented programming and design**.

The project uses a base `Pokemon` class, with individual Pokémon implemented as child classes. It currently includes a limited selection of Pokémon, roughly one for each type.

## How It Works

- Choose 3 Pokémon for your team
- Battle against another team
- Each Pokémon has its own type, stats, and behavior
- Pokémon share common functionality through the parent `Pokemon` class

## Purpose

The main goal of this project was to get more comfortable with:

- Classes and objects
- Inheritance
- Polymorphism
- Encapsulation
- Designing relationships between objects

## Design

The current structure relies heavily on inheritance:

```text
Pokemon
├── FirePokemon
├── WaterPokemon
├── GrassPokemon
└── ...
```

Individual Pokémon then extend the shared Pokémon behavior.

I'm also interested in refactoring the project to use more **composition instead of inheritance**. For example, abilities, types, stats, and moves could potentially become separate objects that a Pokémon contains rather than behavior being defined mainly through subclasses.

That would make this project a useful way to compare different OOP design approaches and see where inheritance and composition each make sense.

## Status

This is mainly a learning project rather than a complete Pokémon recreation. The Pokémon roster and battle mechanics are intentionally limited while I focus on the underlying object-oriented design.
