#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE__DATA__CONTROL_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE__DATA__CONTROL_H
#include "../engine/CLIB_OpenEpiCentre__Framework.h"
#include <cstdint>
namespace CLIBOpenEpiCentre
{
    class CLIB_OpenEpiCentre__Data__Control
    {
    public:
        CLIB_OpenEpiCentre__Data__Control();
        virtual ~CLIB_OpenEpiCentre__Data__Control();
        void app_FUNCT_flip_Input_DoubleBuffer();
        void app_FUNCT_Flip_Output_DoubleBuffer();
        void app_FUNCT_pop_From_Stack_Of_Input(class CLIB_OpenEpiCentre__Framework* obj, __uint8_t concurrentThreadID);
        void app_FUNCT_pop_From_Stack_Of_Output(class CLIB_OpenEpiCentre__Framework* obj);
        void app_FUNCT_push_To_STACK_Of_Input(class CLIB_OpenEpiCentre__Framework* obj);
        void app_FUNCT_push_To_STACK_Of_Output(class CLIB_OpenEpiCentre__Framework* obj, uint8_t concurrentThreadID);
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__Control(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Data__Control(class CLIB_OpenEpiCentre__Framework* obj);
        bool dyn_REG_get_Item_flag_isLoaded_Stack_InputAction();
        bool dyn_REG_get_Item_flag_isLoaded_Stack_OutputSend();
        bool dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input();
        bool dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output();
        void dyn_REG_set_ptr_flag_isLoaded_Stack_InputAction(bool value);
        void dyn_REG_set_ptr_flag_isLoaded_Stack_OutputSend(bool value);
        void dyn_REG_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(bool new_Bool);
        void dyn_REG_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(bool new_Bool);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Data__Control();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Data__Control();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Data__Control();
    private:
        static bool* _stat_REG_ptr_flag_isLoaded_Stack_InputAction;
        static bool* _stat_REG_ptr_flag_isLoaded_Stack_OutputSend;
        static bool* _stat_REG_ptr_side_To_Write_For_doubleBuffer_Input;
        static bool* _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output;
        static void stat_REG_boot1_DEFINE_flag_isLoaded_Stack_InputAction();
        static void stat_REG_boot1_DEFINE_flag_isLoaded_Stack_OutputSend();
        static void stat_REG_boot1_DEFINE_array_Of_doubleBuffer_Input();
        static void stat_REG_boot1_DEFINE_array_Of_doubleBuffer_Output();
        static void stat_REG_boot2_SUBSTANTIATE_flag_isLoaded_Stack_InputAction();
        static void stat_REG_boot2_SUBSTANTIATE_flag_isLoaded_Stack_OutputSend();
        static void stat_REG_boot2_SUBSTANTIATE_array_Of_doubleBuffer_Input();
        static void stat_REG_boot2_SUBSTANTIATE_array_Of_doubleBuffer_Output();
        static void stat_REG_boot3_INITIALISE_flag_isLoaded_Stack_InputAction();
        static void stat_REG_boot3_INITIALISE_flag_isLoaded_Stack_OutputSend();
        static void stat_REG_boot3_INITIALISE_array_Of_doubleBuffer_Input();
        static void stat_REG_boot3_INITIALISE_array_Of_doubleBuffer_Output();
        static bool* stat_REG_get_ptr_flag_isLoaded_Stack_InputAction();
        static bool* stat_REG_get_ptr_flag_isLoaded_Stack_OutputSend();
        static bool* stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input();
        static bool* stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output();
        static void stat_REG_set_Item_flag_isLoaded_Stack_InputAction(bool new_Bool);
        static void stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(bool new_Bool);
        static void stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Input(bool new_Bool);
        static void stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Output(bool new_Bool);
    };
};
#endif //OPENEPICENTRE_BACKENDUBUNTU_CLIB_OpenEpiCentre__Data__Control_H
