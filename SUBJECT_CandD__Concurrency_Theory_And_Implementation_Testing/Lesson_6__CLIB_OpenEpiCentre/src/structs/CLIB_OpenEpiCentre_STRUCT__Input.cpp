#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT__Input.h"
#include "../../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Data.h"
#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT__User_Input.h"
#include <cstdint>
#include <iostream>
#include <list>
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::_REG_ptr_Input_praiseEventId;
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::_REG_ptr_Input_playerId;
    std::list<CLIBOpenEpiCentre::Object*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::_REG_ptr_List_Of_PraiseInputSubset;
// public.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::app_select_And_Set_Input_Subset(CLIB_OpenEpiCentre__Framework* obj, uint8_t praiseEventId)
    {
        CLIB_OpenEpiCentre_STRUCT__Input* bufferInputWRITE = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(obj);
        switch (praiseEventId)
        {
            case 0:
                bufferInputWRITE->dyn_REG_set_ptr_Item_Of_ptr_Inputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise0*>(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Input()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            case 1:
                bufferInputWRITE->dyn_REG_set_ptr_Item_Of_ptr_Inputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise1*>(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Input()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            case 2:
                bufferInputWRITE->dyn_REG_set_ptr_Item_Of_ptr_Inputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise2*>(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Input()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            case 3:
                bufferInputWRITE->dyn_REG_set_ptr_Item_Of_ptr_Inputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise3*>(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Input()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_boot1_DEFINE_Input()
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Input()" << std::endl;
        stat_REG_boot1_DEFINE_Input_praiseEventId();
        stat_REG_boot1_DEFINE_Input_praiseEventId();
        stat_REG_boot1_DEFINE_Input_List_Of_PraiseInputSubset();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_boot2_SUBSTANTIATE_Input()
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Input()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_Input_playerId();
        stat_REG_boot2_SUBSTANTIATE_Input_playerId();
        stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseInputSubset();
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_boot3_INITIALISE_Input(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Input()" << std::endl;
        stat_REG_boot3_INITIALISE_Input_praiseEventId();
        stat_REG_boot3_INITIALISE_Input_playerId();
        stat_REG_boot3_INITIALISE_List_Of_PraiseInputSubset(obj, (uint8_t)(0));
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_boot4_INSTANTIATE_Input()
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Input()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Input()" << std::endl;
    }
    uint8_t CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_get_ptr_Input_playerId()
    {
        return *stat_REG_get_ptr_Input_praiseEventId();
    }
    uint8_t CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_get_ptr_Input_praiseEventId()
    {
        return *stat_REG_get_ptr_Input_playerId();
    }
    CLIBOpenEpiCentre::Object* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_get_ptr_Item_Of_ptr_Inputs_Subset()
    {
        auto temp = stat_REG_get_ptr_Item_Of_ptr_Inputs_Subset()->begin();
        std::advance(temp, 0);
        return *temp;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_set_Input_playerId(uint8_t newPlayerId)
    {
        *stat_REG_get_ptr_Input_playerId() = newPlayerId;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_set_ptr_Input_praiseEventId(uint8_t new_uint8_t)
    {
        *stat_REG_get_ptr_Input_praiseEventId() = new_uint8_t;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_set_ptr_Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT__Input_praise0* objInputSubset)
    {
        auto temp = stat_REG_get_ptr_Item_Of_ptr_Inputs_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<Object*>(objInputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_set_ptr_Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT__Input_praise1* objInputSubset)
    {
        auto temp = stat_REG_get_ptr_Item_Of_ptr_Inputs_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<Object*>(objInputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_set_ptr_Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT__Input_praise2* objInputSubset)
    {
        auto temp = stat_REG_get_ptr_Item_Of_ptr_Inputs_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<Object*>(objInputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_set_ptr_Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT__Input_praise3* objInputSubset)
    {
        auto temp = stat_REG_get_ptr_Item_Of_ptr_Inputs_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<Object*>(objInputSubset);
    }

    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_CLASS_boot0_DECLARE_Input()
    {
        std::cout << "entered stat_CLASS_boot0_DECLARE_Input()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLARE_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_CLASS_boot1_DEFINE_Input()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Input()" << std::endl;

        std::cout << "exiting stat_CLASS_boot1_DEFINE_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_CLASS_boot3_INITIALISE_Input()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Input()" << std::endl;

        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_CLASS_boot4_INSTANTIATE_Input()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Input()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot0_DECLARE_Input()
    {
        std::cout << "entered stat_REG_boot0_DECLARE_Input()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLARE_Input()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot1_DEFINE_Input_praiseEventId()
    {
        _REG_ptr_Input_praiseEventId = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot1_DEFINE_Input_playerId()
    {
        _REG_ptr_Input_playerId = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot1_DEFINE_Input_List_Of_PraiseInputSubset()
    {
        _REG_ptr_List_Of_PraiseInputSubset = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot2_SUBSTANTIATE_Input_praiseEventId()
    {
        _REG_ptr_Input_praiseEventId = new uint8_t();
        *_REG_ptr_Input_praiseEventId = static_cast<uint8_t>((UINT8_MAX));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot2_SUBSTANTIATE_Input_playerId()
    {
        _REG_ptr_Input_playerId = new uint8_t();
        *_REG_ptr_Input_playerId = static_cast<uint8_t>((UINT8_MAX));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseInputSubset()
    {
        _REG_ptr_List_Of_PraiseInputSubset = new std::list<Object*>();
        while (stat_REG_get_ptr_Item_Of_ptr_Inputs_Subset() == nullptr) { }
        stat_REG_get_ptr_Item_Of_ptr_Inputs_Subset()->resize(1);
        auto temp = stat_REG_get_ptr_Item_Of_ptr_Inputs_Subset()->begin();
        std::advance(temp, static_cast<uint8_t>(0));
        *temp = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot3_INITIALISE_Input_praiseEventId()
    {
        *_REG_ptr_Input_praiseEventId = static_cast<uint8_t>(0);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot3_INITIALISE_Input_playerId()
    {
        *_REG_ptr_Input_playerId = static_cast<uint8_t>(0);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot3_INITIALISE_List_Of_PraiseInputSubset(CLIB_OpenEpiCentre__Framework* obj, uint8_t praiseId)
    {
        auto temp = stat_REG_get_ptr_Item_Of_ptr_Inputs_Subset()->begin();
        std::advance(temp, static_cast<uint8_t>(0));
        *temp = obj->dyn_STRUCT_get_User_Input()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseInputSubsets(praiseId);
    }
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_get_ptr_Input_praiseEventId()
    {
        return _REG_ptr_Input_praiseEventId;
    }
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_get_ptr_Input_playerId()
    {
        return _REG_ptr_Input_playerId;
    }
    std::list<CLIBOpenEpiCentre::Object*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_get_ptr_Item_Of_ptr_Inputs_Subset()
    {
        return _REG_ptr_List_Of_PraiseInputSubset;
    }