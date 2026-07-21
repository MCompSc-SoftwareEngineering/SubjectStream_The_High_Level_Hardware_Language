#ifndef CLIB_WriteEnableForThreadsAt_ServerOutputSend_WriteEnableForThreadsAt_ServerOutputSend__Global_H
#define CLIB_WriteEnableForThreadsAt_ServerOutputSend_WriteEnableForThreadsAt_ServerOutputSend__Global_H
#include <array>
#include <cstdint>
namespace CLIBWriteQueAtServerOutputSend
{
    class WriteEnableForThreadsAt_ServerOutputSend__Global
    {
    public:
        WriteEnableForThreadsAt_ServerOutputSend__Global();
        ~WriteEnableForThreadsAt_ServerOutputSend__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Global();
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend__Global();
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Global();
        void dyn_boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerOutputSend__Global();
        std::array<bool,2> dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE();
        std::array<bool,2> dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT();
        std::array<bool,2> dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE();
        uint8_t dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads();
        unsigned char* stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbFloat_To_MsbByteArray(float value);
        unsigned char* stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbDouble_To_MsbByteArray(double value);
        unsigned char* stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__Msb_uint8_t_to_MsbByteArray(uint8_t value);
        static int stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__Bool_To_Int(bool value);
        static unsigned char* stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbBoolean_To_MsbByteArray(bool value);
        static bool stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_MsbBoolean(const unsigned char* byteArray);
        static double stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_MsbDouble(const unsigned char* byteArray);
        static float stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_MsbFloat(const unsigned char* byteArray);
        static uint8_t stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_Msbuint8_t(const unsigned char* byteArray);
    private:
        static std::array<bool,2>* _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE;
        static std::array<bool,2>* _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT;
        static std::array<bool,2>* _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE;
        static uint8_t* _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads;
        static int pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__Bool_To_Int(bool value);
        static unsigned char* pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbBoolean_To_MsbByteArray(bool value);
        static bool pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_MsbBoolean(const unsigned char* byteArray);
        static double pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_MsbDouble(const unsigned char* byteArray);
        static float pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_MsbFloat(const unsigned char* byteArray);
        static uint8_t pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_Msbuint8_t(const unsigned char* byteArray);
        static unsigned char* pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbFloat_To_MsbByteArray(float value);
        static unsigned char* pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbDouble_To_MsbByteArray(double value);
        static unsigned char* pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__Msb_uint8_t_to_MsbByteArray(uint8_t value);
        static void stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE();
        static void stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT();
        static void stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads();
        static void stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE();
        static void stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT();
        static void stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads();
        static void stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE();
        static void stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT();
        static void stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads();
        static std::array<bool,2>* stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE();
        static std::array<bool,2>* stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT();
        static std::array<bool,2>* stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE();
        static uint8_t* stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads();
    };
}
#endif