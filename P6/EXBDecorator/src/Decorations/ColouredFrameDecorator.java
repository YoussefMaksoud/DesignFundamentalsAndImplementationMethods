package Decorations;

import java.awt.*;
import Comp.Component;

public class ColouredFrameDecorator extends Decorator {

    private int thickness;

    public ColouredFrameDecorator(Component c, int x, int y, int width, int height, int thickness){
        super(c);
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
        this.thickness = thickness;

    }

    @Override
    public void draw(Graphics g) {

        cmp.draw(g);
        Graphics2D g2d = (Graphics2D) g;
        g2d.setStroke(new BasicStroke(10.0f));
        g2d.setColor(Color.red);
        g2d.drawRect(x, y, width, height);
    }
}
