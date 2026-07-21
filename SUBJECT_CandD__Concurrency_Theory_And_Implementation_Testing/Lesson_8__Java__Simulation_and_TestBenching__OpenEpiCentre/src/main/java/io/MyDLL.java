package io;
import com.sun.jna.Pointer;
import engine.Global;
import libs.JavaLIB_OpenEpiCentre;
public class MyDLL {
    public static Pointer stat_App_FUNCT_MyLIBS__CLIB_MyDLL__generate_Program()
    {
        Pointer temp;
        temp = null;
        temp = (Pointer)null;
        try {
            temp = JavaLIB_OpenEpiCentre.INSTANCE.stat_App_FUNCT_MyLIBS__CLIB_MyDLL__generate_Program();
        }
        catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        }
        catch (NullPointerException e) {
            System.out.printf("NullPointerException.%n");
        }
        catch (UnsatisfiedLinkError e) {
            System.out.printf("UnsatisfiedLinkError.%n");
        }
        return temp;
    }
    public static boolean stat_App_FUNCT_MyLIBS__CLIB_MyDLL__get_flag_isPGM_INSTANTIATED()
    {
        byte[]  temp;
        temp = null;
        temp = new byte[1];
        temp[0] = Byte.MAX_VALUE;
        try {
            temp = JavaLIB_OpenEpiCentre.INSTANCE.stat_App_FUNCT_MyLIBS__CLIB_MyDLL__get_flag_isPGM_INSTANTIATED();
        }
        catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        }
        catch (NullPointerException e) {
            System.out.printf("NullPointerException.%n");
        }
        catch (UnsatisfiedLinkError e) {
            System.out.printf("UnsatisfiedLinkError.%n");
        }
        return Global.stat_CONVERT_LsbByteArray_To_LsbBoolean(Global.stat_CONVERT_MsbByteArray_To_LsbByteArray(temp));
    }
    public static void stat_App_FUNCT_MyLIBS__CLIB_MyDLL__terminate_Program()
    {
        try {
            JavaLIB_OpenEpiCentre.INSTANCE.stat_App_FUNCT_MyLIBS__CLIB_MyDLL__terminate_Program();
        }
        catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        }
        catch (NullPointerException e) {
            System.out.printf("NullPointerException.%n");
        }
        catch (UnsatisfiedLinkError e) {
            System.out.printf("UnsatisfiedLinkError.%n");
        }
    }
    public static void stat_do_FUNCT_MyLIBS__CLIB_MyDLL__add_a_b()
    {
        try {
            JavaLIB_OpenEpiCentre.INSTANCE.stat_do_FUNCT_MyLIBS__CLIB_MyDLL__add_a_b();
        }
        catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        }
        catch (NullPointerException e) {
            System.out.printf("NullPointerException.%n");
        }
        catch (UnsatisfiedLinkError e) {
            System.out.printf("UnsatisfiedLinkError.%n");
        }
    }
    public static void stat_do_FUNCT_MyLIBS__CLIB_MyDLL__subtract_a_b()
    {
        try {
            JavaLIB_OpenEpiCentre.INSTANCE.stat_do_FUNCT_MyLIBS__CLIB_MyDLL__subtract_a_b();
        }
        catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        }
        catch (NullPointerException e) {
            System.out.printf("NullPointerException.%n");
        }
        catch (UnsatisfiedLinkError e) {
            System.out.printf("UnsatisfiedLinkError.%n");
        }
    }
    public static void stat_do_FUNCT_MyLIBS__CLIB_MyDLL__multiply_a_b()
    {
        try {
            JavaLIB_OpenEpiCentre.INSTANCE.stat_do_FUNCT_MyLIBS__CLIB_MyDLL__multiply_a_b();
        }
        catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        }
        catch (NullPointerException e) {
            System.out.printf("NullPointerException.%n");
        }
        catch (UnsatisfiedLinkError e) {
            System.out.printf("UnsatisfiedLinkError.%n");
        }
    }
    public static void stat_do_FUNCT_MyLIBS__CLIB_MyDLL__divide_a_b()
    {
        try {
            JavaLIB_OpenEpiCentre.INSTANCE.stat_do_FUNCT_MyLIBS__CLIB_MyDLL__divide_a_b();
        }
        catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        }
        catch (NullPointerException e) {
            System.out.printf("NullPointerException.%n");
        }
        catch (UnsatisfiedLinkError e) {
            System.out.printf("UnsatisfiedLinkError.%n");
        }
    }
    public static double stat_get_FUNCT_MyLIBS__CLIB_MyDLL__Output__value()
    {
        byte[] temp;
        temp = null;
        temp = new byte[8];
        for(byte index = 0; index < 8; index++) {
            temp[index] = Byte.MAX_VALUE;
        }
        try {
            temp = JavaLIB_OpenEpiCentre.INSTANCE.stat_get_FUNCT_MyLIBS__CLIB_MyDLL__Output__value();
        }
        catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        }
        catch (NullPointerException e) {
            System.out.printf("NullPointerException.%n");
        }
        catch (UnsatisfiedLinkError e) {
            System.out.printf("UnsatisfiedLinkError.%n");
        }
        return Global.stat_CONVERT_LsbByteArray_To_LsbDouble(Global.stat_CONVERT_MsbByteArray_To_LsbByteArray(temp));
    }
    public static void stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_a(double value)
    {
        try {
            JavaLIB_OpenEpiCentre.INSTANCE.stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_a(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbDouble_To_LsbByteArray(value)));
        }
        catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        }
        catch (NullPointerException e) {
            System.out.printf("NullPointerException.%n");
        }
        catch (UnsatisfiedLinkError e) {
            System.out.printf("UnsatisfiedLinkError.%n");
        }
    }
    public static void stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_b(double value)
    {
        try {
            JavaLIB_OpenEpiCentre.INSTANCE.stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_b(Global.stat_CONVERT_LsbByteArray_To_MsbByteArray(Global.stat_CONVERT_LsbDouble_To_LsbByteArray(value)));
        }
        catch (NoClassDefFoundError e) {
            System.out.printf("NoClassDefFoundError.%n");
        }
        catch (NullPointerException e) {
            System.out.printf("NullPointerException.%n");
        }
        catch (UnsatisfiedLinkError e) {
            System.out.printf("UnsatisfiedLinkError.%n");
        }
    }
}
