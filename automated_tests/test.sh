#!/bin/bash

#status='echo -e "exit" | ../42sh'
count=1
status=0
statusgot=0
passed=0
failed=0

while read line
do
    set -- $line
    if [ $1 = "TEST" ]
    then
        if [ $2 = "status" ]
        then
            status=$3
        fi
        read line
        continue
    fi
    eval "$line" > /tmp/sh_test
    statusgot="$?"
    if [ $statusgot -eq $status ]
    then
        echo "test "$count" passed"
        ((passed++))
    else
        echo "test "$count", expected "$status" but "$statusgot" found"
        ((failed++))
    fi
    if [ "$1" ]; then
        ((count++))
    fi
done < tests

echo " Tested: "$count" | Passing "$passed" | Failing "$failed" "
