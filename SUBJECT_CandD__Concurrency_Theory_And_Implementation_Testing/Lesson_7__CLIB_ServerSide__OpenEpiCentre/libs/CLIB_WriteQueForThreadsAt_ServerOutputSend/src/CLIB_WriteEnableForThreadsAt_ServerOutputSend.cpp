#include "../include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend__Framework.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend__Global.h"
#include <cstdint>
#include <iostream>
#include <span>
	CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Framework* _stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerOutputSend;
	bool* _stat_REG_flag_CLIB_WriteEnableForThreadsAt_ServerOutputSend__isMemberFunctionINSTANTIATED;
// public.
	void* CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_generate_Program()
	{
		std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
		CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_boot1_DEFINE_Framework();
		CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_boot3_INITIALISE_Framework();
		std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

		std::cout << "started Registers - DEFINE" << std::endl;
		CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework()->dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Framework(CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework());
		std::cout << "done Registers - DEFINE." << std::endl;

		std::cout << "started Registers - SUBSTANTIATE." << std::endl;
		CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework()->dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend__Framework(CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework());
		std::cout << "done Registers - SUBSTANTIATE." << std::endl;

		std::cout << "started Registers - INITIALISE." << std::endl;
		CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework()->dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Framework(CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework());
		std::cout << "done Registers - INITIALISE." << std::endl;

		std::cout << "started Program - INSTANTIATION." << std::endl;
		CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_boot1_DEFINE_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED();
		CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED();
		CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED();
		CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework()->dyn_boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerOutputSend__Framework(CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework());
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
		return (void*)CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework();
	}
	unsigned char* CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_get_flag_isPGM_INSTANTIATED()
	{
		if (CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[1] == false) {
			return WriteEnableForThreadsAt_ServerOutputSend__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbBoolean_To_MsbByteArray(CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[0]);
		}
		else {
			CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[1] = false;
			CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED();
			return WriteEnableForThreadsAt_ServerOutputSend__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbBoolean_To_MsbByteArray(true);
		}
	}
	void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_terminate_Program()
	{
		if (CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[3] == false) {
			delete _stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerOutputSend;
			while (CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework() != nullptr) {}
		}
		else {
			CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[3] = false;
			CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED();
		}
	}

	void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_write_End(unsigned char* bytes)
	{
		if (CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[4] == false) {
			CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_APP_FUNCT_write_End(CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework(), WriteEnableForThreadsAt_ServerOutputSend__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_Msbuint8_t(bytes));
		}
		else {
			CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[4] = false;
			CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED();
			CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_App_FUNCT_set_flag_isCurrentThreadRELEASED(true);
		}
	}
	void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_write_Start(unsigned char* bytes)
	{
		if (CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[5] == false) {
			CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_APP_FUNCT_write_Start(CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework(), WriteEnableForThreadsAt_ServerOutputSend__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_Msbuint8_t(bytes));
		}
		else {
			CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[5] = false;
			CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED();//INSTANTIATE this member function last.
		}
	}
	bool CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_APP_FUNCT_Calc_IsAllINSTANTIATED() {
		for(int index = 0; index < 5; index++) {
			if (_stat_REG_flag_CLIB_WriteEnableForThreadsAt_ServerOutputSend__isMemberFunctionINSTANTIATED[index] == false) {
				_stat_REG_flag_CLIB_WriteEnableForThreadsAt_ServerOutputSend__isMemberFunctionINSTANTIATED[0] = false;
			}
		}
		return *CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED();
	}
	void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_App_FUNCT_set_flag_isCurrentThreadRELEASED(bool bytes) {
		return CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_App_FUNCT_set_flag_isCurrentThreadRELEASED(bytes);
	}
	void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_boot1_DEFINE_Framework()
	{
		_stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerOutputSend = NULL;
	}
	void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_boot3_INITIALISE_Framework()
	{
		_stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerOutputSend = new class CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Framework();
		while (CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework() == NULL) {}
	}
	CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Framework* CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_CLASS_get_ptr_Framework()
	{
		return _stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerOutputSend;
	}
	void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_boot1_DEFINE_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()
	{
		_stat_REG_flag_CLIB_WriteEnableForThreadsAt_ServerOutputSend__isMemberFunctionINSTANTIATED = NULL;
	}
	void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()
	{
		_stat_REG_flag_CLIB_WriteEnableForThreadsAt_ServerOutputSend__isMemberFunctionINSTANTIATED = new bool[5]();
		while (CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED() == NULL) {}
		for (uint8_t index = 0; index < sizeof(*CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()); index++)
		{
			_stat_REG_flag_CLIB_WriteEnableForThreadsAt_ServerOutputSend__isMemberFunctionINSTANTIATED[index] = true;
		}
	}
	void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()
	{
		for (uint8_t index = 0; index < sizeof(*CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()); index++)
		{
			_stat_REG_flag_CLIB_WriteEnableForThreadsAt_ServerOutputSend__isMemberFunctionINSTANTIATED[index] = true;
		}
	}
	bool* CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()
	{
		return _stat_REG_flag_CLIB_WriteEnableForThreadsAt_ServerOutputSend__isMemberFunctionINSTANTIATED;
	}