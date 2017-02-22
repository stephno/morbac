# Morbac
Morbac is a simple 2 player command line tic-tac-toe game, made for a school assignment. It had to be written with no personal functions.

## Requirements
* [ncurses](https://www.gnu.org/software/ncurses/)

### Debian-based distros
Run `sudo apt-get install libncurses5` (or `libncurses5:i386` for 64-bit OS).  
Then, within the project directory:
```
gcc -g -Wall morbac.c -o morbac -lncurses
./morbac
```

## How to play?
Simply use numeric keys from 1 to 9 to place your mark, 1 being in the top left-hand corner of the grid. Then case numbering follows the occidental writing orientation.

## Licence
GPL v.3
