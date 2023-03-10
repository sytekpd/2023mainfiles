#!/bin/bash

current_path=$(pwd)

echo -e "\nBuild Mode"
echo -e "Compiling - flags: enable; norminette: enable.\n"

norminette -R CheckForbiddenSourceHeader
cc -Wall -Wextra -Werror ${current_path}/main**.c ${current_path}/ft_*.c && ${current_path}/a.out