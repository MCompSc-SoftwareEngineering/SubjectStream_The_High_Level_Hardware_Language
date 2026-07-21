#include "../include/WriteEnableForThreadsAt_ServerInputReceive__App.h"
#include "../include/WriteEnableForThreadsAt_ServerInputReceive__Control.h"
#include "../include/WriteEnableForThreadsAt_ServerInputReceive__Framework.h"
#include "../include/WriteEnableForThreadsAt_ServerInputReceive__Global.h"
#include <cstdint>
#include <iostream>
#include <ostream>
    CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__Control* CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::_stat_CLASS_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control = NULL;
    CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::WriteEnableForThreadsAt_ServerInputReceive__App()
    {
        CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive__App();
        CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__App();
        CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__App();
    }
    CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::~WriteEnableForThreadsAt_ServerInputReceive__App()
    {
        delete _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive__App()
    {
        std::cout << "entered CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;

        std::cout << "exiting CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__App()
    {
        std::cout << "entered CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive" << std::endl;
        stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__App__Control();
        std::cout << "exiting CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__App()
    {
        std::cout << "entered CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
        stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__App__Control();
        std::cout << "exiting CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive__App()
    {
        std::cout << "entered REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;

        std::cout << "exiting REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__App(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj)
    {
        std::cout << "entered REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;

        std::cout << "exiting REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive__App(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj)
    {
        std::cout << "entered REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;

        std::cout << "exiting REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__App(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj)
    {
        std::cout << "entered REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;

        std::cout << "exiting REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerInputReceive__App(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__2ibt_flag_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerInputReceive__2bitFLAG_IDLE());
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control()->dyn_REG_set_WriteEnableForThreadsAt_ServerInputReceive__Control__new_writeCycle_Try_ThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerInputReceive__Control__list_Of_WriteActive_Count_For_ThreadId(coreId) + 1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control()->dyn_REG_get_Item_WriteEnableForThreadsAt_ServerInputReceive__Control__new_writeCycle_Try_ThreadId_Index() == 3)
        {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control()->dyn_REG_set_WriteEnableForThreadsAt_ServerInputReceive__Control__new_writeCycle_Try_ThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive__Control__writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive__Control__writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control()->dyn_REG_set_flag_WriteEnableForThreadsAt_ServerInputReceive__Control__praisingWrite(false);
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive__Control__writeEnable_Request(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive__Control__writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive__Control__writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive__Control__writeEnable_Activate(obj, coreId);
    }
    CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__Control* CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control()
    {
        return stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control();
    }

    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__App__Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control = NULL;
    }

    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__App__Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control = new class CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__Control();
        while (stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control() == NULL) {}
    }
    CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__Control* CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive__App::stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control()
    {
        return _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerInputReceive__App__Control;
    }