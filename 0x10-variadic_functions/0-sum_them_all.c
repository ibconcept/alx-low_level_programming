#!/bin/bash

# List of file names to create
files=(
 
0-sum_them_all.c
1-print_numbers.c
2-print_strings.c
3-print_all.c


)

# Create each file with "#!/bin/bash" as the first line
for file in "${files[@]}"; do
    touch "$file"
    echo '#include "main.h"
#include <stdio.h>' > "$file"
    
done
