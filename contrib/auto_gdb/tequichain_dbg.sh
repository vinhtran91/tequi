#!/bin/bash
# use testnet settings,  if you need mainnet,  use ~/.tequichaincore/tequichaind.pid file instead
tequichain_pid=$(<~/.tequichaincore/testnet3/tequichaind.pid)
sudo gdb -batch -ex "source debug.gdb" tequichaind ${tequichain_pid}
