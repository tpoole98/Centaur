#include <iostream>
#include <cmath>
#include <cstdlib>
#include <chrono>

#ifdef __cplusplus
extern "C" {
#endif

  
float f1(float x, int intensity);
float f2(float x, int intensity);
float f3(float x, int intensity);
float f4(float x, int intensity);

#ifdef __cplusplus
}
#endif

  
int main (int argc, char* argv[]) {

    auto t1 = std::chrono::high_resolution_clock::now();
    

  int functionid;
  std::cin >> functionid;
  int a;
  std::cin >> a;
  int b;
  std::cin >> b;
  float n;
  std::cin >> n;
  int intensity;
  std::cin >> intensity;

  

  if (argc < 6) {
    std::cerr<<"usage: "<<argv[0]<<" <functionid> <a> <b> <n> <intensity>"<<std::endl;
    return -1;
   
  }

 
  int value = 0, temp = 0;
  if(functionid == 1)
    /* for(int i =n ; i >0; i--){
      temp += i;
    }
  
     ((b-a)/n)(temp)(a+(

     ( f1(n, intensity); */
    ;
  else if(functionid == 2)
    f2(n, intensity);
  else if(functionid == 3)
    f3(n, intensity);
    else if (functionid == 4)
      f4(n, intensity);


    auto t2 = std::chrono::high_resolution_clock::now();


  auto duration =std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count();
  double duration1 = duration / 1000000.0;
  
  std::cerr << std::to_string(duration1);

  
  return 0;
}
