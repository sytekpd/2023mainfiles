#!/bin/bash

current_path=$(pwd)

echo -e "\nLint Mode"
echo -e "Norminette: enable\nFlags: -R CheckForbiddenSourceHeader\n"

python3 -m c_formatter_42 ft_*.c main**.c
norminette -R CheckForbiddenSourceHeader