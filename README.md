# dwmblocks
This is my build for the [dwmblocks](https://github.com/torrinfail/dwmblocks).
# usage
To use this build as with dwmblocks, first run 'make' and then install it with 'sudo make install'.
After that you can put dwmblocks in your xinitrc or other startup script to have it start with dwm.
# modifying blocks
The statusbar is made from text output from commandline programs.
Blocks are added and removed by editing the blocks.h header file.
NOTE: Signals must have a different number assigned in order for the click to work.
# patches
This build is patched with the following patch which is an updated patch for dwmblocks b6b0be4.
<br>
<<<<<<< HEAD
<a href=https://gist.github.com/IGeraGera/e4a5583b91b3eec2e81fdceb44dea717>dwmblocks-statuscmd-b6b0be4.diff</a>
=======
<a href=https://gist.github.com/IGeraGera/69cd7929c9da81b3d625a6a82a04b883>dwmblocks-statuscmd-b6b0be4.diff</a>
>>>>>>> Updated Readme
