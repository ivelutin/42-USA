ldapsearch -Q "cn=*bon*" cn | grep "^cn" | wc -l | sed 's/ //g'
