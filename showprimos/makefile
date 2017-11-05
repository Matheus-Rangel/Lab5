RM = rm -rf
# Compilador
CC=g++
CFLAGS = -Wall -g  -O0 -pedantic -ansi -std=c++14 
# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean distclean doxy
showprimos: showprimos.cpp
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $@ $^
	@echo "+++ [Executavel criado] +++"
	@echo "============="

