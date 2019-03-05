#include <iostream>
#include <fstream>

// using namespace std;

int main(){
	const float f = 3.14f;

	std::ofstream ofile("test_data.bin", std::ios::binary);
	ofile.write((char*) &f, sizeof(float));

	return 0;
}