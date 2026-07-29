package SIMULATION;
import engine.Framework;
import io.*;
import structs.Input;
import structs.Output;
import structs.praise_sets.Input_praise0;
import structs.praise_sets.Input_praise1;
import structs.praise_sets.Input_praise2;
import structs.praise_sets.Input_praise3;
import structs.praise_sets.Output_praise0;
import structs.praise_sets.Output_praise1;
import structs.praise_sets.Output_praise2;
import structs.praise_sets.Output_praise3;
import java.util.Scanner;
public class Simulation
{
    private static Framework obj;
    public static Input[] _stat_REG_doubleBuffer__Input;
    public static Output[] _stat_REG_doubleBuffer__Output;
    public static boolean _stat_REG_flag_sideToWrtie_doubleBuffer__Intput;
    public static boolean _stat_REG_flag_sideToWrtie_doubleBuffer__Output;
    public static Input _SIM_stat_REG_input_Sample;
    public static Output _SIM_stat_REG_output_Sample;
    private static Scanner _stat_REG_scanner;
// public.
    public Simulation(Framework objIn, Input _DEFAULT_inputSample, Output _DEFAULT_outputSample) {
        obj = null;
        obj = objIn;

        _SIM_stat_REG_input_Sample = null;
        _SIM_stat_REG_input_Sample = _DEFAULT_inputSample;
        _SIM_stat_REG_input_Sample.dyn_REG_boot2_SUBSTANTIATE_Input();
        _SIM_stat_REG_input_Sample = _DEFAULT_inputSample;

        _SIM_stat_REG_output_Sample = null;
        _SIM_stat_REG_output_Sample = _DEFAULT_outputSample;
        _SIM_stat_REG_output_Sample.dyn_REG_boot2_SUBSTANTIATE_Output();
        _SIM_stat_REG_output_Sample = _DEFAULT_outputSample;

        _stat_REG_scanner = null;
    }
    public void Thread_Input_Peripheral_Scanner(Framework obj, byte threadId) {
        WriteQue_SimulationIO.app_FUNCT_write_Start(1);//todo SIM
        System.out.printf("thread " + threadId + ": Enter THREAD member function on thread.%n");
        WriteQue_SimulationIO.app_FUNCT_write_End(1);//todo SIM
        boolean doneOnce = false;
        boolean checkPass = false;
        while(!checkPass) {
            WriteQue_ConditionCode.app_FUNCT_write_Start(1);
            WriteQue_SimulationIO.app_FUNCT_write_Start(1);//todo SIM
            if (!doneOnce)
            {
                obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_set_Item_On_List_Of_Flag_ThreadInitialised(threadId, true);
                System.out.printf("thread " + threadId + ": isThreadInitialised => " + obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(threadId) + ".%n");
                doneOnce = true;
            }
            boolean temp = true;
            for(byte index = 0; index < 3; index++) {
                if(!obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(index)) {
                    temp = false;
                }
            }
            obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_set_Flag_is_SystemInitialised(temp);
            if(obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                checkPass = true;
            }
            WriteQue_SimulationIO.app_FUNCT_write_End(1);//todo SIM
            WriteQue_ConditionCode.app_FUNCT_write_End(1);
        }
        WriteQue_SimulationIO.app_FUNCT_write_Start(1);//todo SIM
        System.out.printf("thread " + threadId + ": Initialised Thread.%n");
        WriteQue_SimulationIO.app_FUNCT_write_End(1);//todo SIM
        checkPass = false;
        while(!checkPass) {
            WriteQue_ConditionCode.app_FUNCT_write_Start(1);
            WriteQue_SimulationIO.app_FUNCT_write_Start(1);//todo SIM
            if (obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                checkPass = true;
            }
            WriteQue_SimulationIO.app_FUNCT_write_End(1);//todo SIM
            WriteQue_ConditionCode.app_FUNCT_write_End(1);
        }
        WriteQue_SimulationIO.app_FUNCT_write_Start(1);//todo SIM
        System.out.printf("thread " + threadId + ": FLAG SystemInitialised() => " + obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised() + ".%n");
        System.out.printf("thread " + threadId + ": System Initialised.%n");
        System.out.printf("thread " + threadId + ": System Instantiated.%n");
        System.out.printf("thread " + threadId + ": Starting THREAD.%n");
        WriteQue_SimulationIO.app_FUNCT_write_End(1);//todo SIM
        checkPass = false;
        while(!checkPass) {
            WriteQue_ConditionCode.app_FUNCT_write_Start(1);
            WriteQue_SimulationIO.app_FUNCT_write_Start(1);//todo SIM
            System.out.printf("thread " + threadId + ": OPEN ACCESS 'WriteQue_SimulationIO' @id=1.%n");
            if(obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                obj.dyn_CLASS_get_SIMULATION().app_Do_Process_Of_Input(obj);
                obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_set_flag__isNewOutputReady(true);
            }
            WriteQue_SimulationIO.app_FUNCT_write_End(1);//todo SIM
            WriteQue_ConditionCode.app_FUNCT_write_End(1);
            WriteQue_ConditionCode.app_FUNCT_write_Start(1);
            WriteQue_SimulationIO.app_FUNCT_write_Start(1);//todo SIM
            if(!obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                checkPass = true;
            }
            System.out.printf("thread " + threadId + ": CLOSE ACCESS 'WriteQue_SimulationIO' @id=1.%n");
            WriteQue_SimulationIO.app_FUNCT_write_End(1);//todo SIM
            WriteQue_ConditionCode.app_FUNCT_write_End(1);
        }
    }
    public void Thread_Output_Draw(Framework obj, byte threadId) {
        WriteQue_SimulationIO.app_FUNCT_write_Start(2);//todo SIM
        System.out.printf("thread " + threadId + ": Enter THREAD member function on thread.%n");
        WriteQue_SimulationIO.app_FUNCT_write_End(2);//todo SIM
        boolean doneOnce = false;
        boolean checkPass = false;
        while(!checkPass) {
            WriteQue_ConditionCode.app_FUNCT_write_Start(2);
            WriteQue_SimulationIO.app_FUNCT_write_Start(2);//todo SIM
            if (!doneOnce)
            {
                obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_set_Item_On_List_Of_Flag_ThreadInitialised(threadId, true);
                System.out.printf("thread " + threadId + ": isThreadInitialised => " + obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(threadId) + ".%n");
                doneOnce = true;
            }
            boolean temp = true;
            for(byte index = 0; index < 3; index++) {
                if(!obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(index)) {
                    temp = false;
                }
            }
            obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_set_Flag_is_SystemInitialised(temp);
            if(obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                checkPass = true;
            }
            WriteQue_SimulationIO.app_FUNCT_write_End(2);//todo SIM
            WriteQue_ConditionCode.app_FUNCT_write_End(2);
        }
        WriteQue_SimulationIO.app_FUNCT_write_Start(2);//todo SIM
        System.out.printf("thread " + threadId + ": Initialised Thread.%n");
        WriteQue_SimulationIO.app_FUNCT_write_End(2);//todo SIM
        checkPass = false;
        while(!checkPass) {
            WriteQue_ConditionCode.app_FUNCT_write_Start(2);
            WriteQue_SimulationIO.app_FUNCT_write_Start(2);//todo SIM
            if (obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                checkPass = true;
            }
            WriteQue_SimulationIO.app_FUNCT_write_End(2);//todo SIM
            WriteQue_ConditionCode.app_FUNCT_write_End(2);
        }
        WriteQue_SimulationIO.app_FUNCT_write_Start(2);//todo SIM
        System.out.printf("thread " + threadId + ": FLAG SystemInitialised() => " + obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised() + ".%n");
        System.out.printf("thread " + threadId + ": System Initialised.%n");
        System.out.printf("thread " + threadId + ": System Instantiated.%n");
        System.out.printf("thread " + threadId + ": Starting THREAD.%n");
        WriteQue_SimulationIO.app_FUNCT_write_End(2);//todo SIM
        checkPass = false;
        while(!checkPass) {
            WriteQue_ConditionCode.app_FUNCT_write_Start(2);
            WriteQue_SimulationIO.app_FUNCT_write_Start(2);//todo SIM
            System.out.printf("thread " + threadId + ": OPEN ACCESS 'WriteQue_SimulationIO' @id=2.%n");
            if(obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                obj.dyn_CLASS_get_SIMULATION().app_Do_Process_Of_Output(obj);
            }
            if(!obj.dyn_CLASS_get_App().dyn_CLASS_get_Execute().dyn_CLASS_get_Execute_Control().dyn_REG_get_Flag_is_SystemInitialised()) {
                checkPass = true;
            }
            System.out.printf("thread " + threadId + ": CLOSE ACCESS 'WriteQue_SimulationIO' @id=2.%n");
            WriteQue_SimulationIO.app_FUNCT_write_End(2);//todo SIM
            WriteQue_ConditionCode.app_FUNCT_write_End(2);
        }
    }
    public void Terminate_stat_REG_scanner()
    {
        _stat_REG_scanner.close();
    }
    public void sim_Get_Praise_Event_Id_And_Data(Input input) {
        _stat_REG_scanner = new Scanner(System.in);
        while(_stat_REG_scanner == null) {

        }
        int praiseEventId = 0;
        System.out.printf("Enter PraiseEventId: ");
        while(!_stat_REG_scanner.hasNext()) {

        }
        praiseEventId = _stat_REG_scanner.nextInt(); // Program waits here
        input.dyn_REG_set_Input_praiseId(praiseEventId);
        input.dyn_REG_set_InputSubset(obj, praiseEventId);
        switch (input.dyn_REG_get_Input_praiseId()) {
            case (int) 0:
                Input_praise0 input_subset0 = (Input_praise0) input.dyn_REG_get_InputSubset();
                System.out.printf("Enter _stat_REG_scanner Subset0 valueA: ");
                input_subset0.dyn_REG_set_input_praise0_valueA(_stat_REG_scanner.nextDouble());
                System.out.printf("Enter _stat_REG_scanner Subset0 valueB: ");
                input_subset0.dyn_REG_set_input_praise0_valueB(_stat_REG_scanner.nextDouble()); // Program waits here
                break;

            case (int) 1:
                Input_praise1 input_subset1 = (Input_praise1) input.dyn_REG_get_InputSubset();
                System.out.printf("Enter _stat_REG_scanner Subset1 valueA: ");
                input_subset1.dyn_REG_set_input_praise1_valueA(_stat_REG_scanner.nextDouble());
                System.out.printf("Enter _stat_REG_scanner Subset1 valueB: ");
                input_subset1.dyn_REG_set_input_praise1_valueB(_stat_REG_scanner.nextDouble()); // Program waits here
                break;

            case (int) 2:
                Input_praise2 input_suber2 = (Input_praise2) input.dyn_REG_get_InputSubset();
                System.out.printf("Enter _stat_REG_scanner Subset2 valueA: ");
                input_suber2.dyn_REG_set_input_praise2_valueA(_stat_REG_scanner.nextDouble());
                System.out.printf("Enter _stat_REG_scanner Subset2 valueB: ");
                input_suber2.dyn_REG_set_input_praise2_valueB(_stat_REG_scanner.nextDouble()); // Program waits here
                break;

            case (int) 3:
                Input_praise3 input_suber3 = (Input_praise3) input.dyn_REG_get_InputSubset();
                System.out.printf("Enter _stat_REG_scanner Subset3 valueA: ");
                input_suber3.dyn_REG_set_input_praise3_valueA(_stat_REG_scanner.nextDouble());
                System.out.printf("Enter _stat_REG_scanner Subset3 valueB: ");
                input_suber3.dyn_REG_set_input_praise3_valueB(_stat_REG_scanner.nextDouble()); // Program waits here
                break;
        }
        _stat_REG_scanner.close();
    }
    public void sim_Print_PraiseEvent(Output output) {
        obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_set_flag__isNewOutputReady(false);
        System.out.printf("PraiseEventId: " + output.dyn_REG_get_Output_praiseId() + ".%n");
        switch(output.dyn_REG_get_Output_praiseId())
        {
            case 0:
                Output_praise0 output_subset0 = (Output_praise0)output.dyn_REG_get_OutputSubset();
                System.out.printf("output subset0 value: " + output_subset0.dyn_REG_get_output_praise0_value() + ".%n");
                break;

            case 1:
                Output_praise1 output_subset1 = (Output_praise1)output.dyn_REG_get_OutputSubset();
                System.out.printf("output subset1 value: " + output_subset1.dyn_REG_get_output_praise1_value() + ".%n");
                break;

            case 2:
                Output_praise2 output_subset2 = (Output_praise2)output.dyn_REG_get_OutputSubset();
                System.out.printf("output subset2 value: " + output_subset2.dyn_REG_get_output_praise2_value() + ".%n");
                break;

            case 3:
                Output_praise3 output_subset3 = (Output_praise3)output.dyn_REG_get_OutputSubset();
                System.out.printf("output subset3 value: " + output_subset3.dyn_REG_get_output_praise3_value() + ".%n");
                break;
        }
    }
    public void app_Do_Process_Of_Input(Framework obj) {
        obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_set_flag__isNewInputReady(false);
        _SIM_stat_REG_input_Sample = obj.dyn_STRUCT_get_Input();
        obj.dyn_CLASS_get_SIMULATION().sim_Get_Praise_Event_Id_And_Data(_SIM_stat_REG_input_Sample);//SIMULATION

    }
    public void app_Do_Process_Of_Output(Framework obj) {
        _SIM_stat_REG_output_Sample = obj.dyn_STRUCT_get_Output();
        if(obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_get_flag__isNewOutputReady()) {
            obj.dyn_CLASS_get_SIMULATION().sim_Print_PraiseEvent(_SIM_stat_REG_output_Sample);
            obj.dyn_STRUCT_get_IO_ListenRespond().dyn_REG_set_flag__isNewOutputReady(true);
        }
    }
    public void dyn_REG_boot1_DEFINE__SIMULATION() {
        stat_REG_boot1_DEFINE__SIMULATION();
    }
    public void dyn_REG_boot2_SUBSTANTIATE__SIMULATION(Input sample) {
        stat_REG_boot2_SUBSTANTIATE__SIMULATION(sample);
    }
    public void dyn_REG_boot3_INITIALISE__SIMULATION(Input sample) {
        stat_REG_boot3_INITIALISE__SIMULATION(sample);
    }
    private Input dyn_REG_get_Input_Sample() {
        return stat_REG_get_flag_Input_Sample();
    }
    private Output dyn_REG_get_Output_Sample() {
        return stat_REG_get_Output_Sample();
    }
// private.
    public void stat_REG_boot1_DEFINE__SIMULATION() {
        stat_CLASS_boot1_DEFINE_SIMULATION__stat_REG_input_Sample();
    }
    private static void stat_CLASS_boot1_DEFINE_SIMULATION__stat_REG_input_Sample() {
        _SIM_stat_REG_input_Sample = null;
    }
    public void stat_REG_boot2_SUBSTANTIATE__SIMULATION(Input sample) {
        stat_REG_boot2_SUBSTANTIATE__SIMULATION__SIM_stat_REG_input_Sample(sample);
    }
    private static void stat_REG_boot2_SUBSTANTIATE__SIMULATION__SIM_stat_REG_input_Sample(Input sample) {
        sample.dyn_REG_boot2_SUBSTANTIATE_Input();
        _SIM_stat_REG_input_Sample = sample;
    }
    public void stat_REG_boot3_INITIALISE__SIMULATION(Input sample) {
        stat_REG_boot3_INITIALISE__SIMULATION__SIM_stat_REG_input_Sample(sample);
    }
    private static void stat_REG_boot3_INITIALISE__SIMULATION__SIM_stat_REG_input_Sample(Input sample) {
        _SIM_stat_REG_input_Sample = sample;
    }
    private static Input stat_REG_get_flag_Input_Sample() {
        return _SIM_stat_REG_input_Sample;
    }
    private static Output stat_REG_get_Output_Sample() {
        return _SIM_stat_REG_output_Sample;
    }
}