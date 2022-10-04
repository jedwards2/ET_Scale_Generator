#include <iostream>
#include <stdlib.h>
#include <vector>
#include <math.h>

int main(int argc, const char * argv[]) {
  double ref_freq{atof(argv[1])};
  int scale_division{atoi(argv[2])};
  std::vector<double> gamut {ref_freq};
  
  for (int i{1}; i<scale_division; i++){
    gamut.push_back(ref_freq * (pow(2, static_cast<double>(i)/scale_division)));
  }
  
  for (double i: gamut){
    std::cout << i << std::endl;
  }
  
  return 0;
}
