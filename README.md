# Wiktoria

This project was created by a small team using Unreal Engine 5.6, with multiplayer networking built using Unreal’s built-in replication system and the Advanced Sessions plugin. Each team member worked on different features, and my main responsibility was implementing the multiplayer round timer so that all players could see the same countdown during the match. Throughout development we used GitHub for version control, which helped us collaborate effectively and keep the project stable.

Networking Setup and Configuration

The game uses Unreal’s standard client-server model. The server controls all important game logic, and clients receive data from the server through replication. At first, I tried placing the timer in the GameMode Blueprint, but GameMode only exists on the server. Because clients cannot access GameMode directly, they could not display the timer correctly.

To fix this, I moved the timer into a custom GameState Blueprint called BP_ThirdPersonGameState. GameState exists on both the server and all clients, and it is designed to store important game-wide variables. I created a float variable called RoundTimeRemaining, set its default value to 60 seconds, and marked it as Replicated so all players would automatically receive updates from the server.

Timer Logic and Replication

All timer logic runs on the server. When the game starts, the GameState begins a looping timer using the “Set Timer by Function Name” node. This calls a function every second, which subtracts 1 from RoundTimeRemaining. Once the value reaches 0, the GameState triggers the end-of-round logic.

Because the timer variable is replicated, every client receives the updated value without extra code. On the HUD side, each player’s UI simply reads the value from the GameState every frame and displays it. This guarantees that even late-joining players instantly see the correct remaining time.

Player Connections and Replicated Features

Players connect using the Advanced Sessions plugin, which makes hosting and joining sessions easier through Blueprint nodes. After joining, the server sends the full GameState to each client. This includes the timer and any other important round data.

The main replicated feature I implemented was the countdown timer, but the system can easily be expanded to include more shared match information like scores or round phases.

Tools and Frameworks Used

The project relied on several tools:

Unreal Replication System: Used for keeping gameplay variables synchronized across the network.

Advanced Sessions Plugin: Made session creation and joining simpler and more reliable.

Blueprints: All networking, timer logic, and UI functions were created using Blueprint visual scripting.

UMG: Used to build the HUD that displays the timer.

GitHub: Our team used GitHub as version control to share progress, create branches, review changes, and avoid overwriting each other’s work.

Collaboration and Playtesting

Team collaboration happened through GitHub and frequent testing sessions. We used Unreal’s “Play as Client/Server” mode and also tested using standalone builds connected through Advanced Sessions. These tests helped us confirm that replication worked correctly and that all players saw consistent results. GitHub made collaboration smooth, especially when merging different gameplay systems together.

## Gameplay Preview

![Timer GIF](Assets/MultiplayerTimer.gif)

![Timer Screenshot](Assets/MultiplayerTimer.png)



Declared Assets:
Chat GPT used for summarising work