# Makefile for Capstone Disassembly Engine

LIBNAME = capstone

disassemble: disassemble.o
	gcc -g $< -O3 -Wall -l$(LIBNAME) -o $@

%.o: %.c
	gcc -g -c $< -o $@
