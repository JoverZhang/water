#!/bin/bash

export WATER_HOME="$PWD/require:$PWD/test"

WATER="$1"
CMD="$2"
FILE="$3"

echo -e "\e[34mRUN TEST: $FILE\e[0m"
if [ "$CMD" = 'TEST' ]; then
  $WATER test "$FILE"
elif [ "$CMD" = 'RUN' ]; then
  $WATER "$FILE"
else
  echo -e "\e[31mtest/run.sh: unknown command '$CMD\e[0m'"
  exit 1
fi

exit "$?"
