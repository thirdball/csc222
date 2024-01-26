
Basic tic-tac-toe game using ncurses.

## Installation

Ncurses is required to run and build this program. If you are on a *nix sytem that is not locked-down by APS you can install ncurses with a package manager

Mac ([Homebrew installation](https://brew.sh/))
```bash
brew install ncurses
```
Arch Linux (pacman)
```bash
sudo pacman -S ncurses
```
Arch Linux (pacman)
```bash
sudo pacman -S ncurses
```
Debian (apt)
```bash
sudo apt-get install libncurses5-dev libncursesw5-dev
```

If you are on a locked-down school macbook [this guide](https://gist.github.com/cnruby/960344) will be very helpful, but be sure to set the --prefix option to your CPATH. Additionaly, at the end do not run "sudo make install," just run make install. It is not fast but it should work.

## Compilation
When compiling use the -lncurses flag like so:
```bash
g++ cursed.cpp -lncurses
```