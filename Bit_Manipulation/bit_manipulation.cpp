/**
 * Bit Manipulation Utility Functions
 * Collection of common bit operations used in competitive programming and low-level systems
 */

#include<bits/stdc++.h>
using namespace std;

// ==================== BASIC BIT OPERATIONS ====================

/**
 * Sets the i-th bit of a number (0-indexed from LSB)
 * Example: setBit(5, 1) → 5 (101) becomes 7 (111)
 */
void setBit(int &num, int i) {
    num |= (1 << i);
}

/**
 * Clears the i-th bit of a number
 * Example: unsetBit(7, 1) → 7 (111) becomes 5 (101)
 */
void unsetBit(int &num, int i) {
    num &= ~(1 << i);
}

/**
 * Toggles the i-th bit of a number
 * Example: toggleBit(5, 0) → 5 (101) becomes 4 (100)
 */
void toggleBit(int &num, int i) {
    num ^= (1 << i);
}

/**
 * Checks if the i-th bit is set
 * Returns: true if set, false otherwise
 */
bool isSet(int num, int i) {
    return (num >> i) & 1;
}

/**
 * Extracts the i-th bit value
 * Returns: 1 if set, 0 otherwise
 */
int extractBit(int num, int i) {
    return (num >> i) & 1;
}

// ==================== COMPLEMENT OPERATIONS ====================

/**
 * Returns one's complement (flips all bits)
 * Note: For signed integers, this may produce negative values
 */
int flipBits(int num) {
    return ~num;
}

/**
 * Returns two's complement (used for negative number representation)
 * Formula: ~num + 1
 */
int twosComplement(int num) {
    return ~num + 1;
}

// ==================== ADVANCED BIT MANIPULATION ====================

/**
 * Clears the least significant set bit
 * Example: unsetLastSetBit(12) → 12 (1100) becomes 8 (1000)
 */
void unsetLastSetBit(int &num) {
    num &= (num - 1);
}

/**
 * Clears all bits from LSB to i-th bit (inclusive)
 * Example: LSB_to_ith_bit_clear(15, 1) → 15 (1111) becomes 12 (1100)
 */
void clearBitsLSBtoI(int &num, int i) {
    int mask = ~((1 << (i + 1)) - 1);
    num &= mask;
}

/**
 * Clears all bits from MSB to i-th bit (inclusive)
 * Example: MSB_to_ith_bit_clear(15, 1) → 15 (1111) becomes 3 (0011)
 */
void clearBitsMSBtoI(int &num, int i) {
    int mask = (1 << i) - 1;
    num &= mask;
}

// ==================== COUNTING AND CHECKING OPERATIONS ====================

/**
 * Counts number of set bits (Hamming weight)
 * Works for both positive and negative numbers
 */
int countSetBits(int num) {
    int count = 0;
    unsigned int n = num; // Treat as unsigned to avoid infinite loop with negatives
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

/**
 * Checks if a number is a power of two
 * Returns: true if power of two, false otherwise
 */
bool isPowerOfTwo(int num) {
    return num > 0 && (num & (num - 1)) == 0;
}

/**
 * Finds the position of the least significant set bit (0-indexed)
 * Returns: -1 if no bits are set
 */
int findLSBPosition(int num) {
    if (num == 0) return -1;
    return __builtin_ctz(num); // Compiler intrinsic for efficiency
}

// ==================== MATHEMATICAL OPERATIONS ====================

/**
 * Computes XOR of numbers from 1 to n using mathematical pattern
 * Pattern repeats every 4 numbers: n, 1, n+1, 0
 */
int computeXOR1toN(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

/**
 * Computes XOR from L to R inclusive
 * Uses: XOR(L to R) = XOR(1 to R) XOR XOR(1 to L-1)
 */
int computeRangeXOR(int L, int R) {
    return computeXOR1toN(R) ^ computeXOR1toN(L - 1);
}

/**
 * Fast exponentiation using exponentiation by squaring
 * Time Complexity: O(log y)
 */
long long power(long long x, long long y) {
    long long result = 1;
    while (y > 0) {
        if (y & 1) {
            result *= x;
        }
        x *= x;
        y >>= 1;
    }
    return result;
}

// ==================== UTILITY FUNCTIONS ====================

/**
 * Checks if a number is even using bit manipulation
 */
bool isEven(int num) {
    return (num & 1) == 0;
}

/**
 * Swaps two integers without temporary variable using XOR
 * Warning: Don't use with same variable (a = a ^ a = 0)
 */
void swap(int &a, int &b) {
    if (&a != &b) { // Prevent swapping same variable
        a ^= b;
        b ^= a;
        a ^= b;
    }
}

/**
 * Generates all subsets of a set using bitmasking
 * Each bit represents whether an element is included
 */
vector<vector<int>> generatePowerSet(const vector<int> &elements) {
    int n = elements.size();
    vector<vector<int>> powerSet;
    
    for (int mask = 0; mask < (1 << n); mask++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                subset.push_back(elements[i]);
            }
        }
        powerSet.push_back(subset);
    }
    
    return powerSet;
}

/**
 * Demonstrates the functions with examples
 */
void demonstrateOperations() {
    cout << "=== Bit Manipulation Demo ===\n";
    
    int num = 5; // Binary: 101
    cout << "Original number: " << num << " (" << bitset<8>(num) << ")\n";
    
    setBit(num, 1);
    cout << "After setting bit 1: " << num << " (" << bitset<8>(num) << ")\n";
    
    unsetBit(num, 1);
    cout << "After unsetting bit 1: " << num << " (" << bitset<8>(num) << ")\n";
    
    toggleBit(num, 0);
    cout << "After toggling bit 0: " << num << " (" << bitset<8>(num) << ")\n";
    
    cout << "Bit 2 is set: " << isSet(num, 2) << endl;
    cout << "Number of set bits: " << countSetBits(num) << endl;
    cout << "Is power of two: " << isPowerOfTwo(num) << endl;
    cout << "XOR from 1 to 5: " << computeXOR1toN(5) << endl;
}

int main() {
    demonstrateOperations();
    return 0;
}