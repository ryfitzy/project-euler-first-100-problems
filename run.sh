#!/usr/bin/env bash

if [ $# -ne 1 ]
then
echo "USAGE: ./run.sh [PROBLEM_NUMBER]"
exit 1
fi

if [ $1 -lt 0 -o $1 -gt 100 ]
then
echo "ERROR: Number must be between 001 and 100"
exit 1
fi

MAIN_FILE=build/main.cc
EXECUTABLE=build/ProjectEuler
P_NUM=$1

mkdir -p build

touch $MAIN_FILE
echo "// main.cc (generated) " > $MAIN_FILE
echo "#include <chrono>" >> $MAIN_FILE
echo "#include <iostream>" >> $MAIN_FILE
echo "#include \"problem_$P_NUM.h\"" >> $MAIN_FILE
echo "" >> $MAIN_FILE
echo "int main() {" >> $MAIN_FILE
echo "  auto start = std::chrono::high_resolution_clock::now();" >> $MAIN_FILE
echo "  auto ans = problem_$P_NUM::solution();" >> $MAIN_FILE
echo "  auto end = std::chrono::high_resolution_clock::now();" >> $MAIN_FILE
echo "  std::cout << \"Solution: \" << ans << std::endl;" >> $MAIN_FILE
echo "  std::cout << \"Runtime: \" << std::chrono::duration<double, std::micro>(end - start).count() / 1000000.0 << \" seconds\n\";" >> $MAIN_FILE
echo "  return 0;" >> $MAIN_FILE
echo "}" >> $MAIN_FILE

echo "Compiling Problem $P_NUM..."
g++ -g -std=c++17 -I include $MAIN_FILE "src/problem_$P_NUM.cc" "src/toolkit.cc" -o $EXECUTABLE
echo "Compilation Successful! Running executable..."
./$EXECUTABLE
