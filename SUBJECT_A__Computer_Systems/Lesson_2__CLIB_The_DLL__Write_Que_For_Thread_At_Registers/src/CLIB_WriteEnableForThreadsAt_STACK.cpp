#include "../include/CLIB_WriteEnableForThreadsAt_STACK.h"
#include "../include/WriteEnableForThreadsAt_STACK__Framework.h"
#include "../include/WriteEnableForThreadsAt_STACK__Global.h"
#include <cstdint>
#include <iostream>
#include <span>
	CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK__Framework* _stat_REG_ptr_Framework_WriteEnableForThreadsAt_STACK;
	bool* _stat_REG_flag_CLIB_WriteEnableForThreadsAt_STACK__isMemberFunctionINSTANTIATED;
// public.
	void* CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__App_FUNCT_generate_Program()
	{
		std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
		CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_boot1_DEFINE_Framework();
		CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_boot3_INITIALISE_Framework();
		std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

		std::cout << "started Registers - DEFINE" << std::endl;
		CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework()->dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_STACK__Framework(CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework());
		std::cout << "done Registers - DEFINE." << std::endl;

		std::cout << "started Registers - SUBSTANTIATE." << std::endl;
		CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework()->dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_STACK__Framework(CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework());
		std::cout << "done Registers - SUBSTANTIATE." << std::endl;

		std::cout << "started Registers - INITIALISE." << std::endl;
		CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework()->dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_STACK__Framework(CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework());
		std::cout << "done Registers - INITIALISE." << std::endl;

		std::cout << "started Program - INSTANTIATION." << std::endl;
		CLIB_WriteEnableForThreadsAt_STACK__stat_REG_boot1_DEFINE_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED();
		CLIB_WriteEnableForThreadsAt_STACK__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED();
		CLIB_WriteEnableForThreadsAt_STACK__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED();
		CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework()->dyn_boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_STACK__Framework(CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework());
		std::cout << "done Program - INSTANTIATION." << std::endl;

		std::cout << "" << std::endl;
		std::cout << "        ,     \\      /      ," << std::endl;
		std::cout << "        ,     \\      /      ," << std::endl;
		std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
		std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
		std::cout << "|              |\\../|               |" << std::endl;
		std::cout << "|               \\VV/                |" << std::endl;
		std::cout << "|        MIT Write Que .dll         |" << std::endl;
		std::cout << "|___________________________________|" << std::endl;
		std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "|/                //               \\| " << std::endl;
		std::cout << "`                 V                 '" << std::endl;
		std::cout << "" << std::endl;
		return (void*)CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework();
	}
	unsigned char* CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__App_FUNCT_get_flag_isPGM_INSTANTIATED()
	{
		if (CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED()[1] == false) {
			return WriteEnableForThreadsAt_STACK__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbBoolean_To_MsbByteArray(CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED()[0]);
		}
		else {
			CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED()[1] = false;
			CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED();
			return WriteEnableForThreadsAt_STACK__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbBoolean_To_MsbByteArray(true);
		}
	}
	void CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__App_FUNCT_terminate_Program()
	{
		if (CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED()[3] == false) {
			delete _stat_REG_ptr_Framework_WriteEnableForThreadsAt_STACK;
			while (CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework() != nullptr) {}
		}
		else {
			CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED()[3] = false;
			CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED();
		}
	}

	void CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__App_FUNCT_write_End(unsigned char* bytes)
	{
		if (CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED()[4] == false) {
			CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_STACK__App()->dyn_APP_FUNCT_write_End(CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework(), WriteEnableForThreadsAt_STACK__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_Msbuint8_t(bytes));
		}
		else {
			CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED()[4] = false;
			CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED();
			CLIB_WriteEnableForThreadsAt_STACK__stat_App_FUNCT_set_flag_isCurrentThreadRELEASED(true);
		}
	}
	void CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__App_FUNCT_write_Start(unsigned char* bytes)
	{
		if (CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED()[5] == false) {
			CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_STACK__App()->dyn_APP_FUNCT_write_Start(CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework(), WriteEnableForThreadsAt_STACK__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_Msbuint8_t(bytes));
		}
		else {
			CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED()[5] = false;
			CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED();//INSTANTIATE this member function last.
		}
	}
	bool CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__stat_APP_FUNCT_Calc_IsAllINSTANTIATED() {
		for(int index = 0; index < 5; index++) {
			if (_stat_REG_flag_CLIB_WriteEnableForThreadsAt_STACK__isMemberFunctionINSTANTIATED[index] == false) {
				_stat_REG_flag_CLIB_WriteEnableForThreadsAt_STACK__isMemberFunctionINSTANTIATED[0] = false;
			}
		}
		return *CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED();
	}
	void CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__stat_App_FUNCT_set_flag_isCurrentThreadRELEASED(bool bytes) {
		return CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_STACK__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_STACK__App__Control()->dyn_App_FUNCT_set_flag_isCurrentThreadRELEASED(bytes);
	}
	void CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_boot1_DEFINE_Framework()
	{
		_stat_REG_ptr_Framework_WriteEnableForThreadsAt_STACK = NULL;
	}
	void CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_boot3_INITIALISE_Framework()
	{
		_stat_REG_ptr_Framework_WriteEnableForThreadsAt_STACK = new class CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK__Framework();
		while (CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework() == NULL) {}
	}
	CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK__Framework* CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__stat_CLASS_get_ptr_Framework()
	{
		return _stat_REG_ptr_Framework_WriteEnableForThreadsAt_STACK;
	}
	void CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__stat_REG_boot1_DEFINE_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED()
	{
		_stat_REG_flag_CLIB_WriteEnableForThreadsAt_STACK__isMemberFunctionINSTANTIATED = NULL;
	}
	void CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED()
	{
		_stat_REG_flag_CLIB_WriteEnableForThreadsAt_STACK__isMemberFunctionINSTANTIATED = new bool[5]();
		while (CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED() == NULL) {}
		for (uint8_t index = 0; index < sizeof(*CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED()); index++)
		{
			_stat_REG_flag_CLIB_WriteEnableForThreadsAt_STACK__isMemberFunctionINSTANTIATED[index] = true;
		}
	}
	void CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED()
	{
		for (uint8_t index = 0; index < sizeof(*CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED()); index++)
		{
			_stat_REG_flag_CLIB_WriteEnableForThreadsAt_STACK__isMemberFunctionINSTANTIATED[index] = true;
		}
	}
	bool* CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__stat_REG_get_CLIBLaunchQueAtSTACK_isFlagINSTANTIATED()
	{
		return _stat_REG_flag_CLIB_WriteEnableForThreadsAt_STACK__isMemberFunctionINSTANTIATED;
	}