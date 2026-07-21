#include "../include/Introduction_To_Dynamic_Link_Library__Input.h"
#include <cfloat>
#include <iostream>
	double* MyLIBS::Introduction_To_Dynamic_Link_Library__Input::stat_REG_Introduction_To_Dynamic_Link_Library__Input__value_a;
	double* MyLIBS::Introduction_To_Dynamic_Link_Library__Input::stat_REG_Introduction_To_Dynamic_Link_Library__Input__value_b;
// public.
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input()
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input()" << std::endl;
		stat_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input__value_a();
		stat_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input__value_b();
		std::cout << "exiting dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Input()
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Input()" << std::endl;
		stat_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Input__value_a();
		stat_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Input__value_b();
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Input()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input()
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input()" << std::endl;
		stat_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input__value_a();
		stat_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input__value_b();
		std::cout << "exiting dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Input()
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Input()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Input()" << std::endl;
	}
	double MyLIBS::Introduction_To_Dynamic_Link_Library__Input::dyn_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_a()
	{
		return *stat_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_a();
	}
	double MyLIBS::Introduction_To_Dynamic_Link_Library__Input::dyn_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_b()
	{
		return *stat_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_b();
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::dyn_REG_set_Introduction_To_Dynamic_Link_Library__Input__value_b(double value)
	{
		stat_REG_set_Introduction_To_Dynamic_Link_Library__Input__value_a(value);
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Input()
	{
		std::cout << "entered stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Input()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Input()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input()" << std::endl;

		std::cout << "exiting stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input()" << std::endl;

		std::cout << "exiting stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Input()
	{
		std::cout << "entered stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Input()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Input()" << std::endl;
	}
// private.
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::stat_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input__value_a()
	{
		stat_REG_Introduction_To_Dynamic_Link_Library__Input__value_a = NULL;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::stat_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input__value_b()
	{
		stat_REG_Introduction_To_Dynamic_Link_Library__Input__value_b = NULL;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::stat_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Input__value_a()
	{
		stat_REG_Introduction_To_Dynamic_Link_Library__Input__value_a = new double();
		*stat_REG_Introduction_To_Dynamic_Link_Library__Input__value_a = DBL_MAX;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::stat_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Input__value_b()
	{
		stat_REG_Introduction_To_Dynamic_Link_Library__Input__value_b = new double();
		*stat_REG_Introduction_To_Dynamic_Link_Library__Input__value_b = DBL_MAX;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::stat_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input__value_a()
	{
		*stat_REG_Introduction_To_Dynamic_Link_Library__Input__value_a = 0.0;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::stat_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input__value_b()
	{
		*stat_REG_Introduction_To_Dynamic_Link_Library__Input__value_b = 0.0;
	}
	double* MyLIBS::Introduction_To_Dynamic_Link_Library__Input::stat_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_a()
	{
		return stat_REG_Introduction_To_Dynamic_Link_Library__Input__value_a;
	}
	double* MyLIBS::Introduction_To_Dynamic_Link_Library__Input::stat_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_b()
	{
		return stat_REG_Introduction_To_Dynamic_Link_Library__Input__value_b;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::stat_REG_set_Introduction_To_Dynamic_Link_Library__Input__value_a(double value)
	{
		*stat_REG_Introduction_To_Dynamic_Link_Library__Input__value_a = value;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Input::stat_REG_set_Introduction_To_Dynamic_Link_Library__Input__value_b(double value)
	{
		*stat_REG_Introduction_To_Dynamic_Link_Library__Input__value_b = value;
	}
