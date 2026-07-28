#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE__DATA_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE__DATA_H
#include "CLIB_OpenEpiCentre__Data__Control.h"
#include "CLIB_OpenEpiCentre__Framework.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__User_Input.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__User_Output.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__Input.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__Output.h"
#include <array>
#include <cstdint>
#include <vector>
namespace CLIBOpenEpiCentre
{
    class CLIB_OpenEpiCentre__Data
    {
     public:
        CLIB_OpenEpiCentre__Data();
        virtual ~CLIB_OpenEpiCentre__Data();
        class CLIB_OpenEpiCentre__Data__Control* dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control();
        struct CLIB_OpenEpiCentre_STRUCT__User_Input* dyn_CLASS_get_ptr_User_Input();
        struct CLIB_OpenEpiCentre_STRUCT__User_Output* dyn_CLASS_get_ptr_User_Output();
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data(class CLIB_OpenEpiCentre__Framework* obj, struct CLIB_OpenEpiCentre_STRUCT__Input* objInput, struct CLIB_OpenEpiCentre_STRUCT__Output* objOutput);
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Data(class CLIB_OpenEpiCentre__Framework* obj);
        struct CLIB_OpenEpiCentre_STRUCT__Input* dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_READ(class CLIB_OpenEpiCentre__Framework* obj);
        struct CLIB_OpenEpiCentre_STRUCT__Input* dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(class CLIB_OpenEpiCentre__Framework* obj);
        struct CLIB_OpenEpiCentre_STRUCT__Output* dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(class CLIB_OpenEpiCentre__Framework* obj);
        struct CLIB_OpenEpiCentre_STRUCT__Output* dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(class CLIB_OpenEpiCentre__Framework *obj);
        struct CLIB_OpenEpiCentre_STRUCT__Input* dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID);
        struct CLIB_OpenEpiCentre_STRUCT__Output* dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID);
        struct CLIB_OpenEpiCentre_STRUCT__Input* dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot);
        struct CLIB_OpenEpiCentre_STRUCT__Output* dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot);
        std::vector<struct CLIB_OpenEpiCentre_STRUCT__Input*>* dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise();
        std::vector<struct CLIB_OpenEpiCentre_STRUCT__Output*>* dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise();
        void dyn_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(class CLIB_OpenEpiCentre__Framework* obj, struct CLIB_OpenEpiCentre_STRUCT__Input* newClass);
        void dyn_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(class CLIB_OpenEpiCentre__Framework* obj, struct CLIB_OpenEpiCentre_STRUCT__Input* newClass);
        void dyn_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(class CLIB_OpenEpiCentre__Framework* obj, struct CLIB_OpenEpiCentre_STRUCT__Output* newClass);
        void dyn_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(class CLIB_OpenEpiCentre__Framework* obj, struct CLIB_OpenEpiCentre_STRUCT__Output* newClass);
        void dyn_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, struct CLIB_OpenEpiCentre_STRUCT__Input* newClass);
        void dyn_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, struct CLIB_OpenEpiCentre_STRUCT__Output* newClass);
        void dyn_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t slot, struct CLIB_OpenEpiCentre_STRUCT__Input* newClass);
        void dyn_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t slot, struct CLIB_OpenEpiCentre_STRUCT__Output* newClass);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Data();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Data();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Data();
    private:
        static class CLIB_OpenEpiCentre__Data__Control* _stat_CLASS_ptr_CLIB_OpenEpiCentre__Data__Control;
        static std::array<struct CLIB_OpenEpiCentre_STRUCT__Input*, 3>* _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<struct CLIB_OpenEpiCentre_STRUCT__Output*, 3>* _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<struct CLIB_OpenEpiCentre_STRUCT__Input*, 2>* _stat_REG_ptr_array_Of_doubleBuffer_Input;
        static std::array<struct CLIB_OpenEpiCentre_STRUCT__Output*, 2>* _stat_REG_ptr_array_Of_doubleBuffer_Output;
        static std::vector<struct CLIB_OpenEpiCentre_STRUCT__Input*>* _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
        static std::vector<struct CLIB_OpenEpiCentre_STRUCT__Output*>* _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
        static struct CLIB_OpenEpiCentre_STRUCT__User_Input* _stat_STRUCT_ptr_User_Input;
        static struct CLIB_OpenEpiCentre_STRUCT__User_Output* _stat_STRUCT_ptr_User_Output;
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control();
        static void stat_CLASS_boot1_DEFINE_User_Input();
        static void stat_CLASS_boot1_DEFINE_User_Output();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control();
        static void stat_CLASS_boot3_INITIALISE_User_Input();
        static void stat_CLASS_boot3_INITIALISE_User_Output();
        static class CLIB_OpenEpiCentre__Data__Control* stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control();
        static struct CLIB_OpenEpiCentre_STRUCT__User_Input* stat_CLASS_get_ptr_User_Input();
        static struct CLIB_OpenEpiCentre_STRUCT__User_Output* stat_CLASS_get_ptr_User_Output();
        static void stat_REG_boot1_DEFINE_buffer_Input_ReferenceForThread();
        static void stat_REG_boot1_DEFINE_buffer_Output_ReferenceForThread();
        static void stat_REG_boot1_DEFINE_buffer_doubleBuffer_Input();
        static void stat_REG_boot1_DEFINE_buffer_doubleBuffer_Output();
        static void stat_REG_boot1_DEFINE_buffer_stack_Of_InputPraise();
        static void stat_REG_boot1_DEFINE_buffer_stack_Of_OutputPraise();
        static void stat_REG_boot3_INITIALISE_buffer_Input_ReferenceForThread(struct CLIB_OpenEpiCentre_STRUCT__Input* objInput);
        static void stat_REG_boot3_INITIALISE_buffer_Output_ReferenceForThread(struct CLIB_OpenEpiCentre_STRUCT__Output* objOutput);
        static void stat_REG_boot3_INITIALISE_doubleBuffer_Input(struct CLIB_OpenEpiCentre_STRUCT__Input* objInput);
        static void stat_REG_boot3_INITIALISE_doubleBuffer_Output(struct CLIB_OpenEpiCentre_STRUCT__Output* objOutput);
        static void stat_REG_boot3_INITIALISE_stack_Of_InputPraise(struct CLIB_OpenEpiCentre_STRUCT__Input* objInput);
        static void stat_REG_boot3_INITIALISE_stack_Of_OutputPraise(struct CLIB_OpenEpiCentre_STRUCT__Output* objOutput);
        static std::array<struct CLIB_OpenEpiCentre_STRUCT__Input*, 3>* stat_REG_get_ptr_Array_Of_buffer_Input_ReferenceForThread();//NUMBER OF CONCURRENT THREADS.
        static std::array<struct CLIB_OpenEpiCentre_STRUCT__Output*, 3>* stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread();//NUMBER OF CONCURRENT THREADS.
        static std::array<struct CLIB_OpenEpiCentre_STRUCT__Input*, 2>* stat_get_REG_ptr_array_Of_doubleBuffer_Input();
        static std::array<struct CLIB_OpenEpiCentre_STRUCT__Output*, 2>* stat_get_REG_ptr_array_Of_doubleBuffer_Output();
        static std::vector<struct CLIB_OpenEpiCentre_STRUCT__Input*>* stat_REG_get_ptr_vector_Of_stack_Of_InputPraise();
        static std::vector<struct CLIB_OpenEpiCentre_STRUCT__Output*>* stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise();
        static void stat_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, struct CLIB_OpenEpiCentre_STRUCT__Input* newClass);
        static void stat_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, struct CLIB_OpenEpiCentre_STRUCT__Output* newClass);
        static void stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(class CLIB_OpenEpiCentre__Framework* obj, struct CLIB_OpenEpiCentre_STRUCT__Input* newClass);
        static void stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(class CLIB_OpenEpiCentre__Framework* obj, struct CLIB_OpenEpiCentre_STRUCT__Input* newClass);
        static void stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(class CLIB_OpenEpiCentre__Framework* obj, struct CLIB_OpenEpiCentre_STRUCT__Output* newClass);
        static void stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(class CLIB_OpenEpiCentre__Framework* obj, struct CLIB_OpenEpiCentre_STRUCT__Output* newClass);
        static void stat_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t slot, struct CLIB_OpenEpiCentre_STRUCT__Input* newClass);
        static void stat_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t slot, struct CLIB_OpenEpiCentre_STRUCT__Output* newClass);
    };
};
#endif //OPENEPICENTRE_BACKENDUBUNTU_CLIB_OpenEpiCentre__Data_H
