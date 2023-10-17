.PHONY: forkProg wpidProg prevzProg all clean

EXEFORK := fork
EXEWPID := waitpid
EXEPREVZ := preventZombie

CUR_DIR := .
BIN_DIR := $(CUR_DIR)/bin
SRC_DIR := $(CUR_DIR)/src

COMPILER := gcc

forkProg:
	@$(COMPILER) -o $(EXEFORK) $(SRC_DIR)/fork.c
	@mv $(EXEFORK) $(BIN_DIR)
wpidProg:
	@$(COMPILER) -o $(EXEWPID) $(SRC_DIR)/waitpid.c
	@mv $(EXEWPID) $(BIN_DIR)
prevzProg:
	@$(COMPILER) -o $(EXEPREVZ) $(SRC_DIR)/preventZombie.c
	@mv $(EXEPREVZ) $(BIN_DIR)

all: forkProg wpidProg prevzProg

clean:
	rm -rf $(BIN_DIR)/*
	