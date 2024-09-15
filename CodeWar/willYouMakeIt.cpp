#include<iostream>


bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
{
  return distance_to_pump <= (mpg*fuel_left) ;
}

int main(){
    std::cout<<zero_fuel(50, 25, 2);//true
    std::cout<<zero_fuel(100, 50, 1);//false
    return 0;
}