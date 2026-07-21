#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT__Concurrent.h"
#include "../../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Data.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Data__Control.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Execute.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Execute__Control.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise0.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise1.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise2.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise3.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise0.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise1.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise2.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise3.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise0.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise1.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise2.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise3.h"
#include "../../libs/CLIB_LaunchQueForThreadsAt_Server/include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/CLIB_WriteEnableForThreadsAt_ServerInputReceive.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h"
#include <iostream>
// public.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::app_do_Concurrent_Algorithm_For_PraiseEventId(CLIB_OpenEpiCentre__Framework obj, uint8_t playerId, uint8_t praiseEventId, Object* ptr_Input_Subset, Object* ptr_Output_Subset)
    {
        switch (praiseEventId)
        {
        case 0: {
            CLIB_OpenEpiCentre_STRUCT__Algorithm_praise0* _stat_STRUCT_Algorithm_praise0_Subset = obj.dyn_STRUCT_get_User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise0();
            _stat_STRUCT_Algorithm_praise0_Subset->app_Do_Praise(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise0*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise0*>(ptr_Output_Subset));
            break;
        }
        case 1: {
            CLIB_OpenEpiCentre_STRUCT__Algorithm_praise1* _stat_STRUCT_Algorithm_praise1_Subset = obj.dyn_STRUCT_get_User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise1();
            _stat_STRUCT_Algorithm_praise1_Subset->app_Do_Praise(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise1*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise1*>(ptr_Output_Subset));
            break;
        }
        case 2: {
            CLIB_OpenEpiCentre_STRUCT__Algorithm_praise2* _stat_STRUCT_Algorithm_praise2_Subset = obj.dyn_STRUCT_get_User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise2();
            _stat_STRUCT_Algorithm_praise2_Subset->app_Do_Praise(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise2*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise2*>(ptr_Output_Subset));
            break;
        }
        case 3: {
            CLIB_OpenEpiCentre_STRUCT__Algorithm_praise3* _stat_STRUCT_Algorithm_praise3_Subset = obj.dyn_STRUCT_get_User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise3();
            _stat_STRUCT_Algorithm_praise3_Subset->app_Do_Praise(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise3*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise3*>(ptr_Output_Subset));
            break;
        }
        default: {
            break;
        }
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::dyn_REG_boot1_DEFINE_Concurrent()
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Concurrent()" << std::endl;

        std::cout << "exiting dyn_REG_boot1_DEFINE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::dyn_REG_boot2_SUBSTANTIATE_Concurrent()
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Concurrent()" << std::endl;

        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::dyn_REG_boot3_INITIALISE_Concurrent(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Concurrent()" << std::endl;

        std::cout << "exiting dyn_REG_boot3_INITIALISE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::dyn_REG_boot4_INSTANTIATE_Concurrent()
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Concurrent()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::stat_app_thread_Concurrency(CLIB_OpenEpiCentre__Framework* obj, uint8_t concurrent_threadID)
    {
        bool* doneOnce = new bool(true);
        while (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(concurrent_threadID) == true)
        {
            if (*doneOnce == true)
            {
                // set condition code (meta data).
                *doneOnce = false;
            }
        }
        //std::cout << "Thread Initialised: ID=" << (concurrent_threadID) << " => Thread_Concurrency()" << std::endl;//TestBench
        while (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Flag_is_SystemInitialised() == true)
        {

        }
        //std::cout << "Thread Starting " << (concurrent_threadID) << " => Thread_Concurrency()" << std::endl;//TestBench
        while (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(concurrent_threadID) == false)
        {
            switch (CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByteArray_To_Msbuint8_t(CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_ConcurrentCoreState(&concurrent_threadID))) {
                case false: {
                    break;
                }
                case true: {
                    if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_flag_isLoaded_Stack_InputAction() == true)
                    {
                        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_write_Start(CLIB_OpenEpiCentre__Global::stat_CONVERT_uint8_t_to_ByteArray(static_cast<uint8_t>(concurrent_threadID + static_cast<uint8_t>(1))));
                        //todo
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->app_select_And_Set_Output_Subset(obj, obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId());
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->app_FUNCT_pop_From_Stack_Of_Input(obj, concurrent_threadID);
                        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_write_End(CLIB_OpenEpiCentre__Global::stat_CONVERT_uint8_t_to_ByteArray(static_cast<uint8_t>(concurrent_threadID + static_cast<uint8_t>(1))));
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->app_do_Concurrent_Algorithm_For_PraiseEventId(
                            *obj,
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Input_playerId(),
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Input_praiseEventId(),
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Item_Of_ptr_Inputs_Subset(),
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Item_Of_ptr_Outputs_Subset()
                        );
                        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_write_Start(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_uint8_t_to_ByteArray(static_cast<uint8_t>(concurrent_threadID + static_cast<uint8_t>(1))));
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->app_FUNCT_push_To_STACK_Of_Output(obj, concurrent_threadID);
                        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_thread_End(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_uint8_t_to_ByteArray(concurrent_threadID));
                        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_flag_isLoaded_Stack_OutputSend() == true)
                        {
                            if (CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_ConcurrentCoreState(CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_coreId_To_launch()) == CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_Idle())
                            {
                                CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_request_Wait_launch(CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_coreId_To_launch());
                            }
                        }
                        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_write_End(CLIB_OpenEpiCentre__Global::stat_CONVERT_uint8_t_to_ByteArray(static_cast<uint8_t>(concurrent_threadID + static_cast<uint8_t>(1))));
                    }
                    break;
                }
                default: {
                    break;
                };
            }
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::stat_CLASS_boot0_DECLARE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot0_DECLARE_Concurrent()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLARE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::stat_CLASS_boot1_DEFINE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Concurrent()" << std::endl;

        std::cout << "exiting stat_CLASS_boot1_DEFINE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::stat_CLASS_boot3_INITIALISE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Concurrent()" << std::endl;

        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::stat_CLASS_boot4_INSTANTIATE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Concurrent()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::stat_REG_boot0_DECLARE_Concurrent()
    {
        std::cout << "entered stat_REG_boot0_DECLARE_Concurrent()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLARE_Concurrent()" << std::endl;
    }
// private.