#!/bin/sh
set -x
./replace main.cpp include "THIS IS A TEST" && diff main.cpp main.cpp.REPLACE
./replace main.cpp main main_crash
./replace non_existant_file nothing NULL
./replace not_enough_arguments
