#!/bin/bash

ps aux | awk {'print $8'}|grep -c Z    #This tells the total number of zombies 
kill -9 $(ps -A -o stat,ppid | awk '/[Z]/ {print $2}')  #This finds the PPID of the zombies and "kills" them 
echo ZOMBIE DEAD!
