package menu;
import engine.Framework;
import io.WriteQue_ClientUserOutput;
import javax.swing.*;
import java.awt.*;

public class MenuMain extends JFrame {
    private JPanel manuMain_panelTop;
    private JPanel manuMain_panelBottom;
    private JPanel manuMain_panelLeft;
    private JPanel manuMain_panelRight;
    private JPanel manuMain_panelCentre;
    private BackgroundControllerTest manuMain_panelCentre_image__xbox_controller;
    private BackgroundControllerTest manuMain_panelCentre_image__xbox_controller__A;
    private BackgroundControllerTest manuMain_panelCentre_image__xbox_controller__B;
    private BackgroundControllerTest manuMain_panelCentre_image__xbox_controller__X;
    private BackgroundControllerTest manuMain_panelCentre_image__xbox_controller__Y;
    private JLayeredPane manuMain_panelCentre__layeredPane;
    private static JTextArea manuMain_panelCentre__outputTextArea;
    private JScrollPane manuMain_panelCentre__outputTextArea__scrollPane;
    private JLabel menuMain_Title;

    public MenuMain()
    {

    }

    public void createAndShowGUI_MenuMain(Framework obj)
    {
        WriteQue_ClientUserOutput.app_FUNCT_write_Start(1);
        this.setTitle("");
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        int screenWidth = 1920;
        int screenHeight = 1080;
        this.setSize(screenWidth,screenHeight);
        this.setLayout(new BorderLayout(4,4 ));
        this.setLocationRelativeTo(null);
        this.setVisible(true);
        manuMain_panelTop = new JPanel();
        manuMain_panelBottom= new JPanel();
        manuMain_panelLeft = new JPanel();
        manuMain_panelRight = new JPanel();
        manuMain_panelCentre = new JPanel(new BorderLayout());
        manuMain_panelCentre_image__xbox_controller = new BackgroundControllerTest("resources/xbox_controller.png");
        manuMain_panelCentre_image__xbox_controller.setBounds(0, 0, screenWidth - 200, screenHeight - 100);
        manuMain_panelCentre_image__xbox_controller__A = new BackgroundControllerTest("resources/xbox_controller__A.png");
        manuMain_panelCentre_image__xbox_controller__A.setBounds(0, 0, screenWidth - 200, screenHeight - 100);
        manuMain_panelCentre_image__xbox_controller__B = new BackgroundControllerTest("resources/xbox_controller__B.png");
        manuMain_panelCentre_image__xbox_controller__B.setBounds(0, 0, screenWidth - 200, screenHeight - 100);
        manuMain_panelCentre_image__xbox_controller__X = new BackgroundControllerTest("resources/xbox_controller__X.png");
        manuMain_panelCentre_image__xbox_controller__X.setBounds(0, 0, screenWidth - 200, screenHeight - 100);
        manuMain_panelCentre_image__xbox_controller__Y = new BackgroundControllerTest("resources/xbox_controller__Y.png");
        manuMain_panelCentre_image__xbox_controller__Y.setBounds(0, 0, screenWidth - 200, screenHeight - 100);
        manuMain_panelCentre__layeredPane = new JLayeredPane();
        manuMain_panelCentre__layeredPane.add(manuMain_panelCentre_image__xbox_controller, JLayeredPane.DEFAULT_LAYER, 0);
        manuMain_panelCentre__layeredPane.add(manuMain_panelCentre_image__xbox_controller__A, JLayeredPane.DEFAULT_LAYER, 1);
        manuMain_panelCentre__layeredPane.add(manuMain_panelCentre_image__xbox_controller__B, JLayeredPane.DEFAULT_LAYER, 2);
        manuMain_panelCentre__layeredPane.add(manuMain_panelCentre_image__xbox_controller__X, JLayeredPane.DEFAULT_LAYER, 3);
        manuMain_panelCentre__layeredPane.add(manuMain_panelCentre_image__xbox_controller__Y, JLayeredPane.DEFAULT_LAYER, -1);
        manuMain_panelCentre.add(manuMain_panelCentre__layeredPane, BorderLayout.CENTER);
        //manuMain_panelCentre__outputTextArea = new JTextArea();
        //manuMain_panelCentre__outputTextArea__scrollPane = new JScrollPane(manuMain_panelCentre__outputTextArea);
        manuMain_panelTop.setBackground(Color.red);
        manuMain_panelBottom.setBackground(Color.green);
        manuMain_panelLeft.setBackground(Color.yellow);
        manuMain_panelRight.setBackground(Color.magenta);
        manuMain_panelCentre.setBackground(Color.blue);
        manuMain_panelTop.setPreferredSize(new Dimension(100,50));
        manuMain_panelBottom.setPreferredSize(new Dimension(100,50));
        manuMain_panelLeft.setPreferredSize(new Dimension(100,100));
        manuMain_panelRight.setPreferredSize(new Dimension(100,100));
        this.add(manuMain_panelTop, BorderLayout.NORTH);
        this.add(manuMain_panelBottom, BorderLayout.SOUTH);
        this.add(manuMain_panelLeft, BorderLayout.WEST);
        this.add(manuMain_panelRight, BorderLayout.EAST);
        this.add(manuMain_panelCentre, BorderLayout.CENTER);
        this.pack();
        WriteQue_ClientUserOutput.app_FUNCT_write_End(1);
    }

    public static void printConsoleAndOutput(String message) {
        System.out.println(message);
        manuMain_panelCentre__outputTextArea.append(message + "\n");
        manuMain_panelCentre__outputTextArea.setCaretPosition(manuMain_panelCentre__outputTextArea.getDocument().getLength());
    }
}
