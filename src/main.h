#ifndef  __MAIN_H__
#define  __MAIN_H__

#include <stdio.h>
#include <string.h>

typedef enum{
    SHELL_CMD_ONE   = 1,
	SHELL_CMD_TWO   = 2,
	SHELL_CMD_THREE = 3
    
}SHELL_CMD_ENUM;

typedef struct{
	char* cmdname;
	SHELL_CMD_ENUM cmd_enum;
}SHELL_CMD;

#endif