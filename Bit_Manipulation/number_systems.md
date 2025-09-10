# Number Systems & Bases

The **base** (or **radix**) of a number system is the number of unique digits (including zero) used to represent numbers.

---

## 1. Decimal (Base-10)
- **Digits:** `0, 1, 2, 3, 4, 5, 6, 7, 8, 9`
- **Place Value:** Powers of 10 (… 1000, 100, 10, 1)
- **Example:**  
  `1234 = 1×1000 + 2×100 + 3×10 + 4×1`

---

## 2. Binary (Base-2)
- **Digits:** `0, 1` (Bits)
- **Why Computers Use It:** Processors are built from transistors that are either **ON (1)** or **OFF (0)**. Binary directly represents these two states.
- **Conversion to Decimal:** Multiply each bit by its place value (power of 2).
- **Example:**  
  `11101₂ = 1×16 + 1×8 + 1×4 + 0×2 + 1×1 = 29₁₀`

---

## 3. Octal (Base-8)
- **Digits:** `0, 1, 2, 3, 4, 5, 6, 7`
- **Usefulness:** One octal digit equals **three binary digits (bits)**, making it a compact shorthand for binary.
- **Example:**  
  `345₈ = 3×64 + 4×8 + 5×1 = 229₁₀`

---

## 4. Hexadecimal (Base-16)
- **Digits:** `0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F`  
  (Where `A`=10, `B`=11, `C`=12, `D`=13, `E`=14, `F`=15)
- **Usefulness:** One hex digit equals **four binary digits (a nibble)**. It's the standard for representing memory addresses and color codes (e.g., `#FF5733`).
- **Example:**  
  `1A3₁₆ = 1×256 + 10(A)×16 + 3×1 = 419₁₀`

---

## Quick Conversion Reference

| System       | Base | Digits            | Key Feature                     |
|--------------|------|-------------------|---------------------------------|
| **Decimal**  | 10   | `0-9`             | Human-readable                 |
| **Binary**   | 2    | `0, 1`            | Machine-readable (bits)        |
| **Octal**    | 8    | `0-7`             | 1 digit = 3 bits               |
| **Hex**      | 16   | `0-9, A-F`        | 1 digit = 4 bits               |