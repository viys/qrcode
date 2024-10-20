QR Code generator library - C
=============================

https://z1eac6eifxs.feishu.cn/wiki/ZQZswgyoYijK58kriUgcMyHen6e?from=from_copylink


Introduction
------------

This project aims to be the best, clearest QR Code generator library. The primary goals are flexible options and absolute correctness. Secondary goals are compact implementation size and good documentation comments.

Home page with live JavaScript demo, extensive descriptions, and competitor comparisons: https://www.nayuki.io/page/qr-code-generator-library


Features
--------

Core features:

* Significantly shorter code but more documentation comments compared to competing libraries
* Supports encoding all 40 versions (sizes) and all 4 error correction levels, as per the QR Code Model 2 standard
* Output format: Raw modules/pixels of the QR symbol
* Detects finder-like penalty patterns more accurately than other implementations
* Encodes numeric and special-alphanumeric text in less space than general text
* Completely avoids heap allocation (`malloc()`), instead relying on suitably sized buffers from the caller and fixed-size stack allocations
* Coded carefully to prevent memory corruption, integer overflow, platform-dependent inconsistencies, and undefined behavior; tested rigorously to confirm safety
* Open-source code under the permissive MIT License

Manual parameters:

* User can specify minimum and maximum version numbers allowed, then library will automatically choose smallest version in the range that fits the data
* User can specify mask pattern manually, otherwise library will automatically evaluate all 8 masks and select the optimal one
* User can specify absolute error correction level, or allow the library to boost it if it doesn't increase the version number
* User can create a list of data segments manually and add ECI segments

More information about QR Code technology and this library's design can be found on the project home page.


Examples
--------

```c
// 初始化二维码串口输出
qrcode_init(printf);
// 打印二维码
qr_doBasic((const char*)buff);
```

```shell
#win
gcc .\qrcodegen.c .\test\main.c -o .\test\qrcode.exe
.\qecide.exe

#unix
mkdir test/build
cd test/build
cmake ..
make
.test
```

More complete set of examples: https://github.com/nayuki/QR-Code-generator/blob/master/c/qrcodegen-demo.c .
