#include "../../include/engine/CLIB_OpenEpiCentre__Execute__Control.h"
#include <iostream>
bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::_stat_REG_ptr_Flag_isSystemInitialised;
	std::array<bool, 4>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::_stat_REG_ptr_Flag_array_ThreadInitialised;//NUMBER OF THREADS.
// public.
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::CLIB_OpenEpiCentre__Execute__Control()
	{
		std::cout << "entered CONSTRUCTOR of CLIB_OpenEpiCentre__Execute__Control()." << std::endl;
		stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control();
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control();
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control();
		stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control();
		std::cout << "exiting CONSTRUCTOR of CLIB_OpenEpiCentre__Execute__Control()." << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::~CLIB_OpenEpiCentre__Execute__Control()
	{
		delete _stat_REG_ptr_Flag_isSystemInitialised;
		delete _stat_REG_ptr_Flag_array_ThreadInitialised;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj)
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
		stat_REG_boot1_DEFINE_Flag_isSystemInitialised();
		stat_REG_boot1_DEFINE_Flag_array_ThreadInitialised();
		std::cout << "exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Execute__Control(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj)
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
		stat_REG_boot2_SUBSTANTIATE_Flag_isSystemInitialised(obj);
		stat_REG_boot2_SUBSTANTIATE_Flag_array_ThreadInitialised(obj);
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj)
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
		stat_REG_boot3_INITIALISE_Flag_isSystemInitialised(obj);
		stat_REG_boot3_INITIALISE_Flag_array_ThreadInitialised(obj);
		std::cout << "exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Execute__Control(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj)
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
	bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::dyn_REG_get_Flag_is_SystemInitialised()
	{
		return stat_REG_get_ptr_Flag_is_SystemInitialised();
	}
	bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(uint8_t threadID)
	{
		auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
		std::advance(temp, threadID);
		return *temp;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control()
	{
		std::cout << "entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;

		std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;

		std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Execute__Control()
	{
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;

		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control()
	{
		std::cout << "entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
// private.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot1_DEFINE_Flag_isSystemInitialised()
	{
		_stat_REG_ptr_Flag_isSystemInitialised = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot1_DEFINE_Flag_array_ThreadInitialised()
	{
		_stat_REG_ptr_Flag_array_ThreadInitialised = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot2_SUBSTANTIATE_Flag_isSystemInitialised(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj)
	{
		_stat_REG_ptr_Flag_isSystemInitialised = new bool();
		*_stat_REG_ptr_Flag_isSystemInitialised = true;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot2_SUBSTANTIATE_Flag_array_ThreadInitialised(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj)
	{
		_stat_REG_ptr_Flag_array_ThreadInitialised = new std::array<bool, 4>();
		while (stat_get_ptr_list_Of_flag_ThreadInitialised() == nullptr) { }
		for (uint8_t threadId = 0; threadId < sizeof(*stat_get_ptr_list_Of_flag_ThreadInitialised()); threadId++)
		{
			auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
			std::advance(temp, threadId);
			*temp = true;
		}
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot3_INITIALISE_Flag_isSystemInitialised(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj)
	{
		*_stat_REG_ptr_Flag_isSystemInitialised = true;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot3_INITIALISE_Flag_array_ThreadInitialised(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj)
	{
		for (uint8_t threadId = 0; threadId < sizeof(*stat_get_ptr_list_Of_flag_ThreadInitialised()); threadId++)
		{
			auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
			std::advance(temp, threadId);
			*temp = true;
		}
	}
	bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_get_ptr_Flag_is_SystemInitialised()
	{
		bool* temp = nullptr;
		temp = new bool(false);
		for (uint8_t threadID = 0; threadID < sizeof(*stat_get_ptr_list_Of_flag_ThreadInitialised()); threadID++)
		{
			auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
			std::advance(temp, threadID);
			if (*temp == true) stat_REG_set_Flag_is_SystemInitialised(true);
		}
		delete temp;
		return stat_REG_get_ptr_Flag_is_SystemInitialised();
	}
	std::array<bool, 4>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_get_ptr_list_Of_flag_ThreadInitialised()
	{
		return _stat_REG_ptr_Flag_array_ThreadInitialised;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_set_Flag_is_SystemInitialised(bool newFlag)
	{
		*_stat_REG_ptr_Flag_isSystemInitialised = newFlag;
	}