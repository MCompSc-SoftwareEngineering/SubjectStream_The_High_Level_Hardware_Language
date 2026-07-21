#ifndef CLIB_INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__ALGORITHMS_H
#define CLIB_INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__ALGORITHMS_H
#include "Introduction_To_Dynamic_Link_Library__Input.h"
#include "Introduction_To_Dynamic_Link_Library__Output.h"
namespace MyLIBS
{
    class Introduction_To_Dynamic_Link_Library__Algorithms
    {
    public:
        Introduction_To_Dynamic_Link_Library__Algorithms();
        virtual ~Introduction_To_Dynamic_Link_Library__Algorithms();
        static void stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Algorithms();
        static void stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Algorithms();
        static void stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Algorithms();
        static void stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Algorithms();
        void Introduction_To_Dynamic_Link_Library__dyn_FUNCT_add_a_b(Introduction_To_Dynamic_Link_Library__Input* inputBUFFER, Introduction_To_Dynamic_Link_Library__Output* outputBUFFER);
        void Introduction_To_Dynamic_Link_Library__dyn_FUNCT_subtract_a_b(Introduction_To_Dynamic_Link_Library__Input* inputBUFFER, Introduction_To_Dynamic_Link_Library__Output* outputBUFFER);
        void Introduction_To_Dynamic_Link_Library__dyn_FUNCT_multiply_a_b(Introduction_To_Dynamic_Link_Library__Input* inputBUFFER, Introduction_To_Dynamic_Link_Library__Output* outputBUFFER);
        void Introduction_To_Dynamic_Link_Library__dyn_FUNCT_divide_a_b(Introduction_To_Dynamic_Link_Library__Input* inputBUFFER, Introduction_To_Dynamic_Link_Library__Output* outputBUFFER);
        void dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Algorithms();
        void dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Algorithms();
        void dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Algorithms();
        void dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Algorithms();
    private:

    };
}
#endif