<p align='center'><img src=https://sun9-67.userapi.com/impg/sUKR1graDiyoOCPe3cx2gHdWHmkTmrEXeZDyMg/rrH4Cb07U0I.jpg?size=827x513&quality=96&sign=49ef7ef1635b3a0538b5e80f350a3223&type=album></p>

---

<p align='center'>
   <a href="#infgh"><b>infgh</b></a> <b>|</b>
   <a href="#lru-cache">LRU cache</a> <b>|</b>
   <a href="#download">Download</a> <b>|</b>
   <a href="#get-involved">Get Involved</a> <b>|</b>
   <a href="#build">Build</a> <b>|</b>
   <a href="#run">Run</a> <b>|</b>
   <a href="#sources">Sources</a> <b>|</b>
   <a href="#license">License</a>
</p>

---

# infgh

Github repo for uni inf classes. Current project - LRU cache.

# LRU cache

The Least Recently Used (LRU) cache is a cache eviction algorithm that organizes elements in order of use. In LRU, as the name suggests, the element that hasn’t been used for the longest time will be evicted from the cache. The project uses C++. Authors of the project are Epifanov Vladislav, Evdokimov Leonid and Tihomirov Kirill.

# Download

Pre-build binaries of this project are not available. To use LRU cache build it from source or create yourself.

# Get involved

In order to join our team, contact [me](https://github.com/MrGreenForest228). I'll add you to contributors of our <i>private</i> repo.

# Build

Dependencies:

- git
- cmake
- gcc

Here are some deps install instructions for different distros:

**Arch-based distros**

    # pacman -S --needed git cmake gcc base-devel

**Debian-based distros**

    # apt install git cmake g++ build-essential

**Fedora (Eblan Linux)**

    # dnf install git cmake gcc-c++ @development-tools

**Compiling:**

Get a copy of LRU cache's source code:

    $ git clone https://github.com/MrGreenForest228/infgh
    $ cd infgh

Create a directory to host the build process:

    $ mkdir build
    $ cd build

Run cmake to configure the build:

    $ cmake ..

You can now start compiling, you can configure the amount of cpu cores used, the recommended amount is the total amount of threads available to the system minus one:

    $ cmake --build . --parallel7

Install the project:

    $ make install

# Run

**Tests**

**Examples**

*Work in progress*

# Sources

[Source for our LRU cache](https://github.com/tilir/cpp-graduate/tree/master)

[Source for our markdown file](https://github.com/Cockatrice/Cockatrice)


# License

Our project is open source and uses [GPL-3.0 license](https://github.com/MrGreenForest228/infgh/blob/main/LICENSE).