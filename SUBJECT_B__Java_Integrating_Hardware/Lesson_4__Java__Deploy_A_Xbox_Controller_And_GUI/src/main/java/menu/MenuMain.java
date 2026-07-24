package menu;

import engine.Framework;
import io.WriteQue_Simulation_OutputSamples;

import javax.swing.*;
import java.awt.*;

public class MenuMain extends JFrame {
    private JPanel manuMain_panelTop;
    private JPanel manuMain_panelBottom;
    private JPanel manuMain_panelLeft;
    private JPanel manuMain_panelRight;
    private JPanel manuMain_panelCentre;
    private JLayeredPane manuMain_panelCentre__layeredPane;
    private BackgroundControllerTest manuMain_panelCentre__layeredPane__technical_drawing;
    private JLabel menuMain_Title;
    private static JTextArea outputTextArea;
    private JScrollPane scrollPane;

    public MenuMain()
    {

    }

    public void createAndShowGUI_MenuMain(Framework obj)
    {
        WriteQue_Simulation_OutputSamples.app_FUNCT_write_Start(1);

        setTitle("");
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setSize(1920,1080);
        setLayout(new BorderLayout(4,4 ));
        setLocationRelativeTo(null);
        setVisible(true);

        manuMain_panelTop = new JPanel();
        manuMain_panelBottom= new JPanel();
        manuMain_panelLeft = new JPanel();
        manuMain_panelRight = new JPanel();
        manuMain_panelCentre__layeredPane = new JLayeredPane();
        manuMain_panelCentre = new JPanel(new BorderLayout());
        outputTextArea = new JTextArea();

        JPanel temp = new BackgroundControllerTest("resources/xbox_controller.png");
        manuMain_panelCentre__layeredPane.add(temp, JLayeredPane.DEFAULT_LAYER, 0);

        temp = new BackgroundControllerTest("resources/xbox_controller__A.png");
        manuMain_panelCentre__layeredPane.add(temp, JLayeredPane.PALETTE_LAYER, 0);

        scrollPane = new JScrollPane(outputTextArea);

        manuMain_panelTop.setBackground(Color.red);
        manuMain_panelBottom.setBackground(Color.green);
        manuMain_panelLeft.setBackground(Color.yellow);
        manuMain_panelRight.setBackground(Color.magenta);
        manuMain_panelCentre.setBackground(Color.blue);

        manuMain_panelTop.setPreferredSize(new Dimension(100,50));
        manuMain_panelBottom.setPreferredSize(new Dimension(100,50));
        manuMain_panelLeft.setPreferredSize(new Dimension(100,100));
        manuMain_panelRight.setPreferredSize(new Dimension(100,100));

        add(manuMain_panelTop, BorderLayout.NORTH);
        add(manuMain_panelBottom, BorderLayout.SOUTH);
        add(manuMain_panelLeft, BorderLayout.WEST);
        add(manuMain_panelRight, BorderLayout.EAST);
        manuMain_panelCentre.add(scrollPane);
        add(manuMain_panelCentre, BorderLayout.CENTER);

        //outputTextArea = new JTextArea();
        //manuMain_panelCentre.add(outputTextArea);

        WriteQue_Simulation_OutputSamples.app_FUNCT_write_End(1);
    }

    public static void printConsoleAndOutput(String message) {
        System.out.println(message);
        outputTextArea.append(message + "\n");
    }
}
