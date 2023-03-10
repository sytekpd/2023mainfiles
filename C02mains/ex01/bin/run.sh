#!/bin/bash

current_path=$(pwd)

echo -e "\nChaos Mode"
echo -e "Compiling - flags: disabled; norminette: disabled.\n"

cc ${current_path}/main**.c ${current_path}/ft_*.c && ${current_path}/a.out