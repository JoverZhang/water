#!/bin/bash

export WATER_HOME="$PWD/require:$PWD/test"

WATER="$1"
FILE="$2"

echo -e "\e[34mRUN TEST: $FILE\e[0m"
$WATER test "$FILE"
exit "$?"
