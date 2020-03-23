#include <iostream>
#include <vector>
#include <sstream>


int num_nodes;
int max_degree;

void print_matrix(std::vector<std::vector<int>>& a);


int main(int argc, char** argv){


	// correct number of arguments
	if (argc < 3){
		std::cout << "Invaid use of RJelly" << std::endl;
		std::cout << "Must supply number of nodes and max degree" << std::endl;
		std::cout << "a.out [# of nodes] [max degree of nodes]" << std::endl;
		return 1;
	}

	if (argc > 3){
		std::cout << "Invalid use of RJelly" << std::endl;
		std::cout << "Too many arguments supplied" << std::endl;
		return 1;
	}

	// converting input to ints
	std::istringstream iss1(argv[1]);
	std::istringstream iss2(argv[2]);


	if(!(iss1 >> num_nodes)){
		std::cout << "Failure to convert string to number of node" << std::endl;
		return 1;
	}

	if(!(iss2 >> max_degree)){
		std::cout << "Failure to convert string to max degree" << std::endl;
		return 1;
	}

	// checking stuff
	std::cout << "num_nodes: " << num_nodes << std::endl;
	std::cout << "max_degree: " << max_degree << std::endl;


	// beginning of actual shit
	std::vector<std::vector<int>> mat;

	for(int i = 0; i < num_nodes; i++){
		std::vector<int> yeah;
		for(int i = 0; i < num_nodes; i++){
			yeah.push_back(0);
		}
		mat.push_back(yeah);
	}

	std::cout << "Matrix size: " << mat.size() << std::endl; 
	
	print_matrix(mat);

	std::cout << "Success" << std::endl;

	return 0;

}

void print_matrix(std::vector<std::vector<int>>& a){

	for(int i = 0; i < a.size(); i++){
		for(int j = 0; j < a[i].size(); j++){
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

