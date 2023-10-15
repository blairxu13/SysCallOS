#include "process_log.h"
#include <unistd.h>
#include <stdlib.h>
int get_proc_log_level() {
return syscall(436);
}

int set_proc_log_level(int new_level) {
return syscall(435,new_level);

}

int proc_log_message(int level, char *message){
return syscall(437,message,level);
}

int* retrieve_set_level_params(int new_level) {
int* slay2 = malloc(sizeof(int)*3);
slay2[0]=435;
slay2[1]=1;
slay2[2]=new_level;
return slay2;
}
int* retrieve_get_level_params(){
int* slay = malloc(sizeof(int)*2);
slay[0]=436;
slay[1]=0;
return slay;
}
int interpret_set_level_result(int ret_value){
return ret_value;
}
int interpret_get_level_result(int ret_value) {
return ret_value;
}
int interpret_log_message_result(int ret_value){
return ret_value;
}
