import java.util.ArrayList;

public class InsertionSorter<E extends Number & Comparable<E>> implements SortStrategy {

    public InsertionSorter(){}

    @Override
    public void performSort(ArrayList toSort) {
        int newSize = toSort.size();

        for(int i = 1; i < newSize; ++i){
            Item<E> key = (Item<E>) toSort.get(i);
            int j = i - 1;
            Item<E> compared = (Item<E>) toSort.get(j);

            while(j >= 0 && (compared.getItem().compareTo(key.getItem()) > 0)){

                if(j > 0) {
                    compared = (Item<E>) toSort.get(j - 1);
                }

                toSort.set(j + 1, toSort.get(j));
                j = j - 1;

            }

            toSort.set(j + 1, key);
        }
    }
}
