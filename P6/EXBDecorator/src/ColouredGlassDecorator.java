import Comp.Component;
import Decorations.Decorator;

import java.awt.*;
import java.util.zip.CheckedInputStream;

public class ColouredGlassDecorator extends Decorator {

    public ColouredGlassDecorator(Component cmp, int x,int y, int width, int height) {
        super(cmp);
        this.x = x;
        this.y = y;
        this.height = height;
        this.width = width;
    }

    @Override
    public void draw(Graphics g) {
        cmp.draw(g);
        Graphics2D g2d = (Graphics2D) g;
        g2d.setColor(Color.GREEN);
        g2d.setComposite(AlphaComposite.getInstance(AlphaComposite.SRC_OVER, 1*0.1f));
        g2d.fillRect(x, y, width, height);
    }
}
