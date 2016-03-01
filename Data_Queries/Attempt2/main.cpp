#include "part.h"
#include <fstream>

int main(int argc, char const *argv[])
{
	std::ifstream my_iFile;
	//my_iFile = argv[1];

	std::list < Part > my_list;

	double regularPrice;

	std::string customerReviewAverage;
	std::string shortDescription; 
	std::string longDescription; 
	std::string thumbnailImage; 
	std::string modelNumber; 
	std::string image; 
	std::string name; 
	std::string URL; 
	std::string SKU; 
	std::string tag;

	my_iFile.open( argv[1], std::ifstream::in);
	while(std::cin >> tag)
	{
		//std::cin >> tag;
		if (tag == "'name:'")
		{
			getline(std::cin, name);
		}
		if(tag == "'modelNumber'")
		{
			getline(std::cin, modelNumber);
		}
		if(tag == "'regularPrice'")
		{
			std::cin >> regularPrice;
		}
		if(tag == "'shortDescription'")
		{
			getline(std::cin, shortDescription);
		}
		if(tag == "'longDescription'")
		{
			getline(std::cin, longDescription);
		}
		if(tag == "'image'")
		{
			getline(std::cin, image);
		}
		if(tag == "'thumbnailImage'")
		{
			getline(std::cin, thumbnailImage);
		}
		if(tag == "'URL'")
		{
			getline(std::cin, URL);
		}
		if(tag == "'SKU'")
		{
			getline(std::cin, SKU);
		}
		if(tag == "'customerReviewAverage'")
		{
			getline(std::cin, customerReviewAverage);
		}
		else std::cin.ignore();

		my_list.emplace_back(new Part(name, modelNumber, regularPrice, shortDescription, longDescription, image, thumbnailImage, URL, SKU, customerReviewAverage));
		std::cout << " " <<  name << " " <<  modelNumber << " " <<  regularPrice << " " <<  shortDescription << " " <<  longDescription << " " <<  image << " " <<  thumbnailImage << " " <<  URL << " " <<  SKU << " " <<  customerReviewAverage << std::endl;
	}

	return 0;
}