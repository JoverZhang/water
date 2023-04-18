#!/bin/bash

SEARCH_PATH="$PWD/require:$PWD/test"

export DKM_REQUIRE_SEARCH_PATH="$SEARCH_PATH"

WATER="cmake-*/water"

# std
$WATER require/water/collections/map.water

# tests
$WATER test/case.water
