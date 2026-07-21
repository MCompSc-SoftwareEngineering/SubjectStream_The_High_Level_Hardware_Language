#include "../include/Introduction_To_Dynamic_Link_Library__Framework.h"
#include "../include/Introduction_To_Dynamic_Link_Library__Global.h"
#include <climits>
#include <cstdint>
#include <cstring>
#include <iostream>
// public.
    MyLIBS::Introduction_To_Dynamic_Link_Library__Global::Introduction_To_Dynamic_Link_Library__Global()
    {
        std::cout << "entered CONSTRUCTOR of Introduction_To_Dynamic_Link_Library__Global()." << std::endl;
        stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Global();
        stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Global();
        stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Global();
        stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Global();
        std::cout << "exiting CONSTRUCTOR of Introduction_To_Dynamic_Link_Library__Global()." << std::endl;
    }
    MyLIBS::Introduction_To_Dynamic_Link_Library__Global::~Introduction_To_Dynamic_Link_Library__Global()
    {

    }
    unsigned char* MyLIBS::Introduction_To_Dynamic_Link_Library__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__Msbdouble_To_MsbByteArray(double value) {
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__Msbdouble_To_MsbByteArray(value);
    }
    unsigned char* MyLIBS::Introduction_To_Dynamic_Link_Library__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbBoolean_To_MsbByteArray(bool value)
    {
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbBoolean_To_MsbByteArray(value);
    }
    bool MyLIBS::Introduction_To_Dynamic_Link_Library__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_MsbBoolean(const unsigned char* byteArray)
    {
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_MsbBoolean(byteArray);
    }
    double MyLIBS::Introduction_To_Dynamic_Link_Library__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_Msbdouble(const unsigned char* byteArray)
    {
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_Msbdouble(byteArray);
    }
    void MyLIBS::Introduction_To_Dynamic_Link_Library__Global::dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Global()
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Global()" << std::endl;
        std::cout << "exiting dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Global()" << std::endl;
    }
    void MyLIBS::Introduction_To_Dynamic_Link_Library__Global::dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Global()
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Global()" << std::endl;
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Global()" << std::endl;
    }
    void MyLIBS::Introduction_To_Dynamic_Link_Library__Global::dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Global()
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__GlobalIntroduction_To_Dynamic_Link_Library__Global()" << std::endl;
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Global()" << std::endl;
    }
    void MyLIBS::Introduction_To_Dynamic_Link_Library__Global::dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Global()
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Global()" << std::endl;
        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Global()" << std::endl;
    }
// private.
    unsigned char* MyLIBS::Introduction_To_Dynamic_Link_Library__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbBoolean_To_MsbByteArray(bool value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[1];
        for (uint8_t bitIndex = 0; bitIndex < sizeof(unsigned char); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(value);
        }
        return buffer;
    }
    unsigned char* MyLIBS::Introduction_To_Dynamic_Link_Library__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__Msbdouble_To_MsbByteArray(double value) {
            unsigned char* buffer = nullptr;
            buffer = new unsigned char[4] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX };
            std::memcpy(buffer, &value, sizeof(double));
            return buffer;
    }
    bool MyLIBS::Introduction_To_Dynamic_Link_Library__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_MsbBoolean(const unsigned char* byteArray) {
        return (byteArray[7] & 1) != 0;
    }
    double MyLIBS::Introduction_To_Dynamic_Link_Library__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_Msbdouble(const unsigned char* byteArray) {
        double temp;
        std::memcpy(&temp, byteArray, sizeof(double));
        return temp;
    }
    void MyLIBS::Introduction_To_Dynamic_Link_Library__Global::stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Global()
    {
        std::cout << "entered stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Global()" << std::endl;
        std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Global()" << std::endl;
    }
    void MyLIBS::Introduction_To_Dynamic_Link_Library__Global::stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Global()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Global()" << std::endl;
        std::cout << "exiting stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Global()" << std::endl;
    }
    void MyLIBS::Introduction_To_Dynamic_Link_Library__Global::stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Global()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Global()" << std::endl;
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Global()" << std::endl;
    }
    void MyLIBS::Introduction_To_Dynamic_Link_Library__Global::stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Global()
    {
        std::cout << "entered stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Global()" << std::endl;
        std::cout << "exiting stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Global()" << std::endl;
    }