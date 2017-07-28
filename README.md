# GPS Passthrough

A program to debug the Carloop GPS by using the uBlox u-center program.

It passes through all data from USB serial to UART serial (TX/RX pins).

## Instructions

- Install [u-center](https://www.u-blox.com/en/product/u-center-windows) (only available on Windows)
- Flash this code to a Photon or Electron
- Insert Photon or Electron to the Carloop and connect the GPS
- Connect Carloop to Windows computer. You should see a COM port pop up in the Device Manager.
- Start u-center
- Menu Receiver -> Port -> COMx
- You should now see the data flowing from the GPS

