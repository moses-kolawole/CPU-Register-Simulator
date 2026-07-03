#include <stdio.h>
#include <unistd.h>

int main(){
    // CPU registers
  int PC = 100;
  int SP = 1000;
  int LR = 0;
  int PSR = 0;

  // Initial values
  printf("\n Good day, alright here are the current things saved on the cpu register of the computer\n");
  printf("\t pc: %d", PC);
  printf("\t SP: %d", SP);
  printf("\t LR :%d", LR);
  printf("\t PSR: %d", PSR);

  PC = 104;
  SP = 996;
  LR = 200;
  PSR = 1;

  // Count Down
  printf("\n\n Here is the count down: \n");
  for(int i = 3; i >= 0; i--){
      printf("\n %d",i);
      sleep(1);
  }

  // New values update
  printf("\n After the next running time, here are the new displays: \n");
  printf("\t pc: %d", PC);
  printf("\t SP: %d", SP);
  printf("\t LR :%d", LR);
  printf("\t PSR: %d", PSR);

    return 0;
}
