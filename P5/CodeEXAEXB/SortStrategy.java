
import java.util.ArrayList;

public interface SortStrategy<E extends Number & Comparable<E>> {
    void performSort(ArrayList<Item<E>> toSort);
}
