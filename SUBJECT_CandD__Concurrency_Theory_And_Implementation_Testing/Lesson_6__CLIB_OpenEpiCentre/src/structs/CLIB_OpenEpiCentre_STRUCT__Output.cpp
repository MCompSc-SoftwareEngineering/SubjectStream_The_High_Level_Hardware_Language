#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT__Output.h"
#include "../../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Data.h"
#include <cstdint>
#include <iostream>
#include <list>
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::_REG_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId;
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::_REG_ptr_Output_playerId;
    std::list<CLIBOpenEpiCentre::Object*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::_REG_ptr_List_Of_PraiseOutputSubset;
// public.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::app_select_And_Set_Output_Subset(CLIB_OpenEpiCentre__Framework* obj, uint8_t praiseEventId)
    {
        CLIB_OpenEpiCentre_STRUCT__Output* bufferOutputWRITE = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(obj);
        switch (praiseEventId)
        {
            case 0:
                bufferOutputWRITE->dyn_REG_set_ptr_Item_Of_ptr_Outputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise0*>(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Output()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseOutputSubsets(praiseEventId)));
                break;

            case 1:
                bufferOutputWRITE->dyn_REG_set_ptr_Item_Of_ptr_Outputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise1*>(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Output()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseOutputSubsets(praiseEventId)));
                break;

            case 2:
                bufferOutputWRITE->dyn_REG_set_ptr_Item_Of_ptr_Outputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise2*>(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Output()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseOutputSubsets(praiseEventId)));
                break;

            case 3:
                bufferOutputWRITE->dyn_REG_set_ptr_Item_Of_ptr_Outputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise3*>(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_User_Output()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseOutputSubsets(praiseEventId)));
                break;

        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_boot1_DEFINE_Output()
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Output()" << std::endl;
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId();
        stat_REG_boot1_DEFINE_Output_List_Of_PraiseOutputSubset();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_boot2_SUBSTANTIATE_Output()
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Output()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_Output_playerId();
        stat_REG_boot2_SUBSTANTIATE_Output_playerId();
        stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseOutputSubset();
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_boot3_INITIALISE_Output(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Output()" << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId();
        stat_REG_boot3_INITIALISE_Output_playerId();
        stat_REG_boot3_INITIALISE_List_Of_PraiseOutputSubset(obj, (uint8_t)(0));
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_boot4_INSTANTIATE_Output()
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Output()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Output()" << std::endl;
    }
    uint8_t CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_get_ptr_Output_playerId()
    {
        return *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId();
    }
    uint8_t CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId()
    {
        return *stat_REG_get_ptr_Output_playerId();
    }
    CLIBOpenEpiCentre::Object* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_get_ptr_Item_Of_ptr_Outputs_Subset()
    {
        auto temp = stat_REG_get_ptr_Item_Of_ptr_Outputs_Subset()->begin();
        std::advance(temp, 0);
        return *temp;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_set_Output_playerId(uint8_t newPlayerId)
    {
        *stat_REG_get_ptr_Output_playerId() = newPlayerId;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId(uint8_t new_uint8_t)
    {
        *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId() = new_uint8_t;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_set_ptr_Item_Of_ptr_Outputs_Subset(CLIB_OpenEpiCentre_STRUCT__Output_praise0* objOutputSubset)
    {
        auto temp = stat_REG_get_ptr_Item_Of_ptr_Outputs_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<Object*>(objOutputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_set_ptr_Item_Of_ptr_Outputs_Subset(CLIB_OpenEpiCentre_STRUCT__Output_praise1* objOutputSubset)
    {
        auto temp = stat_REG_get_ptr_Item_Of_ptr_Outputs_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<Object*>(objOutputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_set_ptr_Item_Of_ptr_Outputs_Subset(CLIB_OpenEpiCentre_STRUCT__Output_praise2* objOutputSubset)
    {
        auto temp = stat_REG_get_ptr_Item_Of_ptr_Outputs_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<Object*>(objOutputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_set_ptr_Item_Of_ptr_Outputs_Subset(CLIB_OpenEpiCentre_STRUCT__Output_praise3* objOutputSubset)
    {
        auto temp = stat_REG_get_ptr_Item_Of_ptr_Outputs_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<Object*>(objOutputSubset);
    }

    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_CLASS_boot0_DECLARE_Output()
    {
        std::cout << "entered stat_CLASS_boot0_DECLARE_Output()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLARE_Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_CLASS_boot1_DEFINE_Output()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Output()" << std::endl;

        std::cout << "exiting stat_CLASS_boot1_DEFINE_Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_CLASS_boot3_INITIALISE_Output()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Output()" << std::endl;

        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_CLASS_boot4_INSTANTIATE_Output()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Output()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot0_DECLARE_Output()
    {
        std::cout << "entered stat_REG_boot0_DECLARE_Output()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLARE_Output()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId()
    {
        _REG_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot1_DEFINE_Output_playerId()
    {
        _REG_ptr_Output_playerId = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot1_DEFINE_Output_List_Of_PraiseOutputSubset()
    {
        _REG_ptr_List_Of_PraiseOutputSubset = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId()
    {
        _REG_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId = new uint8_t();
        *_REG_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId = static_cast<uint8_t>((UINT8_MAX));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot2_SUBSTANTIATE_Output_playerId()
    {
        _REG_ptr_Output_playerId = new uint8_t();
        *_REG_ptr_Output_playerId = static_cast<uint8_t>((UINT8_MAX));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseOutputSubset()
    {
        _REG_ptr_List_Of_PraiseOutputSubset = new std::list<Object*>();
        while (stat_REG_get_ptr_Item_Of_ptr_Outputs_Subset() == nullptr) { }
        stat_REG_get_ptr_Item_Of_ptr_Outputs_Subset()->resize(1);
        auto temp = stat_REG_get_ptr_Item_Of_ptr_Outputs_Subset()->begin();
        std::advance(temp, static_cast<uint8_t>(0));
        *temp = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId()
    {
        *_REG_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId = static_cast<uint8_t>(0);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot3_INITIALISE_Output_playerId()
    {
        *_REG_ptr_Output_playerId = static_cast<uint8_t>(0);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot3_INITIALISE_List_Of_PraiseOutputSubset(CLIB_OpenEpiCentre__Framework* obj, uint8_t praiseId)
    {
        auto temp = stat_REG_get_ptr_Item_Of_ptr_Outputs_Subset()->begin();
        std::advance(temp, static_cast<uint8_t>(0));
        *temp = obj->dyn_STRUCT_get_User_Output()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseOutputSubsets(praiseId);
    }
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId()
    {
        return _REG_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId;
    }
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_get_ptr_Output_playerId()
    {
        return _REG_ptr_Output_playerId;
    }
    std::list<CLIBOpenEpiCentre::Object*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_get_ptr_Item_Of_ptr_Outputs_Subset()
    {
        return _REG_ptr_List_Of_PraiseOutputSubset;
    }