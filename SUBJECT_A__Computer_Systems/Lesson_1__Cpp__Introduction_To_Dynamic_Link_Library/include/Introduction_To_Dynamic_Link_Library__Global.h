#ifndef CLIB_INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__GLOBAL_H
#define CLIB_INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__GLOBAL_H
namespace MyLIBS
{
    class Introduction_To_Dynamic_Link_Library__Global
    {
    public:
        Introduction_To_Dynamic_Link_Library__Global();
        ~Introduction_To_Dynamic_Link_Library__Global();
        static unsigned char* stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbBoolean_To_MsbByteArray(bool value);
        static unsigned char* stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__Msbdouble_To_MsbByteArray(double value);
        static bool stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_MsbBoolean(const unsigned char* byteArray);
        static double stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_Msbdouble(const unsigned char* byteArray);
        void dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Global();
        void dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Global();
        void dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Global();
        void dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Global();
    private:
        static unsigned char* pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbBoolean_To_MsbByteArray(bool value);
        static unsigned char* pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__Msbdouble_To_MsbByteArray(double value);
        static bool pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_MsbBoolean(const unsigned char* byteArray);
        static double pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_Msbdouble(const unsigned char* byteArray);
        static void stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Global();
        static void stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Global();
        static void stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Global();
        static void stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Global();

    };
}
#endif