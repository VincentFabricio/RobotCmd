#include <iostream>
#include <vector>
#include <unistd.h>

int main() {

  std::vector<std::string>cmds={"move forward", "turn left", "turn right", "move forward", "stop"};
  for( const std::string& command: cmds ){
    std::cout <<"Robot: " << command << std::endl;
    sleep(1);
  }
  
  return 0;
}
