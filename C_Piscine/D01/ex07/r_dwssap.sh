cat /etc/passwd | cut -d: -f1 | grep -v "#" | awk 'NR%2==0' | rev | tr '\n' ' ' | sed 's/ /, /g'