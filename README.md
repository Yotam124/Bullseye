# Bullseye

In this project we will implement the game "Bullseye" which simulates a game with two players when one chooses a string with a certain 
length of numbers from 1 to 9, and the second player to discover the string that the first player chose.
When the length of the string to be detected is up to 4, for a player guessing up to 100 attempts to guess the string, when the length
of the string exceeds 4, the second player has an unlimited number of turns to guess the string.

This project has several departments:

   Chooser types:
      
      1. ConstantChooser - choose one string that does not change.
      2. RandomChooser - choose a randomly modified string.
   
   Guesser types:
   
      1. ConstantGuesser - Guessing the same string every time.
      2. RandomGuesser - Guesses a string that changes randomly.
      
   Calculate - A class in which the algorithm is located in which the guesser is going to find the correct string.
   
   Play - A class that runs the game.
   
   Test - A test class that contains proper checks of the game.
   
   authors: יותם דפנה, תומר חזן, מתיתיהו שטרן
