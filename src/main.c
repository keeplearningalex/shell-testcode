#include "main.h"


#define MAX_LINE_LENGTH  256
#define MAX_CMD_CNT  3

const SHELL_CMD g_cmdset[]={
	{"cmd_one",SHELL_CMD_ONE},
	{"cmd_two",SHELL_CMD_TWO},
	{"cmd_three",SHELL_CMD_THREE}
};

int shell_cmd_decode(char* str){
	
	for(int i = 0; i<MAX_CMD_CNT ;i++){
		//相等为0
		if(!strcmp(str,g_cmdset[i].cmdname)){
			printf("%s\n",g_cmdset[i].cmdname);
			return 0;
		}
	}
	
	
	return -1;
}


int main(void){
	char str[MAX_LINE_LENGTH];
	
	while(1){
		memset(str,0,sizeof(str));
		
		printf("oscar@oscar: ");
		
		scanf("%s",str);
		if(shell_cmd_decode(str)){
			printf("cmd error\n");
		}
		
	}
	return 0;
}


