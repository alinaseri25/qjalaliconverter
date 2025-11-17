
# qjalaliconverter — Jalali/Gregorian Date Conversion (C++)

A clean, educational C++ implementation of Jalali ↔ Gregorian date conversion.

## Overview
- Goal: Minimal, fast, dependency-light date converter.
- Status: Stable logic functions.

## Features
- Pure C++ functions for conversions.
- No heavy dependencies on Qt calendar; can integrate with QDate if needed.
- Header-only option for reuse.

## API (Example)
```cpp
// English comment + Persian translation
// convert Gregorian to Jalali
// تبدیل میلادی به جلالی
JalaliDate g2j(int gy, int gm, int gd);

// convert Jalali to Gregorian
// تبدیل جلالی به میلادی
GregorianDate j2g(int jy, int jm, int jd);
```

## Unit Tests (Recommended)
- Use QTest to validate known edge cases:
  - Leap years (e.g., 1375, 1399)
  - Start/end of months
  - 400-year cycle coverage

## Performance
- O(1) arithmetic based conversion; negligible runtime.

## Build
- Qt project: add `qjalaliconverter.h/.cpp` to your sources.
- Or include as header-only: `#include "qjalaliconverter.h"` with inline functions.

## Roadmap
- Add fuzz tests with random dates.
- Provide QML bindings for UI demos.
- Publish a small CLI: `qjalali --gy 2025 --gm 11 --gd 17`.

## License
MIT preferred for maximum reuse.
