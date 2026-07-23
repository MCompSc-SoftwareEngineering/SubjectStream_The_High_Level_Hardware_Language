#include "../../include/engine/CLIB_OpenEpiCentre__Data__Control.h"
#include "../../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Data.h"
#include <vector>
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::_stat_REG_ptr_flag_isLoaded_Stack_InputAction;
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::_stat_REG_ptr_flag_isLoaded_Stack_OutputSend;
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::_stat_REG_ptr_side_To_Write_For_doubleBuffer_Input;
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::_stat_REG_ptr_side_To_Write_For_doubleBuffer_Output;
// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::CLIB_OpenEpiCentre__Data__Control()
    {
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Data__Control();
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control();
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control();
        stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Data__Control();
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Data__Control();
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::~CLIB_OpenEpiCentre__Data__Control()
    {
        delete _stat_REG_ptr_flag_isLoaded_Stack_InputAction;
        delete _stat_REG_ptr_flag_isLoaded_Stack_OutputSend;
        delete _stat_REG_ptr_side_To_Write_For_doubleBuffer_Input;
        delete _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::app_FUNCT_flip_Input_DoubleBuffer()
    {
        stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Input(!stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input());
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::app_FUNCT_Flip_Output_DoubleBuffer()
    {
    stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Output(!stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output());
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::app_FUNCT_pop_From_Stack_Of_Input(CLIB_OpenEpiCentre__Framework* obj, uint8_t concurrentThreadID)
    {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(concurrentThreadID, obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(0));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(concurrentThreadID, obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(1));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise()->erase(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise()->begin()+1);
        if (sizeof(*obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise()) < 2) {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(false);
        }
        else {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(true);
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::app_FUNCT_pop_From_Stack_Of_Output(CLIB_OpenEpiCentre__Framework* obj)
    {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(obj, obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(0));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(obj, obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(1));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->erase(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin()+1);;
        if (sizeof(*obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise()) < 2) {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(false);
        }
        else {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(true);
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::app_FUNCT_push_To_STACK_Of_Input(CLIB_OpenEpiCentre__Framework* obj)
    {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise()->push_back(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(0));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise()->push_back(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_READ(obj));
        if (sizeof(size(*obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise())) < 2) {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(false);
        }
        else {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(true);
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::app_FUNCT_push_To_STACK_Of_Output(CLIB_OpenEpiCentre__Framework* obj, uint8_t concurrentThreadID)
    {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->push_back(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(0));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->push_back(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadID));
        if (sizeof(size(*obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise())) < 2) {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(false);
        }
        else {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(true);
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control(CLIB_OpenEpiCentre__Framework* obj)
    {
        stat_REG_boot1_DEFINE_flag_isLoaded_Stack_InputAction();
        stat_REG_boot1_DEFINE_flag_isLoaded_Stack_OutputSend();
        stat_REG_boot1_DEFINE_array_Of_doubleBuffer_Input();
        stat_REG_boot1_DEFINE_array_Of_doubleBuffer_Output();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__Control(CLIB_OpenEpiCentre__Framework* obj)
    {
       stat_REG_boot2_SUBSTANTIATE_flag_isLoaded_Stack_InputAction();
       stat_REG_boot2_SUBSTANTIATE_flag_isLoaded_Stack_OutputSend();
       stat_REG_boot2_SUBSTANTIATE_array_Of_doubleBuffer_Input();
       stat_REG_boot2_SUBSTANTIATE_array_Of_doubleBuffer_Output();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control(CLIB_OpenEpiCentre__Framework* obj)
    {
       stat_REG_boot3_INITIALISE_flag_isLoaded_Stack_InputAction();
       stat_REG_boot3_INITIALISE_flag_isLoaded_Stack_OutputSend();
       stat_REG_boot3_INITIALISE_array_Of_doubleBuffer_Input();
       stat_REG_boot3_INITIALISE_array_Of_doubleBuffer_Output();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Data__Control(CLIB_OpenEpiCentre__Framework* obj)
    {

    }
    bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_get_Item_flag_isLoaded_Stack_InputAction()
    {
    return stat_REG_get_ptr_flag_isLoaded_Stack_InputAction();
    }
    bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_get_Item_flag_isLoaded_Stack_OutputSend()
    {
    return stat_REG_get_ptr_flag_isLoaded_Stack_OutputSend();
    }
    bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()
    {
    return stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input();
    }
    bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()
    {
    return stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_set_ptr_flag_isLoaded_Stack_InputAction(bool value)
    {
        stat_REG_set_Item_flag_isLoaded_Stack_InputAction(value);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_set_ptr_flag_isLoaded_Stack_OutputSend(bool value)
    {
        stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(value);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(bool new_Bool)
    {
        stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Input(new_Bool);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(bool new_Bool)
    {
        stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Output(new_Bool);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Data__Control()
    {

    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control()
    {

    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control()
    {

    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Data__Control()
    {

    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Data__Control()
    {

    }
    // private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot1_DEFINE_flag_isLoaded_Stack_InputAction()
    {
        _stat_REG_ptr_flag_isLoaded_Stack_InputAction = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot1_DEFINE_flag_isLoaded_Stack_OutputSend()
    {
        _stat_REG_ptr_flag_isLoaded_Stack_OutputSend = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot1_DEFINE_array_Of_doubleBuffer_Input()
    {
        _stat_REG_ptr_side_To_Write_For_doubleBuffer_Input = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot1_DEFINE_array_Of_doubleBuffer_Output()
    {
        _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot2_SUBSTANTIATE_flag_isLoaded_Stack_InputAction()
    {
        *_stat_REG_ptr_flag_isLoaded_Stack_InputAction = true;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot2_SUBSTANTIATE_flag_isLoaded_Stack_OutputSend()
    {
        *_stat_REG_ptr_flag_isLoaded_Stack_OutputSend = true;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot2_SUBSTANTIATE_array_Of_doubleBuffer_Input()
    {
        *_stat_REG_ptr_side_To_Write_For_doubleBuffer_Input = true;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot2_SUBSTANTIATE_array_Of_doubleBuffer_Output()
    {
        *_stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = true;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot3_INITIALISE_flag_isLoaded_Stack_InputAction()
    {
        *_stat_REG_ptr_flag_isLoaded_Stack_InputAction = false;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot3_INITIALISE_flag_isLoaded_Stack_OutputSend()
    {
        *_stat_REG_ptr_flag_isLoaded_Stack_OutputSend = false;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot3_INITIALISE_array_Of_doubleBuffer_Input()
    {
        *_stat_REG_ptr_side_To_Write_For_doubleBuffer_Input = false;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot3_INITIALISE_array_Of_doubleBuffer_Output()
    {
        *_stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = false;
    }
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_get_ptr_flag_isLoaded_Stack_InputAction()
    {
    return _stat_REG_ptr_flag_isLoaded_Stack_InputAction;
    }
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_get_ptr_flag_isLoaded_Stack_OutputSend()
    {
    return _stat_REG_ptr_flag_isLoaded_Stack_OutputSend;
    }
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input()
    {
    return _stat_REG_ptr_side_To_Write_For_doubleBuffer_Input;
    }
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output()
    {
    return _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_set_Item_flag_isLoaded_Stack_InputAction(bool new_Bool)
    {
        *_stat_REG_ptr_flag_isLoaded_Stack_InputAction = new_Bool;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(bool new_Bool)
    {
        *_stat_REG_ptr_flag_isLoaded_Stack_OutputSend = new_Bool;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Input(bool new_Bool)
    {
        *_stat_REG_ptr_side_To_Write_For_doubleBuffer_Input = new_Bool;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Output(bool new_Bool)
    {
        *_stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = new_Bool;
    }