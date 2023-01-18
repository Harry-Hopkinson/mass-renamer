CC = g++
CXXFLAGS = -std=c++20 -Wall
LDFLAGS = 

# main engine variables
APPNAME = mass-renamer
OUT = bin/mass-renamer.exe

files := ${wildcard src/*.cpp}
files += ${wildcard utils/*.cpp}
files += ${wildcard src/core/*.cpp}
files += ${wildcard src/list/*.cpp}
files += ${wildcard include/*.h}
include = -I.

${APPNAME}:
	${CC} ${include} -o ${OUT} ${files}
	cd bin && ./mass-renamer.exe -l

build:
	${CC} ${include} -o ${OUT} ${files}

clean:
	cd bin && del mass-renamer.exe && mkdir bin
