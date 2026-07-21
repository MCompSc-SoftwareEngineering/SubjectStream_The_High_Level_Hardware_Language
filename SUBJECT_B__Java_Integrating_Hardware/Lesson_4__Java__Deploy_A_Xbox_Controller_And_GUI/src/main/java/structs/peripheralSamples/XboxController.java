package structs.peripheralSamples;

import engine.Framework;

public class XboxController {
    private static float KEY_RECORD;
    private static float BUTTON_0;
    private static float BUTTON_1;
    private static float BTN_C;
    private static float BUTTON_2;
    private static float BUTTON_3;
    private static float BTN_Z;
    private static float BUTTON_4;
    private static float BUTTON_5;
    private static float BTN_TL2;
    private static float BTN_TR2;
    private static float BUTTON_6;
    private static float BUTTON_7;
    private static float BUTTON_10;
    private static float BUTTON_8;
    private static float BUTTON_9;
    private static float LEFT_AXIS_X;
    private static float LEFT_AXIS_Y;
    private static float LEFT_AXIS_Z;
    private static float RIGHT_AXIS_Z;
    private static float ABS_GAS;
    private static float ABS_BRAKE;
    private static float DPAD_LEFT_RIGHT;
    private static float DPAD_UP_DOWN;
    private static float DPAD_UP;
    private static float DPAD_DOWN;
    private static float DPAD_LEFT;
    private static float DPAD_RIGHT;
    private static float NULL;
// public.
    public XboxController() {
        stat_CLASS_boot1_DEFINE_XboxController();
        stat_CLASS_boot3_INITIALISE_XboxController();
    }
    public void dyn_CLASS_boot1_DEFINE_XboxController()
    {
        System.out.printf("entered dyn_CLASS_boot1_DEFINE_XboxController().%n");
        stat_CLASS_boot1_DEFINE_XboxController();
        System.out.printf("exiting dyn_CLASS_boot1_DEFINE_XboxController().%n");
    }
    public void dyn_CLASS_boot3_INITIALISE_XboxController()
    {
        System.out.printf("entered dyn_CLASS_boot3_INITIALISE_XboxController().%n");
        stat_CLASS_boot3_INITIALISE_XboxController();
        System.out.printf("exiting dyn_CLASS_boot3_INITIALISE_XboxController().%n");
    }
    public void dyn_REG_boot1_DEFINE_XboxController() {
        System.out.printf("entered dyn_REG_boot1_DEFINE_XboxController().%n");
        stat_REG_boot1_DEFINE_XboxController();
        System.out.printf("exiting dyn_REG_boot1_DEFINE_XboxController().%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_XboxController() {
        System.out.printf("entered dyn_REG_boot2_SUBSTANTIATE_XboxController().%n");
        stat_REG_boot2_SUBSTANTIATE_XboxController();
        System.out.printf("exiting dyn_REG_boot2_SUBSTANTIATE_XboxController().%n");
    }
    public void dyn_REG_boot3_INITIALISE_XboxController() {
        System.out.printf("entered dyn_REG_boot3_INITIALISE_XboxController().%n");
        stat_REG_boot3_INITIALISE_XboxController();
        System.out.printf("exiting dyn_REG_boot3_INITIALISE_XboxController().%n");
    }
    public float dyn_REG_get_KEY_TBD_RECORD() {
        return stat_REG_get_KEY_RECORD();
    }
    public float dyn_REG_get_TBD_BUTTON_0() {
        return stat_REG_get_BUTTON_0() ;
    }
    public float dyn_REG_get_TBD_BUTTON_1() {
        return stat_REG_get_BUTTON_1();
    }
    public float dyn_REG_get_TBD_BTN_C() {
        return stat_REG_get_BTN_C();
    }
    public float dyn_REG_get_TBD_BUTTON_2() {
        return stat_REG_get_BUTTON_2();
    }
    public float dyn_REG_get_TBD_BUTTON_3() {
        return stat_REG_get_BUTTON_3();
    }
    public float dyn_REG_get_TBD_BTN_Z() {
        return stat_REG_get_BTN_Z();
    }
    public float dyn_REG_get_TBD_BUTTON_4() {
        return stat_REG_get_BUTTON_4();
    }
    public float dyn_REG_get_TBD_BUTTON_5() {
        return stat_REG_get_BUTTON_5();
    }
    public float dyn_REG_get_TBD_BTN_TL2() {
        return stat_REG_get_BTN_TL2();
    }
    public float dyn_REG_get_TBD_BTN_TR2() {
        return stat_REG_get_BTN_TR2();
    }
    public float dyn_REG_get_TBD_BUTTON_6() {
        return stat_REG_get_BUTTON_6();
    }
    public float dyn_REG_get_TBD_BUTTON_7() {
        return stat_REG_get_BUTTON_7() ;
    }
    public float dyn_REG_get_TBD_BUTTON_10() {
        return stat_REG_get_BUTTON_10() ;
    }
    public float dyn_REG_get_TBD_BUTTON_8() {
        return stat_REG_get_BUTTON_8() ;
    }
    public float dyn_REG_get_TBD_BUTTON_9() {
        return stat_REG_get_BUTTON_9();
    }
    public float dyn_REG_get_TBD_LEFT_AXIS_X() {
        return stat_REG_get_LEFT_AXIS_X();
    }
    public float dyn_REG_get_TBD_LEFT_AXIS_Y() {
        return stat_REG_get_LEFT_AXIS_Y();
    }
    public float dyn_REG_get_TBD_LEFT_AXIS_Z() {
        return stat_REG_get_LEFT_AXIS_Z();
    }
    public float dyn_REG_get_TBD_RIGHT_AXIS_Z() {
        return stat_REG_get_RIGHT_AXIS_Z();
    }
    public float dyn_REG_get_TBD_ABS_GAS() {
        return stat_REG_get_ABS_GAS();
    }
    public float dyn_REG_get_TBD_ABS_BRAKE() {
        return stat_REG_get_ABS_BRAKE() ;
    }
    public float dyn_REG_get_TBD_DPAD_LEFT_RIGHT() {
        return stat_REG_get_DPAD_LEFT_RIGHT();
    }
    public float dyn_REG_get_TBD_DPAD_UP_DOWN() {
        return stat_REG_get_DPAD_UP_DOWN();
    }
    public float dyn_REG_get_TBD_DPAD_UP() {
        return stat_REG_get_DPAD_UP();
    }
    public float dyn_REG_get_TBD_DPAD_DOWN() {
        return stat_REG_get_DPAD_DOWN();
    }
    public float dyn_REG_get_TBD_DPAD_LEFT() {
        return stat_REG_get_DPAD_LEFT();
    }
    public float dyn_REG_get_TBD_DPAD_RIGHT() {
        return stat_REG_get_DPAD_RIGHT();
    }
    public void dyn_REG_set_KEY_RECORD(float componentSample) {
        stat_REG_set_KEY_RECORD(componentSample);
    }
    public void dyn_REG_set_BUTTON_0(float componentSample) {
        stat_REG_set_BUTTON_0(componentSample);
    }
    public void dyn_REG_set_BUTTON_1(float componentSample) {
        stat_REG_set_BUTTON_1(componentSample);
    }
    public void dyn_REG_set_BTN_C(float componentSample) {
        stat_REG_set_BTN_C(componentSample);
    }
    public void dyn_REG_set_BUTTON_2(float componentSample) {
        stat_REG_set_BUTTON_2(componentSample);
    }
    public void dyn_REG_set_BUTTON_3(float componentSample) {
        stat_REG_set_BUTTON_3(componentSample);
    }
    public void dyn_REG_set_BTN_Z(float componentSample) {
        stat_REG_set_BTN_Z(componentSample);
    }
    public void dyn_REG_set_BUTTON_4(float componentSample) {
        stat_REG_set_BUTTON_4(componentSample);
    }
    public void dyn_REG_set_BUTTON_5(float componentSample) {
        stat_REG_set_BUTTON_5(componentSample);
    }
    public void dyn_REG_set_BTN_TL2(float componentSample) {
        stat_REG_set_BTN_TL2(componentSample);
    }
    public void dyn_REG_set_BTN_TR2(float componentSample) {
        stat_REG_set_BTN_TR2(componentSample);
    }
    public void dyn_REG_set_BUTTON_6(float componentSample) {
        stat_REG_set_BUTTON_6(componentSample);
    }
    public void dyn_REG_set_BUTTON_7(float componentSample) {
        stat_REG_set_BUTTON_7(componentSample);
    }
    public void dyn_REG_set_BUTTON_10(float componentSample) {
        stat_REG_set_BUTTON_10(componentSample);
    }
    public void dyn_REG_set_BUTTON_8(float componentSample) {
        stat_REG_set_BUTTON_8(componentSample);
    }
    public void dyn_REG_set_BUTTON_9(float componentSample) {
        stat_REG_set_BUTTON_9(componentSample);
    }
    public void dyn_REG_set_LEFT_AXIS_X(float componentSample) {
        stat_REG_set_LEFT_AXIS_X(componentSample);
    }
    public void dyn_REG_set_LEFT_AXIS_Y(float componentSample) {
        stat_REG_set_LEFT_AXIS_Y(componentSample);
    }
    public void dyn_REG_set_LEFT_AXIS_Z(float componentSample) {
        stat_REG_set_LEFT_AXIS_Z(componentSample);
    }
    public void dyn_REG_set_RIGHT_AXIS_Z(float componentSample) {
        stat_REG_set_RIGHT_AXIS_Z(componentSample);
    }
    public void dyn_REG_set_ABS_GAS(float componentSample) {
        stat_REG_set_ABS_GAS(componentSample);
    }
    public void dyn_REG_set_ABS_BRAKE(float componentSample) {
        stat_REG_set_ABS_BRAKE(componentSample);
    }
    public void dyn_REG_set_DPAD_LEFT_RIGHT(float componentSample) {
        stat_REG_set_DPAD_LEFT_RIGHT(componentSample);
    }
    public void dyn_REG_set_DPAD_UP_DOWN(float componentSample) {
        stat_REG_set_DPAD_UP_DOWN(componentSample);
    }
    public void dyn_REG_set_DPAD_UP(float componentSample) {
        stat_REG_set_DPAD_UP(componentSample);
    }
    public void dyn_REG_set_DPAD_DOWN(float componentSample) {
        stat_REG_set_DPAD_DOWN(componentSample);
    }
    public void dyn_REG_set_DPAD_LEFT(float componentSample) {
        stat_REG_set_DPAD_LEFT(componentSample);
    }
    public void dyn_REG_set_DPAD_RIGHT(float componentSample) {
        stat_REG_set_DPAD_RIGHT(componentSample);
    }
// private.
    public void stat_CLASS_boot1_DEFINE_XboxController()
    {

    }
    public void stat_CLASS_boot3_INITIALISE_XboxController()
    {

    }
    public void stat_REG_boot1_DEFINE_XboxController() {

    }
    public void stat_REG_boot2_SUBSTANTIATE_XboxController() {
        KEY_RECORD = Float.MAX_VALUE;
        BUTTON_0 = Float.MAX_VALUE;
        BUTTON_1 = Float.MAX_VALUE;
        BTN_C = Float.MAX_VALUE;
        BUTTON_2 = Float.MAX_VALUE;
        BUTTON_3 = Float.MAX_VALUE;
        BTN_Z = Float.MAX_VALUE;
        BUTTON_4 = Float.MAX_VALUE;
        BUTTON_5 = Float.MAX_VALUE;
        BTN_TL2 = Float.MAX_VALUE;
        BTN_TR2 = Float.MAX_VALUE;
        BUTTON_6 = Float.MAX_VALUE;
        BUTTON_7 = Float.MAX_VALUE;
        BUTTON_10 = Float.MAX_VALUE;
        BUTTON_8 = Float.MAX_VALUE;
        BUTTON_9 = Float.MAX_VALUE;
        LEFT_AXIS_X = Float.MAX_VALUE;
        LEFT_AXIS_Y = Float.MAX_VALUE;
        LEFT_AXIS_Z = Float.MAX_VALUE;
        RIGHT_AXIS_Z = Float.MAX_VALUE;
        ABS_GAS = Float.MAX_VALUE;
        ABS_BRAKE = Float.MAX_VALUE;
        DPAD_LEFT_RIGHT = Float.MAX_VALUE;
        DPAD_UP_DOWN = Float.MAX_VALUE;
        DPAD_UP = Float.MAX_VALUE;
        DPAD_DOWN = Float.MAX_VALUE;
        DPAD_LEFT = Float.MAX_VALUE;
        DPAD_RIGHT = Float.MAX_VALUE;
    }
    public void stat_REG_boot3_INITIALISE_XboxController() {
        KEY_RECORD = (float) 0.0;
        BUTTON_0 = (float) 0.0;
        BUTTON_1 = (float) 0.0;
        BTN_C = (float) 0.0;
        BUTTON_2 = (float) 0.0;
        BUTTON_3 = (float) 0.0;
        BTN_Z = (float) 0.0;
        BUTTON_4 = (float) 0.0;
        BUTTON_5 = (float) 0.0;
        BTN_TL2 = (float) 0.0;
        BTN_TR2 = (float) 0.0;
        BUTTON_6 = (float) 0.0;
        BUTTON_7 = (float) 0.0;
        BUTTON_10 = (float) 0.0;
        BUTTON_8 = (float) 0.0;
        BUTTON_9 = (float) 0.0;
        LEFT_AXIS_X = (float) 0.0;
        LEFT_AXIS_Y = (float) 0.0;
        LEFT_AXIS_Z = (float) 0.0;
        RIGHT_AXIS_Z = (float) 0.0;
        ABS_GAS = (float) 0.0;
        ABS_BRAKE = (float) 0.0;
        DPAD_LEFT_RIGHT = (float) 0.0;
        DPAD_UP_DOWN = (float) 0.0;
        DPAD_UP = (float) 0.0;
        DPAD_DOWN = (float) 0.0;
        DPAD_LEFT = (float) 0.0;
        DPAD_RIGHT = (float) 0.0;
    }
    public float stat_REG_get_KEY_RECORD() {
        return KEY_RECORD;    
    }
    public float stat_REG_get_BUTTON_0() {
        return BUTTON_0;
    }
    public float stat_REG_get_BUTTON_1() {
        return BUTTON_1;
    }
    public float stat_REG_get_BTN_C() {
        return BTN_C;
    }
    public float stat_REG_get_BUTTON_2() {
        return BUTTON_2;
    }
    public float stat_REG_get_BUTTON_3() {
        return BUTTON_3;
    }
    public float stat_REG_get_BTN_Z() {
        return BTN_Z;
    }
    public float stat_REG_get_BUTTON_4() {
        return BUTTON_4;
    }
    public float stat_REG_get_BUTTON_5() {
        return BUTTON_5;
    }
    public float stat_REG_get_BTN_TL2() {
        return BTN_TL2;
    }
    public float stat_REG_get_BTN_TR2() {
        return BTN_TR2;
    }
    public float stat_REG_get_BUTTON_6() {
        return BUTTON_6;
    }
    public float stat_REG_get_BUTTON_7() {
        return BUTTON_7;
    }
    public float stat_REG_get_BUTTON_10() {
        return BUTTON_10 ;
    }
    public float stat_REG_get_BUTTON_8() {
        return BUTTON_8 ;
    }
    public float stat_REG_get_BUTTON_9() {
        return BUTTON_9;
    }
    public float stat_REG_get_LEFT_AXIS_X() {
        return LEFT_AXIS_X;
    }
    public float stat_REG_get_LEFT_AXIS_Y() {
        return LEFT_AXIS_Y;
    }
    public float stat_REG_get_LEFT_AXIS_Z() {
        return LEFT_AXIS_Z;
    }
    public float stat_REG_get_RIGHT_AXIS_Z() {
        return RIGHT_AXIS_Z;
    }
    public float stat_REG_get_ABS_GAS() {
        return ABS_GAS;
    }
    public float stat_REG_get_ABS_BRAKE() {
        return ABS_BRAKE ;
    }
    public float stat_REG_get_DPAD_LEFT_RIGHT() {
        return DPAD_LEFT_RIGHT;
    }
    public float stat_REG_get_DPAD_UP_DOWN() {
        return DPAD_UP_DOWN;
    }
    public float stat_REG_get_DPAD_UP() {
        return DPAD_UP;
    }
    public float stat_REG_get_DPAD_DOWN() {
        return DPAD_DOWN;
    }
    public float stat_REG_get_DPAD_LEFT() {
        return DPAD_LEFT;
    }
    public float stat_REG_get_DPAD_RIGHT() {
        return DPAD_RIGHT;
    }
    public void stat_REG_set_KEY_RECORD(float componentSample) {
        KEY_RECORD = componentSample;
    }
    public void stat_REG_set_BUTTON_0(float componentSample) {
        BUTTON_0 = componentSample;
    }
    public void stat_REG_set_BUTTON_1(float componentSample) {
        BUTTON_1 = componentSample;
    }
    public void stat_REG_set_BTN_C(float componentSample) {
        BTN_C = componentSample;
    }
    public void stat_REG_set_BUTTON_2(float componentSample) {
        BUTTON_2 = componentSample;
    }
    public void stat_REG_set_BUTTON_3(float componentSample) {
        BUTTON_3 = componentSample;
    }
    public void stat_REG_set_BTN_Z(float componentSample) {
        BTN_Z = componentSample;
    }
    public void stat_REG_set_BUTTON_4(float componentSample) {
        BUTTON_4 = componentSample;
    }
    public void stat_REG_set_BUTTON_5(float componentSample) {
        BUTTON_5 = componentSample;
    }
    public void stat_REG_set_BTN_TL2(float componentSample) {
        BTN_TL2 = componentSample;
    }
    public void stat_REG_set_BTN_TR2(float componentSample) {
        BTN_TR2 = componentSample;
    }
    public void stat_REG_set_BUTTON_6(float componentSample) {
        BUTTON_6 = componentSample;
    }
    public void stat_REG_set_BUTTON_7(float componentSample) {
        BUTTON_7 = componentSample;
    }
    public void stat_REG_set_BUTTON_10(float componentSample) {
        BUTTON_10  = componentSample;
    }
    public void stat_REG_set_BUTTON_8(float componentSample) {
        BUTTON_8  = componentSample;
    }
    public void stat_REG_set_BUTTON_9(float componentSample) {
        BUTTON_9 = componentSample;
    }
    public void stat_REG_set_LEFT_AXIS_X(float componentSample) {
        LEFT_AXIS_X = componentSample;
    }
    public void stat_REG_set_LEFT_AXIS_Y(float componentSample) {
        LEFT_AXIS_Y = componentSample;
    }
    public void stat_REG_set_LEFT_AXIS_Z(float componentSample) {
        LEFT_AXIS_Z = componentSample;
    }
    public void stat_REG_set_RIGHT_AXIS_Z(float componentSample) {
        RIGHT_AXIS_Z = componentSample;
    }
    public void stat_REG_set_ABS_GAS(float componentSample) {
        ABS_GAS = componentSample;
    }
    public void stat_REG_set_ABS_BRAKE(float componentSample) {
        ABS_BRAKE  = componentSample;
    }
    public void stat_REG_set_DPAD_LEFT_RIGHT(float componentSample) {
        DPAD_LEFT_RIGHT = componentSample;
    }
    public void stat_REG_set_DPAD_UP_DOWN(float componentSample) {
        DPAD_UP_DOWN = componentSample;
    }
    public void stat_REG_set_DPAD_UP(float componentSample) {
        DPAD_UP = componentSample;
    }
    public void stat_REG_set_DPAD_DOWN(float componentSample) {
        DPAD_DOWN = componentSample;
    }
    public void stat_REG_set_DPAD_LEFT(float componentSample) {
        DPAD_LEFT = componentSample;
    }
    public void stat_REG_set_DPAD_RIGHT(float componentSample) {
        DPAD_RIGHT = componentSample;
    }
}