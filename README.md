# OOP-PROJET

# Stronghold Kingdom Management

## Overview
Stronghold Kingdom Management is a C++ project that simulates the management of a medieval kingdom. Players take on the role of a ruler, making decisions to manage resources, population, army, economy, and leadership stability. The game features random events that can impact the kingdom, adding an element of unpredictability and challenge.

## Features
- **Resource Management**: Manage food, wood, stone, and iron to sustain your kingdom.
- **Population Dynamics**: Track and manage peasants, merchants, and nobles, each with unique behaviors and needs.
- **Army Management**: Recruit, train, and pay soldiers to maintain a strong defense.
- **Economic System**: Collect taxes, manage treasury, and handle inflation to keep your economy stable.
- **Banking System**: Take loans, repay them, and deal with corruption and audits.
- **Random Events**: Face unpredictable events like famines, plagues, floods, and revolts that test your leadership.
- **Save/Load Functionality**: Save your progress and load it later to continue your rule.

## Classes and Components
- **SocialClass**: Base class for different social classes (Peasant, Merchant, Noble).
- **Resources**: Manages kingdom resources (food, wood, stone, iron).
- **Population**: Tracks population stats, births, deaths, and illnesses.
- **Army**: Handles recruitment, training, morale, and corruption of soldiers.
- **Economy**: Manages treasury, taxes, and inflation.
- **Leadership**: Tracks ruler name and stability, with coup attempts based on army morale.
- **Bank**: Handles loans, repayments, and corruption levels.
- **KingdomEvent**: Manages random events that affect the kingdom.
- **GameState**: Handles saving and loading game progress.

## How to Run
1. **Prerequisites**: Ensure you have a C++ compiler (e.g., GCC, Clang) installed on your system.
2. **Compilation**: Compile all `.cpp` files together. For example:
   ```bash
   g++ Main.cpp Bank.cpp Population.cpp Leadership.cpp Economy.cpp Resources.cpp Events.cpp Army.cpp SocialClass.cpp Gamestate.cpp -o Stronghold



3. **Execution**: Run the compiled executable:
   ```bash
   ./Stronghold
   ```

## Gameplay Instructions
1. **Initialization**: Enter your ruler's name and start with initial resources.
2. **Main Menu**: Choose from various options to manage your kingdom:
   - View Kingdom Status
   - Manage Army (recruit, train, feed, pay soldiers)
   - Manage Population & Resources (build housing, gather resources)
   - Adjust Taxes
   - Bank Operations (take loans, repay, conduct audits)
   - Process Next Month (advance time and see monthly changes)
   - Save/Load Game
   - Exit
3. **Monthly Processing**: Each month, resources are consumed, taxes are collected, and random events may occur.
4. **Random Events**: Be prepared for events like famines, plagues, or revolts that require quick decision-making.

## Code Structure
- **Main.cpp**: Entry point of the program, handles the main game loop and menu navigation.
- **Bank.cpp**: Implements banking operations like loans and audits.
- **Population.cpp**: Manages population dynamics and shelter.
- **Leadership.cpp**: Handles ruler stability and coup attempts.
- **Economy.cpp**: Manages treasury, taxes, and inflation.
- **Resources.cpp**: Tracks and manages kingdom resources.
- **Events.cpp**: Handles random events and their effects.
- **Army.cpp**: Manages army recruitment, training, and morale.
- **SocialClass.cpp**: Defines behavior for peasants, merchants, and nobles.
- **Gamestate.cpp**: Implements save and load functionality.
- **Stronghold.h**: Header file containing class declarations and enums.


.
