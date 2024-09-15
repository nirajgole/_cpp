//============================================================================
// Name        : Numbers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include<string>
#include <sstream>
#include <algorithm>

using namespace std;

string seriesSum(int n)
{
  float f = 0.0;
  for (int i = 0; i < n; i++) {
    f += 1.0/double(1 + 3*i);
  }
  stringstream ss;
  ss << fixed << setprecision(2) << f;
  return ss.str();
}

int main() {

	int n=29;
	cout<<seriesSum(n);
	return 0;
}
