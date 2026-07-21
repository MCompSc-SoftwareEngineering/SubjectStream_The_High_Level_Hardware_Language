#include "../../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise0.h"
#include <cfloat>
#include <iostream>
	float* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::_stat_REG_ptr_Input_praise0_valueA;
	float* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::_stat_REG_ptr_Input_praise0_valueB;
// public.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::dyn_REG_boot1_DEFINE_Input_praise0()
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_Input_praise0()" << std::endl;
		stat_REG_boot1_DEFINE_Input_praise0_valueA();
		stat_REG_boot1_DEFINE_Input_praise0_valueB();
		std::cout << "exiting dyn_REG_boot1_DEFINE_Input_praise0()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::dyn_REG_boot2_SUBSTANTIATE_Input_praise0()
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Input_praise0()" << std::endl;
		stat_REG_boot2_SUBSTANTIATE_Input_praise0_valueA();
		stat_REG_boot2_SUBSTANTIATE_Input_praise0_valueB();
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Input_praise0()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::dyn_REG_boot3_INITIALISE_Input_praise0()
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_Input_praise0()" << std::endl;
		stat_REG_boot3_INITIALISE_Input_praise0_valueA();
		stat_REG_boot3_INITIALISE_Input_praise0_valueB();
		std::cout << "exiting dyn_REG_boot3_INITIALISE_Input_praise0()" << std::endl;
	}
	float CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::dyn_REG_get_Item_Input_praise0_valueA()
	{
		return *stat_REG_get_Ptr_Input_praise0_valueA();
	}
	float CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::dyn_REG_get_Item_Input_praise0_valueB()
	{
		return *stat_REG_get_Ptr_Input_praise0_valueB();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::dyn_REG_set_Item_Input_praise0_valueA(float newValue)
	{
		*stat_REG_get_Ptr_Input_praise0_valueA() = newValue;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::dyn_REG_set_Item_Input_praise0_valueB(float newValue)
	{
		*stat_REG_get_Ptr_Input_praise0_valueB() = newValue;
	}
// private.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::stat_REG_boot1_DEFINE_Input_praise0_valueA()
	{
		_stat_REG_ptr_Input_praise0_valueA = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::stat_REG_boot1_DEFINE_Input_praise0_valueB()
	{
		_stat_REG_ptr_Input_praise0_valueB = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::stat_REG_boot2_SUBSTANTIATE_Input_praise0_valueA()
	{
		_stat_REG_ptr_Input_praise0_valueA = new float();
		*_stat_REG_ptr_Input_praise0_valueA = (float)(FLT_MAX);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::stat_REG_boot2_SUBSTANTIATE_Input_praise0_valueB()
	{
		_stat_REG_ptr_Input_praise0_valueB = new float();
		*_stat_REG_ptr_Input_praise0_valueB = (float)(FLT_MAX);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::stat_REG_boot3_INITIALISE_Input_praise0_valueA()
	{
		*_stat_REG_ptr_Input_praise0_valueA = (float)(1.2);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::stat_REG_boot3_INITIALISE_Input_praise0_valueB()
	{
		*_stat_REG_ptr_Input_praise0_valueA = (float)(2.6);
	}
	float* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::stat_REG_get_Ptr_Input_praise0_valueA()
	{
		return _stat_REG_ptr_Input_praise0_valueA;
	}
	float* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::stat_REG_get_Ptr_Input_praise0_valueB()
	{
		return _stat_REG_ptr_Input_praise0_valueB;
	}