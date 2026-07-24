package menu;
import javax.swing.*;
import java.awt.*;
import java.io.File;
import java.io.IOException;
import java.util.Objects;
import javax.imageio.ImageIO;
public class BackgroundControllerTest extends JPanel {

    private Image backgroundImage;

    public BackgroundControllerTest(String resourcePath) {
        try {
            backgroundImage = ImageIO.read(new File(resourcePath));
        } catch (IOException e) {
            System.out.println("Error: Could not load image.");
            e.printStackTrace();
        }
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g); // Clears the screen and maintains transparency lifecycle
        if (backgroundImage != null) {
            // Scales the background image dynamically to fill the entire panel size
            g.drawImage(backgroundImage, 0, 0, getWidth(), getHeight(), this);
        }
    }
}
