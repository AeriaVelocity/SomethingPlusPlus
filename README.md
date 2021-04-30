# Something++
Something++ is a satirical command line shell for macOS, GNU/Linux, BSD and whatever other OSes I missed out. Something++ includes amazing features such as a password system, and the ability to make the user say "What am I doing with my life?".

##### Usability? What usability? We're onto SOMETHING now, and we're going to INCREMENT!

## Quick start

If you understand how other shells work, you should be far from home with this shell! Commands like `cd` and `ls` don't do as expected!

## Getting Something++

Just `git clone` or download and extract the repo and compile it using the built in shell script `build.sh`.

 Then `cp` it to`/usr/local/bin` or whatever.

You need `g++` to build it, but that's about it.

### Windows

On Windows, you should either install MinGW or compile Something++ in WSL. (WSL is preferred since it can actually be set as a shell)

If compiling with MinGW, run `build.bat` rather than `build.sh`.

## Running Something++

If you've installed it, type `something`. If not, and you're still in the build directory, type `./something`.

### Dependencies

Nope. None. No deps. Just `g++` with a standard `gcc` installation.

### Switching to Something++

If you REALLY want to use this shell that doesn't even work as a shell as your default shell:

```
chsh -s /path/to/something
```

If you followed exact instructions earlier, then `/path/to/something` is `/usr/local/bin/something`.

Then log out and log in again.

I take no responsibility for anything that goes wrong when using Something++.

