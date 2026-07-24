package engine;
import com.sun.jna.Pointer;
import io.*;

import javax.swing.*;
import menu.MenuMain;
import threads.EventListener_XBoxController;
public class Execute
{
    private static Execute_Control _stat_CLASS_Execute_Control;
    private static MenuMain _stat_CLASS_MenuMain;
    private static Thread[] _stat_REG_List_Of_Threads;
    private static Pointer _stat_PGM_WriteQueForThreadsAt_InputSamples;
    private static Pointer _stat_PGM_WriteQueForThreadsAt_OutputSamples;
// public.
    public Execute() {
        System.out.printf("entered CLASS Execute()%n");
        stat_CLASS_boot0_DECLAIRE_Execute();
        stat_CLASS_boot1_DEFINE_Execute();
        stat_CLASS_boot3_INITIALISE_Execute();
        stat_REG_boot0_DECLAIRE_Execute();
        System.out.printf("exiting CLASS Execute()%n");
    }
    public void dyn_APP_startThreads() {
        for (int threadId = 0; threadId < _stat_REG_List_Of_Threads.length; threadId++)
        {
            int finalThreadId = threadId;
            _stat_REG_List_Of_Threads[threadId].start();
            //finalThreadId++;
            //_stat_REG_List_Of_Threads[threadId].start();
        }
    }
    public Execute_Control dyn_CLASS_get_Execute_Control()
    {
        return stat_CLASS_get_Execute_Control();
    }
    public void dyn_REG_boot1_DEFINE_Execute(Framework obj) {
        System.out.printf("entered dyn_REG_boot1_DEFINE_Execute().%n");
        stat_REG_boot1_DEFINE_List_Of_Threads();
        System.out.printf("exiting dyn_REG_boot1_DEFINE_Execute().%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_Execute(Framework obj) {
        System.out.printf("entered dyn_REG_boot2_SUBSTANTIATE_Execute().%n");
        stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(obj);
        System.out.printf("exiting dyn_REG_boot2_SUBSTANTIATE_Execute().%n");
    }
    public void dyn_REG_boot3_INITIALISE_Execute(Framework obj) {
        System.out.printf("entered dyn_REG_boot3_INITIALISE_Execute().%n");
        stat_REG_boot3_INITIALISE_List_Of_Threads(obj);
        System.out.printf("exiting dyn_REG_boot3_INITIALISE_Execute().%n");
    }
    public void dyn_REG_boot4_INSTANTIATE_Execute() {
        System.out.printf("entered dyn_REG_boot4_INSTANTIATE_Execute().%n");
        int intPrimeDEFAULT = Integer.MAX_VALUE;
        boolean booleanPrimeDEFAULT = true;

        System.out.printf("entered CHECK member function WriteQue_InputPerihperalSamples().%n");
        //WriteQue_Simulation_InputSamples.app_FUNCT_generate_Program();
        Boolean tempA0 = WriteQue_Simulation_InputSamples.app_FUNCT_get_flag_isPGM_INSTNATIATED();
        WriteQue_Simulation_InputSamples.app_FUNCT_terminate_Program();
        WriteQue_Simulation_InputSamples.app_FUNCT_write_End(intPrimeDEFAULT);
        WriteQue_Simulation_InputSamples.app_FUNCT_write_Start(intPrimeDEFAULT);
        System.out.printf("done CHECK member function WriteQue_InputPerihperalSamples().%n");

        System.out.printf("entered CHECK member function WriteQue_OutputGameInstanaceData().%n");
        //WriteQue_Simulation_OutputSamples.app_FUNCT_generate_Program();
        Boolean tempB0 = WriteQue_Simulation_OutputSamples.app_FUNCT_get_flag_isPGM_INSTNATIATED();
        WriteQue_Simulation_OutputSamples.app_FUNCT_terminate_Program();
        WriteQue_Simulation_OutputSamples.app_FUNCT_write_End(intPrimeDEFAULT);
        WriteQue_Simulation_OutputSamples.app_FUNCT_write_Start(intPrimeDEFAULT);
        System.out.printf("done CHECK member function WriteQue_OutputGameInstanaceData().%n");

        System.out.printf("exiting dyn_REG_boot4_INSTANTIATE_Execute().%n");
    }
    static private void stat_CLASS_boot0_DECLAIRE_Execute() {
        System.out.printf("entered stat_CLASS_boot0_DECLAIRE_Execute().%n");

        System.out.printf("exiting stat_CLASS_boot0_DECLAIRE_Execute().%n");
    }
    private static void stat_CLASS_boot1_DEFINE_Execute() {
        System.out.printf("entered stat_CLASS_boot1_DEFINE_Execute().%n");
        stat_CLASS_boot1_DEFINE_Execute_Control();
        stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_InputPerihperalSamples();
        stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_OutputGameInstanaceData();
        stat_CLASS_boot1_DEFINE_MenuMain();
        System.out.printf("exiting stat_CLASS_boot1_DEFINE_Execute().%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_Execute() {
        System.out.printf("entered stat_CLASS_boot3_INITIALISE_Execute().%n");
        stat_CLASS_boot3_INITIALISE_Execute_Control();
        stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_InputPerihperalSamples();
        stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_OutputGameInstanaceData();
        System.out.printf("exiting stat_CLASS_boot3_INITIALISE_Execute().%n");
    }
    private static void stat_REG_boot0_DECLAIRE_Execute() {
            System.out.printf("entered stat_REG_boot0_DECLAIRE_Execute().%n");

            System.out.printf("exiting stat_REG_boot0_DECLAIRE_Execute().%n");
    }
// private.
    private void dyn_APP_Draw_2D_Menu() {
        stat_CLASS_boot3_INITIALISE_MenuMain();
    }
    static void stat_CLASS_boot1_DEFINE_Execute_Control() {
        System.out.printf("entered stat_CLASS_boot1_DEFINE_Execute_Control().%n");
        _stat_CLASS_Execute_Control = null;
        System.out.printf("exiting stat_CLASS_boot1_DEFINE_Execute_Control().%n");
    }
    private static void stat_CLASS_boot1_DEFINE_MenuMain() {
        System.out.printf("entered stat_CLASS_boot1_DEFINE_Execute_Control().%n");
        _stat_CLASS_MenuMain = null;
        System.out.printf("exiting stat_CLASS_boot1_DEFINE_Execute_Control().%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_Execute_Control() {
        System.out.printf("entered stat_CLASS_boot3_INITIALISE_Execute_Control().%n");
        _stat_CLASS_Execute_Control = new Execute_Control();
        try {
            stat_CLASS_get_Execute_Control();
        }
        catch (NullPointerException e) {
            System.out.printf("NullPointerException.%n");
        }
        System.out.printf("exiting stat_CLASS_boot3_INITIALISE_Execute_Control().%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_MenuMain() {
        System.out.printf("entered stat_CLASS_boot3_INITIALISE_Execute_Control().%n");
        _stat_CLASS_MenuMain = new MenuMain();
        try {
            SwingUtilities.invokeLater(() -> {
                stat_CLASS_get_MenuMain().createAndShowGUI_MenuMain();
            });
        }
        catch (NullPointerException e) {
            System.out.printf("NullPointerException.%n");
        }
        System.out.printf("exiting stat_CLASS_boot3_INITIALISE_Execute_Control().%n");
    }
    private static Execute_Control stat_CLASS_get_Execute_Control() {
        return _stat_CLASS_Execute_Control;
    }
    private static MenuMain stat_CLASS_get_MenuMain() {
        return _stat_CLASS_MenuMain;
    }
    private static void stat_REG_boot1_DEFINE_List_Of_Threads() {
        _stat_REG_List_Of_Threads = null;
    }
    private static void stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(Framework obj) {
        _stat_REG_List_Of_Threads = new Thread[obj.dyn_CLASS_get_Global().dyn_REG_get_numberOfCores()];
        try {
            stat_REG_get_ptr_List_Of_Threads();
        }
        catch (NullPointerException e) {
            System.out.printf("NullPointerException.%n");
        }
        for (int threadId = 0; threadId < _stat_REG_List_Of_Threads.length; threadId++)
        {
            _stat_REG_List_Of_Threads[threadId] = null;
        }
    }
    private static void stat_REG_boot3_INITIALISE_List_Of_Threads(Framework obj) {
        for (int threadId = 0; threadId < _stat_REG_List_Of_Threads.length; threadId++)
        {
            int finalThreadId = threadId;
            _stat_REG_List_Of_Threads[threadId] = new Thread(() -> obj.dyn_CLASS_get_Framework_App().dyn_CLASS_get_Execute().dyn_APP_Draw_2D_Menu());
            //finalThreadId++;
            //_stat_REG_List_Of_Threads[threadId] = new Thread(() -> obj.dyn_THREAD_get_EventListener_XBoxController().doScanOfXBoxControllers(obj));
        }
    }
    private static Thread[] stat_REG_get_ptr_List_Of_Threads() {
        return _stat_REG_List_Of_Threads;
    }
    private static void stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_InputPerihperalSamples() {
        System.out.printf("entered Execute stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_InputPerihperalSamples().%n");
        _stat_PGM_WriteQueForThreadsAt_InputSamples = null;
        System.out.printf("exiting Execute stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_InputPerihperalSamples().%n");
    }
    private static void stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_OutputGameInstanaceData() {
        System.out.printf("entered Execute stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_OutputGameInstanaceData().%n");
        _stat_PGM_WriteQueForThreadsAt_OutputSamples = null;
        System.out.printf("exiting Execute stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_OutputGameInstanaceData().%n");
    }
    private static void stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_InputPerihperalSamples() {
        System.out.printf("entered stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_InputPerihperalSamples().%n");
        _stat_PGM_WriteQueForThreadsAt_InputSamples = WriteQue_Simulation_InputSamples.app_FUNCT_generate_Program();
        System.out.printf("exiting stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_InputPerihperalSamples().%n");
    }
    private static void stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_OutputGameInstanaceData() {
        System.out.printf("entered Execute stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_OutputGameInstanaceData().%n");
        _stat_PGM_WriteQueForThreadsAt_OutputSamples = WriteQue_Simulation_OutputSamples.app_FUNCT_generate_Program();
        System.out.printf("exiting Execute stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_OutputGameInstanaceData().%n");
    }
    private static Pointer stat_PGM_get_WriteQueForThreadsAt_InputSamples() {
        return _stat_PGM_WriteQueForThreadsAt_InputSamples;
    }
    private static Pointer stat_PGM_get_WriteQueForThreadsAt__OutputSamples() {
        return _stat_PGM_WriteQueForThreadsAt_OutputSamples;
    }
}