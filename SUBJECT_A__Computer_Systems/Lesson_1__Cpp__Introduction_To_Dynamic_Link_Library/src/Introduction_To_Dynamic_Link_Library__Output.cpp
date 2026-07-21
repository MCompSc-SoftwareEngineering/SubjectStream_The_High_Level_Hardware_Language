#include "../include/Introduction_To_Dynamic_Link_Library__Output.h"
#include <iostream>
#include <limits>
	double* MyLIBS::Introduction_To_Dynamic_Link_Library__Output::stat_REG_Introduction_To_Dynamic_Link_Library__Output__value;
// public.
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Output::dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Output()
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Output()" << std::endl;
		stat_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Output__value();
		std::cout << "exiting dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Output()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Output::dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Output()
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Output()" << std::endl;
		stat_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Output__value();
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Output()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Output::dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Output()
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Output()" << std::endl;
		stat_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Output__value();
		std::cout << "exiting dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Output()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Output::dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Output()
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Output()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Output()" << std::endl;
	}
	double MyLIBS::Introduction_To_Dynamic_Link_Library__Output::dyn_REG_get_Introduction_To_Dynamic_Link_Library__Output_value()
	{
		return *stat_REG_get_Introduction_To_Dynamic_Link_Library__Output__value();
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Output::dyn_REG_set_Introduction_To_Dynamic_Link_Library__Output_value(double value)
	{
		stat_REG_set_Introduction_To_Dynamic_Link_Library__Output__value(value);
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Output::stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Output()
	{
		std::cout << "entered stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Output()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Output()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Output::stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Output()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Output()" << std::endl;

		std::cout << "exiting stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Output()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Output::stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Output()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Output()" << std::endl;

		std::cout << "exiting stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Output()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Output::stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Output()
	{
		std::cout << "entered stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Output()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Output()" << std::endl;
	}
// private.
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Output::stat_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Output__value()
	{
		stat_REG_Introduction_To_Dynamic_Link_Library__Output__value = NULL;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Output::stat_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Output__value()
	{
		stat_REG_Introduction_To_Dynamic_Link_Library__Output__value = new double();
		*stat_REG_Introduction_To_Dynamic_Link_Library__Output__value = std::numeric_limits<double>::max();
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Output::stat_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Output__value()
	{
		*stat_REG_Introduction_To_Dynamic_Link_Library__Output__value = 0.0;
	}
	double *MyLIBS::Introduction_To_Dynamic_Link_Library__Output::stat_REG_get_Introduction_To_Dynamic_Link_Library__Output__value()
	{
		return stat_REG_Introduction_To_Dynamic_Link_Library__Output__value;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Output::stat_REG_set_Introduction_To_Dynamic_Link_Library__Output__value(double value)
	{
		*stat_REG_Introduction_To_Dynamic_Link_Library__Output__value = value;
	}