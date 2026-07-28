#include "../../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Data.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Data__Control.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Framework.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Global.h"
#include <array>
#include <iostream>
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_CLASS_ptr_CLIB_OpenEpiCentre__Data__Control;
    std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
    std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
    std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*, 2>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_REG_ptr_array_Of_doubleBuffer_Input;
    std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*, 2>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_REG_ptr_array_Of_doubleBuffer_Output;
    std::vector<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_REG_ptr_vector_Of_stack_Of_InputPraise;
    std::vector<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_STRUCT_ptr_User_Input;
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_STRUCT_ptr_User_Output;
// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::CLIB_OpenEpiCentre__Data()
    {
        std::cout << "entered CONSTRUCTOR of CLIB_OpenEpiCentre__Data()" << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Data();
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data();
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data();
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Data();
        std::cout << "exiting CONSTRUCTOR of CLIB_OpenEpiCentre__Data()" << std::endl;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::~CLIB_OpenEpiCentre__Data()
    {
        delete _stat_CLASS_ptr_CLIB_OpenEpiCentre__Data__Control;
        delete _stat_STRUCT_ptr_User_Input;
        delete _stat_STRUCT_ptr_User_Output;
        delete _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;
        delete _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;
        delete _stat_REG_ptr_array_Of_doubleBuffer_Input;
        delete _stat_REG_ptr_array_Of_doubleBuffer_Output;
        delete _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
        delete _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
        }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()
    {
    return stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control();
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_CLASS_get_ptr_User_Input()
    {
    return stat_CLASS_get_ptr_User_Input();
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_CLASS_get_ptr_User_Output()
    {
    return stat_CLASS_get_ptr_User_Output();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data(CLIB_OpenEpiCentre__Framework* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Data()" << std::endl;
        stat_REG_boot1_DEFINE_buffer_Input_ReferenceForThread();
        stat_REG_boot1_DEFINE_buffer_Output_ReferenceForThread();
        stat_REG_boot1_DEFINE_buffer_doubleBuffer_Input();
        stat_REG_boot1_DEFINE_buffer_doubleBuffer_Output();
        stat_REG_boot1_DEFINE_buffer_stack_Of_InputPraise();
        stat_REG_boot1_DEFINE_buffer_stack_Of_OutputPraise();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data(CLIB_OpenEpiCentre__Framework* obj, CLIB_OpenEpiCentre_STRUCT__Input* objInput, CLIB_OpenEpiCentre_STRUCT__Output* objOutput)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Data()" << std::endl;
        stat_REG_boot3_INITIALISE_buffer_Input_ReferenceForThread(objInput);
        stat_REG_boot3_INITIALISE_buffer_Output_ReferenceForThread(objOutput);
        stat_REG_boot3_INITIALISE_doubleBuffer_Input(objInput);
        stat_REG_boot3_INITIALISE_doubleBuffer_Output(objOutput);
        stat_REG_boot3_INITIALISE_stack_Of_InputPraise(objInput);
        stat_REG_boot3_INITIALISE_stack_Of_OutputPraise(objOutput);
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Data(CLIB_OpenEpiCentre__Framework* obj)
    {
    std::cout << "entered dyn_REG_boot4_INSTANTIATE_Data()" << std::endl;

    std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Data()" << std::endl;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_READ(CLIB_OpenEpiCentre__Framework* obj)
    {
    auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Input()->begin();
    std::advance(temp, CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()));
    return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIB_OpenEpiCentre__Framework* obj)
    {
    auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Input()->begin();
    std::advance(temp, CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()));
    return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(CLIB_OpenEpiCentre__Framework* obj)
    {
    auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Output()->begin();
    std::advance(temp, CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
    return *temp;
    }

    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(CLIB_OpenEpiCentre__Framework *obj)
    {
    auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Output()->begin();
    std::advance(temp, CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
    return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID)
    {
    auto temp = stat_REG_get_ptr_Array_Of_buffer_Input_ReferenceForThread()->begin();
    std::advance(temp, concurrentThreadID);
    return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID)
    {
    auto temp = stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread()->begin();
    std::advance(temp, concurrentThreadID);
    return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot)
    {
    auto temp = stat_REG_get_ptr_vector_Of_stack_Of_InputPraise()->begin();
    std::advance(temp, slot);
    return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot)
    {
    auto temp = stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
    std::advance(temp, slot);
    return *temp;
    }
    std::vector<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise()
    {
        return stat_REG_get_ptr_vector_Of_stack_Of_InputPraise();
    }
    std::vector<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise()
    {
        return stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* newClass)
    {
    stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(obj, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* newClass)
    {
    stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(obj, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* newClass)
    {
    stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(obj, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* newClass)
    {
    stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(obj, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, CLIB_OpenEpiCentre_STRUCT__Input* newClass)
    {
    stat_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(concurrentThreadID, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, CLIB_OpenEpiCentre_STRUCT__Output* newClass)
    {
    stat_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(concurrentThreadID, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t slot, CLIB_OpenEpiCentre_STRUCT__Input* newClass)
    {
    stat_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(slot, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t slot, CLIB_OpenEpiCentre_STRUCT__Output* newClass)
    {
    stat_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(slot, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Data()
    {
    std::cout << "entered stat_CLASS_boot0_DECLARE_Data()" << std::endl;

    std::cout << "exiting stat_CLASS_boot0_DECLARE_Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data()
    {
    std::cout << "entered stat_CLASS_boot1_DEFINE_Data()" << std::endl;
    stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control();
    stat_CLASS_boot1_DEFINE_User_Input();
    stat_CLASS_boot1_DEFINE_User_Output();
    std::cout << "exiting stat_CLASS_boot1_DEFINE_Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data()
    {
    std::cout << "entered stat_CLASS_boot3_INITIALISE_Data()" << std::endl;
    stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control();
    stat_CLASS_boot3_INITIALISE_User_Input();
    stat_CLASS_boot3_INITIALISE_User_Output();
    std::cout << "exiting stat_CLASS_boot3_INITIALISE_Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Data()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Data()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Data()
    {
        std::cout << "entered stat_REG_boot0_DECLARE_Data()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLARE_Data()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control()
    {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre__Data__Control = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_boot1_DEFINE_User_Input()
    {
        _stat_STRUCT_ptr_User_Input = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_boot1_DEFINE_User_Output()
    {
        _stat_STRUCT_ptr_User_Output = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control()
    {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre__Data__Control = new CLIB_OpenEpiCentre__Data__Control();
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control() == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_boot3_INITIALISE_User_Input()
    {
        _stat_STRUCT_ptr_User_Input = new CLIB_OpenEpiCentre_STRUCT__User_Input();
        while (stat_CLASS_get_ptr_User_Input() == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_boot3_INITIALISE_User_Output()
    {
        _stat_STRUCT_ptr_User_Output = new CLIB_OpenEpiCentre_STRUCT__User_Output();
        while (stat_CLASS_get_ptr_User_Output() == nullptr) {}
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()
    {
        return _stat_CLASS_ptr_CLIB_OpenEpiCentre__Data__Control;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_get_ptr_User_Input()
    {
        return _stat_STRUCT_ptr_User_Input;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_get_ptr_User_Output()
    {
        return _stat_STRUCT_ptr_User_Output;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot1_DEFINE_buffer_Input_ReferenceForThread()
    {
        _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot1_DEFINE_buffer_Output_ReferenceForThread()
    {
        _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot1_DEFINE_buffer_doubleBuffer_Input()
    {
        _stat_REG_ptr_array_Of_doubleBuffer_Input = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot1_DEFINE_buffer_doubleBuffer_Output()
    {
        _stat_REG_ptr_array_Of_doubleBuffer_Output = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot1_DEFINE_buffer_stack_Of_InputPraise()
    {
        _stat_REG_ptr_vector_Of_stack_Of_InputPraise = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot1_DEFINE_buffer_stack_Of_OutputPraise()
    {
        _stat_REG_ptr_vector_Of_stack_Of_OutputPraise = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot3_INITIALISE_buffer_Input_ReferenceForThread(CLIB_OpenEpiCentre_STRUCT__Input* objInput)
    {
        std::cout << "entered stat_REG_boot1_DEFINE_buffer_stack_Of_OutputPraise()" << std::endl;
        _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = new std::array<CLIB_OpenEpiCentre_STRUCT__Input*, 3>();
        *_stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = { objInput, objInput, objInput };
        std::cout << "exiting stat_REG_boot1_DEFINE_buffer_stack_Of_OutputPraise()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot3_INITIALISE_buffer_Output_ReferenceForThread(CLIB_OpenEpiCentre_STRUCT__Output* objOutput)
    {
        std::cout << "entered stat_REG_boot3_INITIALISE_buffer_Output_ReferenceForThread()" << std::endl;
        _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = new std::array<CLIB_OpenEpiCentre_STRUCT__Output*, 3>();
        *_stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = { objOutput, objOutput, objOutput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_buffer_Output_ReferenceForThread()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot3_INITIALISE_doubleBuffer_Input(CLIB_OpenEpiCentre_STRUCT__Input* objInput)
    {
        std::cout << "entered stat_REG_boot3_INITIALISE_doubleBuffer_Input()" << std::endl;
        _stat_REG_ptr_array_Of_doubleBuffer_Input = new std::array<CLIB_OpenEpiCentre_STRUCT__Input*, 2>();
        *_stat_REG_ptr_array_Of_doubleBuffer_Input = { objInput, objInput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_doubleBuffer_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot3_INITIALISE_doubleBuffer_Output(CLIB_OpenEpiCentre_STRUCT__Output* objOutput)
    {
        std::cout << "entered stat_REG_boot3_INITIALISE_doubleBuffer_Output()" << std::endl;
        _stat_REG_ptr_array_Of_doubleBuffer_Output = new std::array<CLIB_OpenEpiCentre_STRUCT__Output*, 2>();
        *_stat_REG_ptr_array_Of_doubleBuffer_Output = { objOutput, objOutput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_doubleBuffer_Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot3_INITIALISE_stack_Of_InputPraise(CLIB_OpenEpiCentre_STRUCT__Input* objInput)
    {
        std::cout << "entered stat_REG_boot3_INITIALISE_stack_Of_InputPraise()" << std::endl;
        _stat_REG_ptr_vector_Of_stack_Of_InputPraise = new std::vector<CLIB_OpenEpiCentre_STRUCT__Input*>();
        *_stat_REG_ptr_vector_Of_stack_Of_InputPraise = { objInput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_stack_Of_InputPraise()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot3_INITIALISE_stack_Of_OutputPraise(CLIB_OpenEpiCentre_STRUCT__Output* objOutput)
    {
        std::cout << "entered stat_REG_boot3_INITIALISE_stack_Of_OutputPraise()" << std::endl;
        _stat_REG_ptr_vector_Of_stack_Of_OutputPraise = new std::vector<CLIB_OpenEpiCentre_STRUCT__Output*>();
        *_stat_REG_ptr_vector_Of_stack_Of_OutputPraise = { objOutput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_stack_Of_OutputPraise()" << std::endl;
    }
    std::array<class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_get_ptr_Array_Of_buffer_Input_ReferenceForThread()
{
    return _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;
}
    std::array<class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread()
    {
        return _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;
    }
    std::array<class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*, 2>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_get_REG_ptr_array_Of_doubleBuffer_Input()
    {
        return _stat_REG_ptr_array_Of_doubleBuffer_Input;
    }
    std::array<class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*, 2>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_get_REG_ptr_array_Of_doubleBuffer_Output()
    {
        return _stat_REG_ptr_array_Of_doubleBuffer_Output;
    }
    std::vector<class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_get_ptr_vector_Of_stack_Of_InputPraise()
    {
        return _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
    }
    std::vector<class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()
    {
        return _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* newClass)
    {
        auto temp = stat_REG_get_ptr_Array_Of_buffer_Input_ReferenceForThread()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newClass;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* newClass)
    {
        auto temp = stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newClass;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(CLIB_OpenEpiCentre__Framework* obj, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* newClass)
    {
        auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Input()->begin();
        std::advance(temp, CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
        *temp = newClass;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(CLIB_OpenEpiCentre__Framework* obj, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* newClass)
    {
        auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Input()->begin();
        std::advance(temp, CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()));
        *temp = newClass;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(CLIB_OpenEpiCentre__Framework* obj, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* newClass)
    {
        auto temp = stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
        *temp = newClass;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(CLIB_OpenEpiCentre__Framework* obj, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* newClass)
    {
        auto temp = stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
        *temp = newClass;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t slot, CLIB_OpenEpiCentre_STRUCT__Input* newClass)
    {
        auto temp = stat_REG_get_ptr_vector_Of_stack_Of_InputPraise()->begin();
        std::advance(temp, slot);
        *temp = newClass;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t slot, CLIB_OpenEpiCentre_STRUCT__Output* newClass)
    {
        auto temp = stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, slot);
        *temp = newClass;
    }