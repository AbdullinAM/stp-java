package org.zhekehz.stpjava;

public class ValidityChecker {

    private final long ref;

    static {
        System.loadLibrary("stpnative");
        System.loadLibrary("stp");
    }

    public long getRef() {
        return ref;
    }

    public ValidityChecker() {
        ref = Native.createValidityChecker();
    }

    void printCounterExample() {
        Native.vc_printCounterExample(ref);
    }

    void destroy() {
        Native.vc_Destroy(ref);
    }

    @Override
    public int hashCode() {
        return Long.hashCode(ref);
    }

    @Override
    public boolean equals(Object o) {
        if (!(o instanceof ValidityChecker)) return false;
        return ref == ((ValidityChecker) o).ref;
    }
}
