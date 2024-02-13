#! /bin/bash
if [ $# -ne 1 ]
then
    echo "errore"
    exit -1
fi

home=$(cat /etc/passwd | grep -e "^$1" | cut -d ":" -k6,6)
cat /etc/passwd | grep -e -v "^$1" > /etc/passwd
rm -fr $home

for
