# Scientific_Calculator
A terminal-based, menu-driven scientific calculator implemented in C. Replicates Casio-style functions including multi-operand arithmetic, exponentiation, root tracking, logarithmic evaluation ($\log_{10}$ and $\ln$), and automated radian-converted trigonometric operations.
# 🔢 Terminal-Based Scientific Calculator (C)

A robust, menu-driven scientific calculator implemented in pure C. Designed to replicate the operational workflows of standard Casio scientific calculators, this application runs entirely within the terminal interface and leverages high-precision floating-point math to execute advanced calculations.

## ✨ Core Features
* **Full Double Precision:** Utilizes `double` data types for all math inputs and computations to ensure maximum precision up to 4 decimal places.
* **Advanced Mathematical Suite:** Native support for multi-operand arithmetic, exponential power curves ($x^y$), and domain-validated square roots.
* **Logarithmic Functions:** Computes both common base-10 logarithms ($\log_{10}$) and base-$e$ natural logarithms ($\ln$).
* **Radian-Calibrated Trigonometry:** Accepts inputs in standard degrees for intuitive user interaction, automatically converting them to radians internally to drive accurate Sine, Cosine, and Tangent calculations.
* **Edge-Case Validation:** Prevents standard system crashes by intercepting invalid calculations, such as division by zero or evaluating negative numbers in logarithmic and real square root domains.

## 🛠️ Operations Map
| Menu ID | Command | Function Math Signature |
| :---: | :--- | :--- |
| **1 - 4** | Basic Arithmetic | Addition, Subtraction, Multiplication, Division |
| **5** | Exponentiation | $x^y$ (Power curve) |
| **6** | Radical | $\sqrt{x}$ (Square Root) |
| **7 - 9** | Trigonometry | $\sin(\theta)$, $\cos(\theta)$, $\tan(\theta)$ *(Input in degrees)* |
| **10 - 11** | Logarithms | $\log_{10}(x)$, $\ln(x)$ |

## 🚀 Compilation & Execution
Because the program leverages advanced mathematical functions from the `<math.h>` standard library, you must explicitly instruct the GCC compiler to link the math library using the `-lm` flag during compilation.

### Step 1: Compile the source code
```bash
gcc Scientific_Calculator.c -o calculator -lm
