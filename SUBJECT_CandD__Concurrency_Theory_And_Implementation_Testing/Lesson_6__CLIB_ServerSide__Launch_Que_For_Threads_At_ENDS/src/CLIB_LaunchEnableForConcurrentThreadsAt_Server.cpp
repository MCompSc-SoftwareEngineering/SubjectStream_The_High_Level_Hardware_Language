#include <iostream>
#include "../include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__Framework.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__Global.h"
CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Framework* _ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server;
    bool* CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLIBLaunchQueAtServer_REG_isFlagINSTANTIATED;
// public.
    void* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_generate_Program()
    {
    std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
    CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Framework();
    CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Framework();
    std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

    std::cout << "started Registers - DEFINE" << std::endl;
    CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework()->dyn_dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Framework(CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework());
    std::cout << "done Registers - DEFINE." << std::endl;

    std::cout << "started Registers - SUBSTANTIATE." << std::endl;
    CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework()->dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__Framework(CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework());
    std::cout << "done Registers - SUBSTANTIATE." << std::endl;

    std::cout << "started Registers - INITIALISE." << std::endl;
    CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework()->dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Framework(CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework());
    std::cout << "done Registers - INITIALISE." << std::endl;

    std::cout << "started Program - INSTANTIATION." << std::endl;
    CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_dyn_REG_boot1_DEFINE_CLIBLaunchQueAtServer_isFlagINSTANTIATED();
    CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtServer_isFlagINSTANTIATED();
    CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtServer_isFlagINSTANTIATED();
    CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework()->dyn_dyn_PGM_boot4_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server__Framework(CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework());
    std::cout << "done Program - INSTANTIATION." << std::endl;

    std::cout << "" << std::endl;
    std::cout << "        ,     \\      /      ," << std::endl;
    std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
    std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
    std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
    std::cout << "|              |\\../|               |" << std::endl;
    std::cout << "|               \\VV/                |" << std::endl;
    std::cout << "|        MIT Launch Que .dll        |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
    std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
    std::cout << "|  /    V          ))        V   \\  |" << std::endl;
    std::cout << "|/                //               \\| " << std::endl;
    std::cout << "`                 V                 '" << std::endl;
    std::cout << "" << std::endl;
    return (void*)CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework();
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_get_flag_isPGM_INSTANTIATED()
    {
        if (CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[1] == false) {
            return LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__bool_to_ByteArray(CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[0]);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[1] = false;
            return LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__bool_to_ByteArray(true);
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_request_Wait_launch(unsigned char* bytes)
    {
        if (CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[2] == false) {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_APP_LaunchEnableForConcurrentThreadsAt_Server__thread_Start(CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework(), CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__ByteArray_To_uint8_t(bytes));
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[2] = false;
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_terminate_Program()
    {
        if (CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[3] == false) {
            delete _ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server;
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[3] = false;
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_thread_End(unsigned char* bytes)
    {
        if (CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[4] == false) {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_APP_LaunchEnableForConcurrentThreadsAt_Server__thread_End(CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework(), (uint8_t)*bytes);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[4] = false;
        }
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_coreId_To_launch()
    {
        if (CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[5] == false) {
            return CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__uint8_t_To_ByteArray(CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(0));
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[5] = false;
            return CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__uint8_t_To_ByteArray(UINT8_MAX);
        }
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_Active()
    {
        if (CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[6] == false) {
            return LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__bool_to_ByteArray(CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_ACTIVE());
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[6] = false;
            return LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__bool_to_ByteArray(true);
        }
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_ConcurrentCoreState(unsigned char* bytes)
    {
        if (CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[7] == false) {
            return LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__bool_to_ByteArray(CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__ByteArray_To_uint8_t(bytes)));
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[7] = false;
            return LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__bool_to_ByteArray(true);
        }
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_Idle()
    {
        if (CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[8] == false) {
            return LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__bool_to_ByteArray(CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_IDLE());
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[8] = false;
            return LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__bool_to_ByteArray(LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__bool_to_ByteArray(true));
        }
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_State_launchBit()
    {
        if (CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[9] == false) {
            return LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__bool_to_ByteArray(CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(0)));
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[9] = false;
            return LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__bool_to_ByteArray(true);
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_set_Flag_ConcurrentCoreState(unsigned char* bytesThreadId, unsigned char*  byteBool)
    {
        if (CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[10] == false) {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__ByteArray_To_uint8_t(bytesThreadId), byteBool);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[10] = false;
            CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED();//INSTANTIATE this member function last.
        }
    }
// private.
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_app_FUNCT_Calc_IsAllINSTANTIATED()
    {
        CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[0] = false;
        for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLIBLaunchQueAtServer_REG_isFlagINSTANTIATED); memberFunctionId++)
        {
            if (CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[memberFunctionId] == true)
            {
                CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[0] = true;
            }
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Framework()
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server = nullptr;
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Framework()
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server = new CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Framework();
        while (CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED() == nullptr) {}
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Framework* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework()
    {
        return _ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server;
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_dyn_REG_boot1_DEFINE_CLIBLaunchQueAtServer_isFlagINSTANTIATED()
    {
        CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLIBLaunchQueAtServer_REG_isFlagINSTANTIATED = nullptr;
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtServer_isFlagINSTANTIATED()
    {
        CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLIBLaunchQueAtServer_REG_isFlagINSTANTIATED = new bool[11]();
        for (uint8_t index = 0; index < sizeof(*CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()); index++)
        {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLIBLaunchQueAtServer_REG_isFlagINSTANTIATED[index] = true;
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtServer_isFlagINSTANTIATED()
    {
        for (uint8_t index = 0; index < sizeof(*CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()); index++)
        {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLIBLaunchQueAtServer_REG_isFlagINSTANTIATED[index] = true;
        }
    }
    bool* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()
    {
        return CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLIBLaunchQueAtServer_REG_isFlagINSTANTIATED;
    }