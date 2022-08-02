package Decorations;

import Comp.Component;

public abstract class Decorator implements Component {

    protected Component cmp;
    protected int x;
    protected int y;
    protected int width;
    public int height;

    public Decorator(Component cmp){
        this.cmp = cmp;
    }

}
