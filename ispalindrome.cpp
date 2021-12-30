bool is_palindrome(int test);

int reverse(int n);

bool is_palindrome(int test) {
    if (test == 0) {
        return true;
    }
    int c1 = test % 10;
    int rev = reverse(test);
    int c2 = rev % 10;
    if (c1 != c2) {
        return false;
    }
    return is_palindrome(reverse(test / 10) / 10);
}

int reverse(int n) {
    int output = 0;
    while (n != 0) {
        output *= 10;
        output += n % 10;
        n /= 10;
    }
    return output;
}

