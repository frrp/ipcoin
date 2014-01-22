IPCoin
=====================================

http://www.mechanicalamoeba.com

Copyright (c) 2009-2013 Bitcoin Core Developers
Copyright (c) 2014 Mechanical Amoeba Ltd

What is IPCoin?
----------------

IPCoin is a cryptocurrency intended for use in transactions concerning intangible assets including intellectual property.

It is based almost entirely on Bitcoin Core.

Building IPCoin from source
---------------------------

#Ubuntu

You need (sudo apt-get): libboost-all-dev, libdb++-dev

git clone https://github.com/ipcoin/ipcoin
cd ipcoin
./autogen.sh
./configure --with-incompatible-bdb
make

Running the IPCoin daemon
-------------------------

cd src
./ipcoind (optional: -listen -debug -printtoconsole)

Then from another terminal window you can send RPC commands to it:

./ipcoind getnewaddress
./ipcoind setgenerate true (start mining)
./ipcoind getbalance

Running the OSS GUI client
--------------------------

cd src/qt
./ipcoin-qt

Mining in the OSS GUI client
----------------------------

Go to Help -> Debug menu
Open IPCoin RPC Console
Type "setgenerate true" 

License
-------

Bitcoin Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see http://opensource.org/licenses/MIT.

IPCoin is also released under the terms of the MIT license.


