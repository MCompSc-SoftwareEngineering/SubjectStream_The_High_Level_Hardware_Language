#include "../include/Introduction_To_Dynamic_Link_Library__Algorithms.h"
#include "../include/Introduction_To_Dynamic_Link_Library__App.h"
#include "../include/Introduction_To_Dynamic_Link_Library__Data.h"
#include <iostream>
	MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms* MyLIBS::Introduction_To_Dynamic_Link_Library__App::_stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Algorithms;
	MyLIBS::Introduction_To_Dynamic_Link_Library__Data* MyLIBS::Introduction_To_Dynamic_Link_Library__App::_stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data;
	
// public.
	MyLIBS::Introduction_To_Dynamic_Link_Library__App::Introduction_To_Dynamic_Link_Library__App()
	{
		stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__App();
		stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__App();
		stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__App();
		stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__App();
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__App::~Introduction_To_Dynamic_Link_Library__App()
	{
		delete _stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Algorithms;
		delete _stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data;

	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__App::dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__App()
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__App()" << std::endl;

		std::cout << "exiting dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__App()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__App::dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__App()
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__App()" << std::endl;

		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__App()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__App::dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__App()
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__App()" << std::endl;

		std::cout << "exiting dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__App()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__App::dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__App()
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__App()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__App()" << std::endl;
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms* MyLIBS::Introduction_To_Dynamic_Link_Library__App::dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Algorithms()
	{
		return stat_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__Algorithms();
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__Data* MyLIBS::Introduction_To_Dynamic_Link_Library__App::dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data()
	{
		return stat_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__Data();
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__App::stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__App()
	{
		std::cout << "entered stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__App()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__App()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__App::stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__App()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__App()" << std::endl;
		stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Algorithms();
		stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Data();
		std::cout << "exiting stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__App()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__App::stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__App()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__App()" << std::endl;
		stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Algorithms();
		stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Data();
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__App()" << std::endl;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__App::stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__App()
	{
		std::cout << "entered stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__App()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__App()" << std::endl;
	}
// private
	void MyLIBS::Introduction_To_Dynamic_Link_Library__App::stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Algorithms()
	{
		_stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Algorithms = NULL;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__App::stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Data()
	{
		_stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data = NULL;
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__App::stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Algorithms()
	{
		_stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Algorithms = new class Introduction_To_Dynamic_Link_Library__Algorithms();
		while(stat_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__Algorithms() == NULL) { }
	}
	void MyLIBS::Introduction_To_Dynamic_Link_Library__App::stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Data()
	{
		_stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data = new class Introduction_To_Dynamic_Link_Library__Data();
		while (stat_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__Data() == NULL) {}
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__Algorithms* MyLIBS::Introduction_To_Dynamic_Link_Library__App::stat_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__Algorithms()
	{
		return _stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Algorithms;
	}
	MyLIBS::Introduction_To_Dynamic_Link_Library__Data* MyLIBS::Introduction_To_Dynamic_Link_Library__App::stat_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__Data()
	{
		return _stat_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data;
	}

