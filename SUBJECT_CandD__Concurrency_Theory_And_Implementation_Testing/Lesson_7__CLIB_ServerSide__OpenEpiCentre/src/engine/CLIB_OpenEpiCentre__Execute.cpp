#include "../../include/engine/CLIB_OpenEpiCentre__Execute.h"
#include "../../libs/CLIB_LaunchQueForThreadsAt_Server/include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/CLIB_WriteEnableForThreadsAt_ServerInputReceive.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h"
#include "../../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Algorithms.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Execute__Control.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Global.h"
#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT__Concurrent.h"
#include <iostream>
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::_stat_CLASS_CLIB_OpenEpiCentre__Execute__Control;
    std::list<std::thread*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::_stat_REG_List_Of_Threads;
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::_stat_PGM_ConcurrentQue_Server;
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::_stat_PGM_WriteEnable_ServerInputReceive;
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::_stat_PGM_WriteEnable_ServerOutputSend;
// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::CLIB_OpenEpiCentre__Execute()
    {
        std::cout << "entered CONSTRUCTOR of CLIB_OpenEpiCentre_Execute()." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute();
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute();
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute();
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Execute();
        std::cout << "exiting CONSTRUCTOR of CLIB_OpenEpiCentre_Execute()." << std::endl;
    }
        CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::~CLIB_OpenEpiCentre__Execute()
    {
        delete _stat_CLASS_CLIB_OpenEpiCentre__Execute__Control;
        delete _stat_REG_List_Of_Threads;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::dyn_CLASS_get_ptr_Execute_Control()
    {
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Execute__Control();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre__Framework* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Execute()" << std::endl;
        stat_REG_boot1_DEFINE_List_Of_Threads();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre__Framework* obj)
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Execute()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(obj);
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre__Framework* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Execute()" << std::endl;
        stat_REG_boot3_INITIALISE_List_Of_Threads(obj);
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre__Framework* obj)
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Execute()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Execute()" << std::endl;
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::dyn_PGM_get_ConcurrentQue_Server()
    {
        return stat_PGM_get_ptr_ConcurrentQue_Server();
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::dyn_PGM_get_WriteEnable_ServerInputReceive()
    {
        return stat_PGM_get_ptr_WriteEnable_ServerInputReceive();
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::dyn_PGM_get_WriteEnable_ServerOutputSend()
    {
        return stat_PGM_get_ptr_WriteEnable_ServerOutputSend();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute()
    {
        std::cout << "entered stat_CLASS_boot0_DECLARE_Execute()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLARE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Execute()" << std::endl;
        stat_CLASS_boot1_DEFINE_Execute_Control();
        stat_PGM_boot1_DEFINE_ConcurrentQue_Server();
        stat_PGM_boot1_DEFINE_ServerInputReceive();
        stat_PGM_boot1_DEFINE_ServerOutputSend();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Execute()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Execute_Control();
        stat_PGM_boot3_INITIALISE_ConcurrentQue_Server();
        stat_PGM_boot3_INITIALISE_ServerInputReceive();
        stat_PGM_boot3_INITIALISE_ServerOutputSend();
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute()
    {
    std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;
        unsigned char* bytes_uint8_t = CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_uint8_t_to_ByteArray(UINT8_MAX);

       std::cout << "entered CHECK member function of CLIB_WriteEnableForThreadsAt_ServerInputReceive() " << std::endl;
        //CLIBWriteQueAtServerInputReceive::CLIBWriteEnableForThreadsAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__app_FUNCT_generate_Program();
        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_get_flag_isPGM_INSTANTIATED();
        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_terminate_Program();
        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_write_End(bytes_uint8_t);
        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_write_Start(bytes_uint8_t);
        std::cout << "done CHECK member function of CLIB_WriteEnableForThreadsAt_ServerInputReceive() " << std::endl;

        std::cout << "entered CHECK member function of CLIB_WriteEnableForThreadsAt_ServerOutputSend() " << std::endl;
        //CLIBWriteQueAtServerOutputSend::CLIBWriteEnableForThreadsAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__app_FUNCT_generate_Program();
        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_get_flag_isPGM_INSTANTIATED();
        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_terminate_Program();
        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_write_End(bytes_uint8_t);
        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_write_Start(bytes_uint8_t);
        std::cout << "done CHECK member function of CLIB_WriteEnableForThreadsAt_ServerOutputSend() " << std::endl;

        std::cout << "entered CHECK member function of CLIBLaunchEnableForConcurrentThreadsAtServer() " << std::endl;
        //CLIBLaunchQueAtServer::CLIBLaunchEnableForConcurrentThreadsAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_generate_Program();
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_get_flag_isPGM_INSTANTIATED();
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_request_Wait_launch(bytes_uint8_t);
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_terminate_Program();
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_thread_End(bytes_uint8_t);
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_coreId_To_launch();
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_Active();
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_ConcurrentCoreState(bytes_uint8_t);
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_Idle();
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_State_launchBit();
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_ConcurrentCoreState(bytes_uint8_t);
        std::cout << "done CHECK member function of CLIBLaunchEnableForConcurrentThreadsAtServer() " << std::endl;

        delete bytes_uint8_t;
    std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Execute()
    {

    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_CLASS_boot1_DEFINE_Execute_Control()
    {
        _stat_CLASS_CLIB_OpenEpiCentre__Execute__Control = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_CLASS_boot3_INITIALISE_Execute_Control()
    {
        _stat_CLASS_CLIB_OpenEpiCentre__Execute__Control = new CLIB_OpenEpiCentre__Execute__Control();
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Execute__Control() == nullptr) {}
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Execute__Control()
    {
        return _stat_CLASS_CLIB_OpenEpiCentre__Execute__Control;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_REG_boot1_DEFINE_List_Of_Threads()
    {
        _stat_REG_List_Of_Threads = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(CLIB_OpenEpiCentre__Framework* obj)
    {
        _stat_REG_List_Of_Threads = new std::list<std::thread*>();
        while (stat_PGM_get_ptr_List_Of_Threads() == nullptr) { }
        stat_PGM_get_ptr_List_Of_Threads()->resize(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Global()->dyn_REG_get_Item_number_Of_Implemented_Cores() - 1);
        for (uint8_t threadId = 0; threadId < sizeof(*stat_PGM_get_ptr_List_Of_Threads()); threadId++)
        {
            auto temp = stat_PGM_get_ptr_List_Of_Threads()->begin();
            std::advance(temp, threadId);
            *temp = nullptr;
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_REG_boot3_INITIALISE_List_Of_Threads(CLIB_OpenEpiCentre__Framework* obj)
    {
        for (uint8_t threadId = 0; threadId < sizeof(*stat_PGM_get_ptr_List_Of_Threads()); threadId++)
        {
            auto temp = stat_PGM_get_ptr_List_Of_Threads()->begin();
            std::advance(temp, threadId);
            *temp = new std::thread(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(threadId)->stat_app_thread_Concurrency, obj, threadId);
        }
    }
    std::list<std::thread*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_get_ptr_List_Of_Threads()
    {
        return _stat_REG_List_Of_Threads;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot1_DEFINE_ConcurrentQue_Server()
    {
        _stat_PGM_ConcurrentQue_Server = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot1_DEFINE_ServerInputReceive()
    {
        _stat_PGM_WriteEnable_ServerInputReceive = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot1_DEFINE_ServerOutputSend()
    {
        _stat_PGM_WriteEnable_ServerOutputSend = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot3_INITIALISE_ConcurrentQue_Server()
    {
        _stat_PGM_ConcurrentQue_Server = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_ConcurrentQue_Server() == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot3_INITIALISE_ServerInputReceive()
    {
        _stat_PGM_WriteEnable_ServerInputReceive = CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_WriteEnable_ServerInputReceive() == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot3_INITIALISE_ServerOutputSend()
    {
        _stat_PGM_WriteEnable_ServerOutputSend = CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_WriteEnable_ServerOutputSend() == nullptr) {}
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_get_ptr_ConcurrentQue_Server()
    {
        return _stat_PGM_ConcurrentQue_Server;
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_get_ptr_WriteEnable_ServerInputReceive()
    {
        return _stat_PGM_WriteEnable_ServerInputReceive;
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_get_ptr_WriteEnable_ServerOutputSend()
    {
        return _stat_PGM_WriteEnable_ServerOutputSend;
    }