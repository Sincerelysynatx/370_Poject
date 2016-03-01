#include "part.h"
Part(std::string name, std::string ModelNumber, int RegularPrice, std::string ShortDescription, std::string LongDescription, std::string image, std::string Thumbnail, std::string URL, std::string SKU, std::string CustomerReview)
{
	m_name = name; 
	m_ModelNumber = ModelNumber; 
	m_RegularPrice = RegularPrice; 
	m_ShortDescription = ShortDescription; 
	m_LongDescription = LongDescription; 
	m_image = image; 
	m_Thumbnail = Thumbnail; 
	m_URL = URL; 
	m_SKU = SKU; 
	m_CustomerReview = CustomerReview;
}
std::string Part::getName()
{
	return m_name;
}
std::string Part::getModelNumber()
{
	return m_ModelNumber;
}
std::string Part::getShortDescription()
{
	return m_ShortDescription;
}
std::string Part::getLongDescription()
{
	return m_LongDescription;
}
std::string Part::getImage()
{
	return m_Image ;
}
std::string Part::getThumbnail()
{
	return m_Thumbnail ;
}
std::string Part::getURL()
{
	return m_URL ;
}
std::string Part::getSKU()
{
	return m_SKU ;
}
std::string Part::getCustomerReview()
{
	return m_CustomerReview;
}
double Part::getRegularPrice()
{
	return m_RegularPrice;
}
void Part::print(ostream &my_ofile)
{
	my_ofile << m_name << std::endl;
	my_ofile << m_ModelNumber << std::endl;
	my_ofile << m_RegularPrice << std::endl;
	my_ofile << m_ShortDescription << std::endl;
	my_ofile << m_LongDescription << std::endl;
	my_ofile << m_image << std::endl;
	my_ofile << m_Thumbnail << std::endl;
	my_ofile << m_URL << std::endl;
	my_ofile << m_SKU << std::endl;
	my_ofile << m_CustomerReview << std::endl;
}