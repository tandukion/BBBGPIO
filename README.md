### GPIO Library for BeagleBone
#### installation
    make
    make install

#### sample
    gcc main.c -lgpiommap
    ./a.out

Look at User LED, how fancy it is!

#### high performance I/O

Currently implemented functions:

```c
int init(); /*!< mmap /dev/mem into memory */
int pinMode(PIN pin, unsigned char direction, unsigned char mux,
unsigned char pull);
int digitalWrite(PIN p, uint8_t mode);
int digitalRead(PIN p);
int analogRead(PIN p);
```

TODO:
  - PWM
