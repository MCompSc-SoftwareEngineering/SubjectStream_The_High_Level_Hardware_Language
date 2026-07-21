#include "../include/Introduction_To_Dynamic_Link_Library__Framework.h"
#include "../include/Introduction_To_Dynamic_Link_Library__App.h"
#include "../include/Introduction_To_Dynamic_Link_Library__Input.h"
#include <iostream>
	MyLIBS::Introduction_To_Dynamic_Link_Library__App* MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::_stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__App;
	MyLIBS::Introduction_To_Dynamic_Link_Library__Global* MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::_stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Global;
	MyLIBS::Introduction_To_Dynamic_Link_Library__Input* MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::_stat_STRUCT_Introduction_To_Dynamic_Link_Library__Input;
	MyLIBS::Introduction_To_Dynamic_Link_Library__Output* MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::_stat_STRUCT_Introduction_To_Dynamic_Link_Library__Output;
// private.
	MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::Introduction_To_Dynamic_Link_Library__Framework()
	{
		stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Framework();
		stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Framework();
		stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Framework();
		stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Framework();
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::~Introduction_To_Dynamic_Link_Library__Framework()
	{
		delete _stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__App;
		delete _stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Global;
		delete _stat_STRUCT_Introduction_To_Dynamic_Link_Library__Input;
		delete _stat_STRUCT_Introduction_To_Dynamic_Link_Library__Output;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::dyn_APP_Introduction_To_Dynamic_Link_Library__stat_STRUCT_boot1_DEFINE()
	{
		stat_STRUCT_boot1_DEFINE_User_Introduction_To_Dynamic_Link_Library__Input();
		stat_STRUCT_boot1_DEFINE_User_Introduction_To_Dynamic_Link_Library__Output();
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::dyn_APP_Introduction_To_Dynamic_Link_Library__stat_STRUCT_boot3_INITIALISE()
	{
		stat_STRUCT_boot3_INITIALISE_User_Introduction_To_Dynamic_Link_Library__Input();
		stat_STRUCT_boot3_INITIALISE_User_Introduction_To_Dynamic_Link_Library__Output();
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Framework()
	{
		std::cout << "entered REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Framework()" << std::endl;

		std::cout << "exiting REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Framework()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Framework()
	{
		std::cout << "entered REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Framework()" << std::endl;

		std::cout << "exiting REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Framework()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Framework()
	{
		std::cout << "entered REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Framework()" << std::endl;

		std::cout << "exiting REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Framework()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Framework()
	{
		//if thread primed and system initialised, exit, else wait.
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__App* MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()
	{
		return stat_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App();
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__Global* MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__Global()
	{
		return stat_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__Global();
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__Input* MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::dyn_STRUCT_get_REG_Introduction_To_Dynamic_Link_Library__Input()
	{
		return stat_STRUCT_get_Introduction_To_Dynamic_Link_Library__Input();
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__Output* MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::dyn_STRUCT_get_REG_Introduction_To_Dynamic_Link_Library__Output()
	{
		return stat_STRUCT_get_Introduction_To_Dynamic_Link_Library__Output();
	}
// private.
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Framework()
	{
		std::cout << "entered CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Framework()" << std::endl;

		std::cout << "exiting CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Framework()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Framework()
	{
		std::cout << "entered CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Framework" << std::endl;
		stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__App();
		std::cout << "exiting CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Framework" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Framework()
	{
		std::cout << "entered CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Framework()" << std::endl;
		stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__App();
		std::cout << "exiting CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Framework()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Framework()
	{
		std::cout << "entered REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Framework()" << std::endl;

		std::cout << "exiting REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Framework()" << std::endl;
	}
// private.
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__App()
	{
		_stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__App = NULL;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__App()
	{
		_stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__App = new class MyLIBS::Introduction_To_Dynamic_Link_Library__App();
		while (stat_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App() == NULL) {}
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__App* MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::stat_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()
	{
		return _stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__App;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::stat_STRUCT_boot1_DEFINE_User_Introduction_To_Dynamic_Link_Library__Input()
	{
		_stat_STRUCT_Introduction_To_Dynamic_Link_Library__Input = NULL;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::stat_STRUCT_boot1_DEFINE_User_Introduction_To_Dynamic_Link_Library__Output()
	{
		_stat_STRUCT_Introduction_To_Dynamic_Link_Library__Output = NULL;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::stat_STRUCT_boot3_INITIALISE_User_Introduction_To_Dynamic_Link_Library__Input()
	{
		_stat_STRUCT_Introduction_To_Dynamic_Link_Library__Input = new struct MyLIBS::Introduction_To_Dynamic_Link_Library__Input();
		while (stat_STRUCT_get_Introduction_To_Dynamic_Link_Library__Input() == NULL) {}
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::stat_STRUCT_boot3_INITIALISE_User_Introduction_To_Dynamic_Link_Library__Output()
	{
		_stat_STRUCT_Introduction_To_Dynamic_Link_Library__Output = new struct MyLIBS::Introduction_To_Dynamic_Link_Library__Output();
		while (stat_STRUCT_get_Introduction_To_Dynamic_Link_Library__Output() == NULL) {}
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__Input* MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::stat_STRUCT_get_Introduction_To_Dynamic_Link_Library__Input()
	{
		return _stat_STRUCT_Introduction_To_Dynamic_Link_Library__Input;
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__Output* MyLIBS::Introduction_To_Dynamic_Link_Library__Framework::stat_STRUCT_get_Introduction_To_Dynamic_Link_Library__Output()
	{
		return _stat_STRUCT_Introduction_To_Dynamic_Link_Library__Output;
	}