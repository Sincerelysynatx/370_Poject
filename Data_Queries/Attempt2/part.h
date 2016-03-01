#ifndef PART_H_
#define PART_H_
#include <iostream>
#include <list>
#include <string>
#include <fstream>

class Part
{
public: 
	//Part Constructor
	//Part();
	Part(std::string name, 
		std::string ModelNumber, 
		double RegularPrice, 
		std::string ShortDescription, 
		std::string LongDescription, 
		std::string image, 
		std::string Thumbnail, 
		std::string URL, 
		std::string SKU, 
		std::string CustomerReview);

//getters
	double getRegularPrice();
	std::string getShortDescription();
	std::string getLongDescription();
	std::string getCustomerReview();
	std::string getModelNumber();
	std::string getThumbnail();
	std::string getImage();
	std::string getName();
	std::string getURL();
	std::string getSKU();
//print
	void print(std::ostream &my_ofile);
private:
	std::string m_name; 
		std::string m_ModelNumber; 
		double m_RegularPrice; 
		std::string m_ShortDescription; 
		std::string m_LongDescription; 
		std::string m_image; 
		std::string m_Thumbnail; 
		std::string m_URL; 
		std::string m_SKU; 
		std::string m_CustomerReview;


};
#endif
