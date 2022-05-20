# Navtyl
A fork of Bastardkb Skeletyl by Wimads, adding an adafruit 5-way navigation switch on each side of the keyboard.

* Switches are wired to the Skeletyl PCB available from https://bastardkb.com/
* You need 10x extra 1N4148 diodes in addition to the normal required components for the Skeletyl
* You need 2x adafruit 5-way navigation switches
* Wiring instructions can be found below
* Navtyl firmware files have been modified from Bastardkb Skeletyl and Scylla firmware to accomodate the 5-way switches.
* Default keymap is only there as a template for your own development, not functional for actual daily use.

* Physical placement of switches on the case needs further development, my own modification was not adequate. So you will need to modify the Skelety case design yourself. 3D model can be obtained from https://github.com/Bastardkb/ - tip: placement of the switch should be in normal upright position to be operable.

# Wiring instructions
* For the full Skeletyl build guide, visit: https://docs.bastardkb.com/hc/en-us/sections/4415744661394-Scylla-TBK-Mini-Skeletyl
* Before soldering the ribbon cable, first consult the instructions below! Since the nav-switches will be wired to the same connections on the PCB.

The skeletyl PCB has 2 unused connections on the ribbon cables marked X on the PCB. These connections are used on the Skylla for the extra row and column that the Skeletyl doesn't have. Navtyl utilizes the extra row connection to wire the common pin of the 5 way switches. So effectively, the 5 way switches are wired like an extra number row on top of the Skeletyl. For this you want to use the upper of the two connections marked X on the PCB (the bottom X is the extra column of the Skylla, which we won't use).

![Row 0 for nav-switch](https://user-images.githubusercontent.com/50098220/169521660-891987db-34df-4b19-94d7-7b0e669643b3.jpg)

So common pin of the switch goes to upper X, the other five pins will be wired to the connections for the columns, marked C2-C5. There is 2 connections for C2, C4 and C5. It doesn't matter which you use.

While soldering the ribbon cable, add a wire for the common pin to the upper X, and add one diode for column C2-C5 - the black ring on the diode should be on the PCB side. Once the ribbon is soldered, it is very difficult to add the diode afterwards, so it is best to solder the diodes and ribbon cable in one go (insert both ribbon and diode in the hole and then solder). Cut the wires of the diodes as short as possible, so risk of short circuit is limited.  Make sure the ribbon and diodes are on the same side of the PCB as the smd diodes.

![Diodes](https://user-images.githubusercontent.com/50098220/169526072-e6ff0874-a087-404f-9bef-0391ffe4891d.jpg)

The columns should be wired in the following order to the switch pins:

![Diagram nav switch](https://user-images.githubusercontent.com/50098220/169538545-514d66a2-1c37-4199-801d-7408fbd5d218.jpg)

It is not critical if you wire the columns in a different order, you will just need to remap the order of the keys in the firmware (navtyl.h, k00-k04, k50-k54) accordingly - but do make absolutely sure you wire the common pin correctly.

Once you soldered the diodes and the ribbons, continue the Skeletyl build guide as normal.








