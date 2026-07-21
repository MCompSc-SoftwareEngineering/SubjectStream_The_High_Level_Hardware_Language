#include "../include/Introduction_To_Dynamic_Link_Library__Algorithms.h"
#include <iostream>
MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms::Introduction_To_Dynamic_Link_Library__Algorithms()
{
	stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Algorithms();
	stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Algorithms();
	stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Algorithms();
	stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Algorithms();
}
MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms::~Introduction_To_Dynamic_Link_Library__Algorithms()
{

}
void MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms::dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Algorithms()
{
	std::cout << "entered REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Algorithms()" << std::endl;

	std::cout << "exiting REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Algorithms()" << std::endl;
}
void MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms::dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Algorithms()
{
	std::cout << "entered REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Algorithms()" << std::endl;

	std::cout << "exiting REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Algorithms()" << std::endl;
}
void MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms::dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Algorithms()
{
	std::cout << "entered REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Algorithms()" << std::endl;

	std::cout << "exiting REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Algorithms()" << std::endl;
}
void MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms::dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Algorithms()
{

}
void MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms::Introduction_To_Dynamic_Link_Library__dyn_FUNCT_add_a_b(Introduction_To_Dynamic_Link_Library__Input* inputBUFFER, Introduction_To_Dynamic_Link_Library__Output* outputBUFFER)
{
	outputBUFFER->dyn_REG_set_Introduction_To_Dynamic_Link_Library__Output_value(inputBUFFER->dyn_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_a() + inputBUFFER->dyn_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_b());
}
void MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms::Introduction_To_Dynamic_Link_Library__dyn_FUNCT_subtract_a_b(MyLIBS::Introduction_To_Dynamic_Link_Library__Input* inputBUFFER, MyLIBS::Introduction_To_Dynamic_Link_Library__Output* outputBUFFER)
{
	outputBUFFER->dyn_REG_set_Introduction_To_Dynamic_Link_Library__Output_value(inputBUFFER->dyn_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_a() - inputBUFFER->dyn_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_b());
}
void MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms::Introduction_To_Dynamic_Link_Library__dyn_FUNCT_multiply_a_b(MyLIBS::Introduction_To_Dynamic_Link_Library__Input* inputBUFFER, MyLIBS::Introduction_To_Dynamic_Link_Library__Output* outputBUFFER)
{
	outputBUFFER->dyn_REG_set_Introduction_To_Dynamic_Link_Library__Output_value(inputBUFFER->dyn_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_a() * inputBUFFER->dyn_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_b());
}
void MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms::Introduction_To_Dynamic_Link_Library__dyn_FUNCT_divide_a_b(MyLIBS::Introduction_To_Dynamic_Link_Library__Input* inputBUFFER, MyLIBS::Introduction_To_Dynamic_Link_Library__Output* outputBUFFER)
{
	outputBUFFER->dyn_REG_set_Introduction_To_Dynamic_Link_Library__Output_value(inputBUFFER->dyn_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_a() / inputBUFFER->dyn_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_b());
}
void MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms::stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Algorithms()
{
	std::cout << "entered CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Algorithms()" << std::endl;

	std::cout << "exiting CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Algorithms()" << std::endl;
}
void MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms::stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Algorithms()
{
	std::cout << "entered CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Algorithms" << std::endl;

	std::cout << "exiting CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Algorithms" << std::endl;
}
void MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms::stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Algorithms()
{
	std::cout << "entered CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Algorithms()" << std::endl;

	std::cout << "exiting CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Algorithms()" << std::endl;
}
void MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms::stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Algorithms()
{
	std::cout << "entered REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Algorithms()" << std::endl;

	std::cout << "exiting REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Algorithms()" << std::endl;
}


