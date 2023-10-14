.PHONY: all clean

EXECUTE_FILE_OPEN := lec01_exe
EXECUTE_FILE_INFO := infoFile_exe
EXECUTE_FILE_APPEND := appendFile_exe

CUR_DIR := .
BIN_DIR := $(CUR_DIR)/bin
SRC_DIR := $(CUR_DIR)/src

COMPILER := gcc

main:
	$(COMPILER) -o $(EXECUTE_FILE_OPEN) main.c
	mv $(CUR_DIR)/$(EXECUTE_FILE_OPEN) $(BIN_DIR)
exeInfoFile:
	$(COMPILER) -o $(EXECUTE_FILE_INFO) $(SRC_DIR)/infoFile.c
	mv $(CUR_DIR)/$(EXECUTE_FILE_INFO) $(BIN_DIR)
exeAppendFile:
	$(COMPILER) -o $(EXECUTE_FILE_APPEND) $(SRC_DIR)/flag_append.c
	mv $(CUR_DIR)/$(EXECUTE_FILE_APPEND) $(BIN_DIR)
clean:
	rm -rf $(BIN_DIR)/$(EXECUTE_FILE_OPEN) *.txt