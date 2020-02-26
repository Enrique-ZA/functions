#include <iostream>

using namespace std;

float rGaussian() {
		float v1, v2, s;
		do {
			v1 = 2 * ofRandomf() - 1;
			v2 = 2 * ofRandomf() - 1;
			s = v1 * v1 + v2 * v2;
		} while (s >= 1 || s == 0);
		float multiplier = sqrt(-2 * log(s) / s);
		return v1 * multiplier;
}

int main(){
  float randomGaussian = rGaussian();

  return 0;
}
