package Decorations;

import java.awt.*;
import Comp.Component;

import javax.swing.*;

public class Text implements Component {

    protected int x;
    protected int y;
    protected String text;

    public Text(String text, int x, int y){
        this.x = x;
        this.y = y;
        this.text = text;
    }
    @Override
    public void draw(Graphics g) {
        g.setColor(Color.BLACK);
        g.drawString(text, x, y);
    }
}
