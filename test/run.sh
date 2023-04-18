#!/bin/bash

export DKM_REQUIRE_SEARCH_PATH="$PWD/require:$PWD/test"

WATER="$1"
FILE="$2"

echo -e "\e[34mRUN TEST: $FILE\e[0m"
$WATER "$FILE"
exit "$?"
