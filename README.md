# ⚡ Royal Kludge R65 VIA

![Royal Kludge R65 Keyboard](via-r65.png)

I purchased two black wired ansi Royal Kludge R65 keyboards from Amazon and I'm not sure if they are the same hardware as the ones used in the following projects:

- https://github.com/irfanjmdn/r65
- https://github.com/iamdanielv/kb_rk_r65

This is my attempt to figure out why mine has different software/ids/names (hardware?) than the ones in the projects above. In irfanjmdn's [r65](https://github.com/irfanjmdn/r65) project it says VID: 342D PID: E453 which does not seem to match up with what I see when I run lsusb.


## My Board

lsusb output in normal mode:

```
cBus 002 Device 008: ID 342d:e481 Hangsheng RK-R65
```


lsusb output in dfu mode:

```
Bus 002 Device 009: ID 342d:dfa0 Westberry Tech. WB Device in DFU Mode
```

## Comparison

Both devices share the same Vendor ID (342D) but the Product IDs differ, indicating variations in hardware and/or firmware:


| Name                          | Product ID (PID) | Vendor ID (VID) |
|-------------------------------|-------------------|------------------|
| (mine) Hangsheng RK-R65              | E481              | 342D             |
| (mine) Westberry Tech WB Device      | DFA0              | 342D             |
| Project (irfanjmdn's r65)     | E453              | 342D             |


### JSON files

Now let's look at the json files I see floating around. Adding in the wireless kb as well. Diffs of the jsons can be seen in the extras folder (screenshots)

| Filename | Source | Name | Vendor ID (VID) | Product ID (PID) | Processor | Bootloader | Matrix |
|----------|--------|------|-----------------|------------------|-----------|------------|--------|
| [RK R65 Layout for Via.json](<./RK R65 Layout for Via.json>)       | irfanjmdn (wired)     | Royal Kludge R65 | 342D | E453 | WB32FQ95 | wb32-dfu |   "matrix": {"rows": 5, "cols": 15}, |
| [R65 Wired Windows QMK.json](<./R65 Wired Windows QMK.json>)       | rk website (wired)    | RK-R65           | 342D | E481 | - | - |   "matrix": {"rows": 5, "cols": 15} |
| [R65 Wireless Windows QMK.json](<./R65 Wireless Windows QMK.json>) | rk website (wireless) | RK-R65           | 342D | E453 | - | - | "matrix": {"rows": 5, "cols": 16} |
| - | lsusb (normal mode) | Hangsheng RK-R65 | 342D | E481 | - | - | - |
| - | lsusb (dfu mode) | Westberry Tech WB Device (DFU) | 342D | DFA0 | - | - | - |


#### Observations

- irfanjmdn's wired board has the same VID&PID as the **wireless** board in the json file: [R65 Wireless Windows QMK.json](<./R65 Wireless Windows QMK.json>) even though they have different matrix configurations
- irfanjmdn's wired board has a WB32FQ95 processor & DFU mode on my board says: "Westberry Tech WB Device (DFU)" so hopefully they are the same hardware...
- [RK R65 Layout for Via.json](<./RK R65 Layout for Via.json>) and [R65 Wired Windows QMK.json](<./R65 Wired Windows QMK.json>) are nearly identical, except for the name and IDs

I am going to try flashing one of my boards with irfanjmdn's code... (to be continued)

## Discussions

- https://github.com/irfanjmdn/r65/discussions/1
- https://github.com/iamdanielv/kb_rk_r65/issues

## Notes

-  R65 65% Wired Gaming Keyboard (QMK/VIA) - "VIA drivers" zip [link](https://cdn.shopify.com/s/files/1/0510/7866/0274/files/VIA_Software_Download_Guide.zip)