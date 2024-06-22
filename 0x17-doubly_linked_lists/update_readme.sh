#!/bin/bash

# Check if README.md exists
if [ ! -f README.md ]; then
    echo "Enter a header for your README.md:"
    read header
    echo "# $header" > README.md
    echo "" >> README.md
    echo "**This directory contains files that can be tested for singly linked lists.**" >> README.md
    echo "" >> README.md
    echo "Enter the name of your header file:"
    read header_file
    echo ":file_folder: : \`$header_file\` - This is a header file that contains all prototypes for functions written for the project." >> README.md
    echo "" >> README.md
    echo "## Tasks" >> README.md
    echo "" >> README.md
    echo "> [!IMPORTANT]" >> README.md
    echo "> Compile test files with their corresponding main files (e.g 0-test.c 0-main.c) using the following GCC flags:" >> README.md
    echo "" >> README.md
    echo "\`gcc -Wall -Werror -Wextra -pedantic -std=gnu89\`" >> README.md
fi

# Loop until the user decides to stop
while true; do
    echo "What's the task title (or 'q' to quit):"
    read task_num
    if [ "$task_num" = "q" ]; then
        break
    fi
	echo ""
    echo "What's the file name for task $task_num:"
    read file_name
	echo ""
    echo "Enter a short description for the functions in $file_name:"
    read desc
    echo "" >> README.md
    echo "- **$task_num.**" >> README.md
    echo "" >> README.md
    echo "   - :file_folder: : \`$file_name\`: $desc" >> README.md
	echo "$task_num" > .commit_msg
    while true; do
		echo ""
        echo "Do you still want to update the README file again? (yes/no)"
        read answer
        if [ "$answer" = "yes" ]; then
            break
        elif [ "$answer" = "no" ]; then
            exit 0
        else
            echo "Invalid input! Please enter 'yes' or 'no'."
        fi
    done
done
