#!/usr/bin/env bash

BUILD="build"
MAIN_FILE="build/main.cc"
EXECUTABLE="build/ProjectEuler"

mkdir -p $BUILD

read -p "Enter a problem number from 001 - 100: " P_NUM

touch $MAIN_FILE
echo "// main.cc (generated) " > $MAIN_FILE
echo "#include <sys/time.h>" >> $MAIN_FILE
echo "#include <iostream>" >> $MAIN_FILE
echo "#include \"problem_$P_NUM.h\"" >> $MAIN_FILE
echo "" >> $MAIN_FILE
echo "int main() {" >> $MAIN_FILE
echo "  timeval beg, end;" >> $MAIN_FILE
echo "  gettimeofday(&beg, nullptr);" >> $MAIN_FILE
echo "  auto ans = problem_$P_NUM::solution();" >> $MAIN_FILE
echo "  gettimeofday(&end, nullptr);" >> $MAIN_FILE
echo "  const double runtime = end.tv_sec - beg.tv_sec + (end.tv_usec - beg.tv_usec);" >> $MAIN_FILE
echo "  std::cout << \"Solution: \" << ans << std::endl;" >> $MAIN_FILE
echo "  printf(\"Solution Runtime: %f s\n\", runtime / 1000000.0);" >> $MAIN_FILE
echo "  return 0;" >> $MAIN_FILE
echo "}" >> $MAIN_FILE

g++ -std=c++17 -I include $MAIN_FILE "src/problem_$P_NUM.cc" "src/toolkit.cc" -o $EXECUTABLE
./$EXECUTABLE