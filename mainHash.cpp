// Name: Saaketh Pula
// Partner Name: Rushil Kaushik

#include <iostream>
#include "MakeModel.hpp"
#include <time.h>
#include <stdlib.h>

using namespace std;
int main() {
	srand(time(NULL));
	
	// Choose one of the 2 blocks to uncomment, depending on which input file
	// you'd like to run your hashmap on
	
	// Dr. Seuss input
   makeModel voice1("/Users/saakethpula/CLionProjects/HashMapProject/DrSeuss.txt","/Users/saakethpula/CLionProjects/HashMapProject/Seussout1.txt",true,true);
   makeModel voice2("/Users/saakethpula/CLionProjects/HashMapProject/DrSeuss.txt","/Users/saakethpula/CLionProjects/HashMapProject/Seussout2.txt",false,true);
   makeModel voice3("/Users/saakethpula/CLionProjects/HashMapProject/DrSeuss.txt","/Users/saakethpula/CLionProjects/HashMapProject/Seussout3.txt",true,false);
   makeModel voice4("/Users/saakethpula/CLionProjects/HashMapProject/DrSeuss.txt","/Users/saakethpula/CLionProjects/HashMapProject/Seussout4.txt",false,false);
////// OR
   ////
////// Great Expectations input
   makeModel voice5("/Users/saakethpula/CLionProjects/HashMapProject/GEChap.txt","/Users/saakethpula/CLionProjects/HashMapProject/GEout1.txt",true,true);
   makeModel voice6("/Users/saakethpula/CLionProjects/HashMapProject/GEChap.txt","/Users/saakethpula/CLionProjects/HashMapProject/GEout2.txt",false,true);
   makeModel voice7("/Users/saakethpula/CLionProjects/HashMapProject/GEChap.txt","/Users/saakethpula/CLionProjects/HashMapProject/GEout3.txt",true,false);
   makeModel voice8("/Users/saakethpula/CLionProjects/HashMapProject/GEChap.txt","/Users/saakethpula/CLionProjects/HashMapProject/GEout4.txt",false,false);

	return 0;
}
