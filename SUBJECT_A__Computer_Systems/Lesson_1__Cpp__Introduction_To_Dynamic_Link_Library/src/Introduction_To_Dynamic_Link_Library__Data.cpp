#include "../include/Introduction_To_Dynamic_Link_Library__Data.h"
#include "../include/Introduction_To_Dynamic_Link_Library__Input.h"
#include "../include/Introduction_To_Dynamic_Link_Library__Output.h"
#include <iostream>
	MyLIBS::Introduction_To_Dynamic_Link_Library__Input* MyLIBS::Introduction_To_Dynamic_Link_Library__Data::_stat_REG_ptr_Introduction_To_Dynamic_Link_Library__Input;
	MyLIBS::Introduction_To_Dynamic_Link_Library__Output* MyLIBS::Introduction_To_Dynamic_Link_Library__Data::_stat_REG_ptr_Introduction_To_Dynamic_Link_Library__Output;
// public.
	MyLIBS::Introduction_To_Dynamic_Link_Library__Data::Introduction_To_Dynamic_Link_Library__Data()
	{

	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__Data::~Introduction_To_Dynamic_Link_Library__Data()
	{
		delete _stat_REG_ptr_Introduction_To_Dynamic_Link_Library__Input;
		delete _stat_REG_ptr_Introduction_To_Dynamic_Link_Library__Output;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Data::dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Data()
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Data()" << std::endl;
		stat_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input();
		stat_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Output();
		std::cout << "exiting dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Data()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Data::dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Data()
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Data()" << std::endl;

		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Data()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Data::dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Data(MyLIBS::Introduction_To_Dynamic_Link_Library__Input* structIntroduction_To_Dynamic_Link_Library__Input, MyLIBS::Introduction_To_Dynamic_Link_Library__Output* structIntroduction_To_Dynamic_Link_Library__Output)
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Data()" << std::endl;
		stat_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input(structIntroduction_To_Dynamic_Link_Library__Input);
		stat_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Output(structIntroduction_To_Dynamic_Link_Library__Output);
		std::cout << "exiting dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Data()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Data::dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Data()
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Data()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Data()" << std::endl;
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__Input* MyLIBS::Introduction_To_Dynamic_Link_Library__Data::dyn_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Input()
	{
		return stat_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Input();
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__Output* MyLIBS::Introduction_To_Dynamic_Link_Library__Data::dyn_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Output()
	{
		return stat_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Output();
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Data::stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Data()
	{
		std::cout << "entered stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Data()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Data()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Data::stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Data()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Data()" << std::endl;

		std::cout << "exiting stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Data()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Data::stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Data()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Data()" << std::endl;

		std::cout << "exiting stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Data()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Data::stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Data()
	{
		std::cout << "entered stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Data()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Data()" << std::endl;
	}
// private.
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Data::stat_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input()
	{
		_stat_REG_ptr_Introduction_To_Dynamic_Link_Library__Input = NULL;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Data::stat_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Output()
	{
		_stat_REG_ptr_Introduction_To_Dynamic_Link_Library__Output = NULL;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Data::stat_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input(MyLIBS::Introduction_To_Dynamic_Link_Library__Input* structIntroduction_To_Dynamic_Link_Library__Input)
	{
		_stat_REG_ptr_Introduction_To_Dynamic_Link_Library__Input = structIntroduction_To_Dynamic_Link_Library__Input;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Data::stat_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Output(MyLIBS::Introduction_To_Dynamic_Link_Library__Output* structIntroduction_To_Dynamic_Link_Library__Output)
	{
		_stat_REG_ptr_Introduction_To_Dynamic_Link_Library__Output = structIntroduction_To_Dynamic_Link_Library__Output;
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__Input* MyLIBS::Introduction_To_Dynamic_Link_Library__Data::stat_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Input()
	{
		return _stat_REG_ptr_Introduction_To_Dynamic_Link_Library__Input;
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__Output* MyLIBS::Introduction_To_Dynamic_Link_Library__Data::stat_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Output()
	{
		return _stat_REG_ptr_Introduction_To_Dynamic_Link_Library__Output;
	}
