#include "../../include/engine/CLIB_OpenEpiCentre__Data__Control.h"
#include "../../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Data.h"
#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT__Input.h"
#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT__Output.h"
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
        CLIB_OpenEpiCentre_STRUCT__Input* referenceForCore = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadID);
        std::vector<CLIB_OpenEpiCentre_STRUCT__Input*>* ptr_inputStack = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise();
        referenceForCore = ptr_inputStack->at(1);
        ptr_inputStack->erase(ptr_inputStack->begin()+1);
        if (sizeof(ptr_inputStack) < 2)
        {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(false);
        }
        else
        {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(true);
        }
        delete referenceForCore;
        delete ptr_inputStack;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::app_FUNCT_pop_From_Stack_Of_Output(CLIB_OpenEpiCentre__Framework* obj)
    {
        CLIB_OpenEpiCentre_STRUCT__Output* distributeBuffer = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(obj);
        std::vector<class CLIB_OpenEpiCentre_STRUCT__Output*>* ptr_outputStack = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise();
        distributeBuffer = ptr_outputStack->at(1);
        ptr_outputStack->erase(ptr_outputStack->begin()+1);
        if (sizeof(ptr_outputStack) < 2)
        {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(false);
        }
        else
        {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(true);
        }
        delete distributeBuffer;
        delete ptr_outputStack;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::app_FUNCT_push_To_STACK_Of_Input(CLIB_OpenEpiCentre__Framework* obj)
    {
        std::vector<CLIB_OpenEpiCentre_STRUCT__Input*>* ptr_InputStack = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise();
        CLIB_OpenEpiCentre_STRUCT__Input* ptr_Buffer_Praise = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(obj);
        ptr_InputStack->push_back(ptr_InputStack->at(0));
        ptr_InputStack->at(ptr_InputStack->size()) = ptr_Buffer_Praise;
        if (sizeof(ptr_InputStack) < 2)
        {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(false);
        }
        else
        {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(true);
        }
        delete ptr_InputStack;
        delete ptr_Buffer_Praise;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::app_FUNCT_push_To_STACK_Of_Output(CLIB_OpenEpiCentre__Framework* obj, uint8_t concurrentThreadID)
    {
        std::vector<CLIB_OpenEpiCentre_STRUCT__Output*>* ptr_outputStack = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise();
        CLIB_OpenEpiCentre_STRUCT__Output* ptr_referenceForCore = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadID);
        ptr_outputStack->push_back(ptr_outputStack->at(0));
        ptr_outputStack->at(ptr_outputStack->size()) = ptr_referenceForCore;
        if (sizeof(ptr_outputStack) < 2)
        {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(false);
        }
        else
        {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(true);
        }
        delete ptr_outputStack;
        delete ptr_referenceForCore;
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