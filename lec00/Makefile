.PHONY: objs libStatic all clean
PROJECT := hello

CUR_DIR := .

INC_DIR := $(CUR_DIR)/inc
BIN_DIR := $(CUR_DIR)/bin
OBJ_DIR := $(CUR_DIR)/obj
SRC_DIR := $(CUR_DIR)/src
LIB_DIR := $(CUR_DIR)/lib

LIB_STATIC := $(LIB_DIR)/static
LIB_SHARED := $(LIB_DIR)/shared

INC_FLAGS := -I $(INC_DIR)

COMPILER := gcc

objs:
	@$(COMPILER) -c -o $(OBJ_DIR)/hello_world.o $(SRC_DIR)/hello_world.c $(INC_FLAGS)
	@$(COMPILER) -c -o $(OBJ_DIR)/hello_Khoa.o $(SRC_DIR)/hello_Khoa.c $(INC_FLAGS)
	@$(COMPILER) -c -o $(OBJ_DIR)/main.o main.c $(INC_FLAGS)
libStatic: objs
	ar rcs $(LIB_STATIC)/libStatic.a $(OBJ_DIR)/hello_world.o $(OBJ_DIR)/hello_Khoa.o
all: libStatic
	$(COMPILER) $(OBJ_DIR)/main.o -L$(LIB_STATIC) -lStatic -o $(BIN_DIR)/$(PROJECT)
clean:
	rm -rf $(OBJ_DIR)/* $(LIB_STATIC)/libStatic.a $(BIN_DIR)/$(PROJECT)