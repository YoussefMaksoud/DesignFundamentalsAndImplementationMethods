package Decorations;

import java.awt.*;
import Comp.Component;

import javax.swing.border.Border;
import javax.swing.border.LineBorder;

public class BorderDecorator extends Decorator {

    public BorderDecorator(Component c, int x, int y, int width, int height){
        super(c);
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }

    @Override
    public void draw(Graphics g) {

        cmp.draw(g);
        Stroke dashed = new BasicStroke(3, BasicStroke.CAP_BUTT, BasicStroke.JOIN_BEVEL,
                0, new float[]{9}, 0);

       Graphics2D g2d = (Graphics2D) g;
       g2d.setStroke(dashed);
       g.setColor(Color.BLACK);
       g.drawRect(x, y, width, height);

    }
}
