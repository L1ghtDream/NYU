bool isleapyear(int inyear) {
    if (inyear % 4 == 0){
        if (inyear % 100 == 0) {
            if (inyear % 400 == 0) {
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}