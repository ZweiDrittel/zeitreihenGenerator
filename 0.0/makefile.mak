#--------------------------------------------
# makefile zur Erzeugung der .exe des zeitreihenGenerators
#--------------------------------------------
.PHONY: all clean

# Definition der Variablen
CXX := gcc
CXXFLAGS := -std=c99 -c -Wall -IS:\User\Ra\Programme\C\zeitreihenGenerator\0.0\lib\\
LDFLAGS := -g -static
HEADERS := $(wildcard S\:\User\Ra\Programme\C\zeitreihenGenerator\0.0\lib\*.h)
objs := main.o fileOperations.o

all: zeitreihenGenerator_v0-0.exe

# Ziel 1
zeitreihenGenerator_v0-0.exe: $(objs)
	$(CXX) $(LDFLAGS) -o $@ $^

# Ziel 2
main.o: main.c $(HEADERS)
	$(CXX) $(CXXFLAGS) $<

# Ziel 3
fileOperations.o: fileOperations.c 
	$(CXX) $(CXXFLAGS) $<

# Alle *.o Dateien löschen
clean:
	del $(objs)

