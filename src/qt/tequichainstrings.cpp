

#include <QtGlobal>

// Automatically generated by extract_strings_qt.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED* dash_strings[] = {
    QT_TRANSLATE_NOOP("tequichain-core", "Tequichain Core"),
    QT_TRANSLATE_NOOP("tequichain-core", "The %s developers"),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "%s file contains all private keys from this wallet. Do not share it with "
                                         "anyone!"),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "%s uses exact denominated amounts to send funds, you might simply need to "
                                         "mix some more coins."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "-smartnode option is deprecated and ignored, specifying -"
                                         "smartnodeblsprivkey is enough to start this node as a smartnode."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "-maxtxfee is set very high! Fees this large could be paid on a single "
                                         "transaction."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Cannot obtain a lock on data directory %s. %s is probably already running."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Cannot provide specific connections and have addrman find outgoing "
                                         "connections at the same."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Distributed under the MIT software license, see the accompanying file %s or "
                                         "%s"),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Error loading %s: You can't enable HD on an already existing non-HD wallet"),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Error reading %s! All keys read correctly, but transaction data or address "
                                         "book entries might be missing or incorrect."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Error: Listening for incoming connections failed (listen returned error %s)"),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Failed to create backup, file already exists! This could happen if you "
                                         "restarted wallet in less than 60 seconds. You can continue if you are ok "
                                         "with this."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Found unconfirmed denominated outputs, will wait till they confirm to "
                                         "continue."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Incorrect or no devnet genesis block found. Wrong datadir for devnet "
                                         "specified?"),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Invalid -socketevents ('%s') specified. Only these modes are supported: %s"),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
                                         "fee of %s to prevent stuck transactions)"),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Make sure to encrypt your wallet and delete all non-encrypted backups after "
                                         "you have verified that the wallet works!"),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Please check that your computer's date and time are correct! If your clock "
                                         "is wrong, %s will not work properly."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Please contribute if you find %s useful. Visit %s for further information "
                                         "about the software."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Prune configured below the minimum of %d MiB.  Please use a higher number."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Prune: last wallet synchronisation goes beyond pruned data. You need to -"
                                         "reindex (download the whole blockchain again in case of pruned node)"),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Rescans are not possible in pruned mode. You will need to use -reindex which "
                                         "will download the whole blockchain again."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "The block database contains a block which appears to be from the future. "
                                         "This may be due to your computer's date and time being set incorrectly. Only "
                                         "rebuild the block database if you are sure that your computer's date and "
                                         "time are correct"),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "The transaction amount is too small to send after the fee has been deducted"),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "This is a pre-release test build - use at your own risk - do not use for "
                                         "mining or merchant applications"),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "This is the transaction fee you may discard if change is smaller than dust "
                                         "at this level"),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "This is the transaction fee you may pay when fee estimates are not available."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "This product includes software developed by the OpenSSL Project for use in "
                                         "the OpenSSL Toolkit %s and cryptographic software written by Eric Young and "
                                         "UPnP software written by Thomas Bernard."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Total length of network version string (%i) exceeds maximum length (%i). "
                                         "Reduce the number or size of uacomments."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Transaction index can't be disabled with governance validation enabled. "
                                         "Either start with -disablegovernance command line switch or enable "
                                         "transaction index."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Unable to replay blocks. You will need to rebuild the database using -"
                                         "reindex-chainstate."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Unsupported argument -socks found. Setting SOCKS version isn't possible "
                                         "anymore, only SOCKS5 proxies are supported."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Unsupported argument -whitelistalwaysrelay ignored, use -whitelistrelay and/"
                                         "or -whitelistforcerelay."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "WARNING! Failed to replenish keypool, please unlock your wallet to do so."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Wallet is locked, can't replenish keypool! Automatic backups and mixing are "
                                         "disabled, please unlock your wallet to replenish keypool."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Warning: The network does not appear to fully agree! Some miners appear to "
                                         "be experiencing issues."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Warning: Unknown block versions being mined! It's possible unknown rules are "
                                         "in effect"),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Warning: Wallet file corrupt, data salvaged! Original %s saved as %s in %s; "
                                         "if your balance or transactions are incorrect you should restore from a "
                                         "backup."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "Warning: We do not appear to fully agree with our peers! You may need to "
                                         "upgrade, or other nodes may need to upgrade."),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "You need to rebuild the database using -reindex to change -timestampindex"),
    QT_TRANSLATE_NOOP("tequichain-core", ""
                                         "You need to rebuild the database using -reindex to go back to unpruned "
                                         "mode.  This will redownload the entire blockchain"),
    QT_TRANSLATE_NOOP("tequichain-core", "%d of last 100 blocks have unexpected version"),
    QT_TRANSLATE_NOOP("tequichain-core", "%s can't be lower than %s"),
    QT_TRANSLATE_NOOP("tequichain-core", "%s corrupt, salvage failed"),
    QT_TRANSLATE_NOOP("tequichain-core", "%s failed"),
    QT_TRANSLATE_NOOP("tequichain-core", "%s is idle."),
    QT_TRANSLATE_NOOP("tequichain-core", "%s is not a valid backup folder!"),
    QT_TRANSLATE_NOOP("tequichain-core", "%s is set very high!"),
    QT_TRANSLATE_NOOP("tequichain-core", "%s request incomplete: %s"),
    QT_TRANSLATE_NOOP("tequichain-core", "-devnet can only be specified once"),
    QT_TRANSLATE_NOOP("tequichain-core", "-litemode is deprecated."),
    QT_TRANSLATE_NOOP("tequichain-core", "-maxmempool must be at least %d MB"),
    QT_TRANSLATE_NOOP("tequichain-core", "-port must be specified when -devnet and -listen are specified"),
    QT_TRANSLATE_NOOP("tequichain-core", "-rpcport must be specified when -devnet and -server are specified"),
    QT_TRANSLATE_NOOP("tequichain-core", "Already have that input."),
    QT_TRANSLATE_NOOP("tequichain-core", "Automatic backups disabled"),
    QT_TRANSLATE_NOOP("tequichain-core", "Can't find random Smartnode."),
    QT_TRANSLATE_NOOP("tequichain-core", "Can't mix while sync in progress."),
    QT_TRANSLATE_NOOP("tequichain-core", "Can't mix: no compatible inputs found!"),
    QT_TRANSLATE_NOOP("tequichain-core", "Cannot downgrade wallet"),
    QT_TRANSLATE_NOOP("tequichain-core", "Cannot resolve -%s address: '%s'"),
    QT_TRANSLATE_NOOP("tequichain-core", "Cannot write to data directory '%s'; check permissions."),
    QT_TRANSLATE_NOOP("tequichain-core", "Change index out of range"),
    QT_TRANSLATE_NOOP("tequichain-core", "Collateral not valid."),
    QT_TRANSLATE_NOOP("tequichain-core", "Copyright (C)"),
    QT_TRANSLATE_NOOP("tequichain-core", "Corrupted block database detected"),
    QT_TRANSLATE_NOOP("tequichain-core", "Do you want to rebuild the block database now?"),
    QT_TRANSLATE_NOOP("tequichain-core", "Done loading"),
    QT_TRANSLATE_NOOP("tequichain-core", "ERROR! Failed to create automatic backup"),
    QT_TRANSLATE_NOOP("tequichain-core", "Entries are full."),
    QT_TRANSLATE_NOOP("tequichain-core", "Entry exceeds maximum size."),
    QT_TRANSLATE_NOOP("tequichain-core", "Error initializing block database"),
    QT_TRANSLATE_NOOP("tequichain-core", "Error initializing wallet database environment %s!"),
    QT_TRANSLATE_NOOP("tequichain-core", "Error loading %s"),
    QT_TRANSLATE_NOOP("tequichain-core", "Error loading %s: Wallet corrupted"),
    QT_TRANSLATE_NOOP("tequichain-core", "Error loading %s: Wallet requires newer version of %s"),
    QT_TRANSLATE_NOOP("tequichain-core", "Error loading %s: You can't disable HD on an already existing HD wallet"),
    QT_TRANSLATE_NOOP("tequichain-core", "Error loading block database"),
    QT_TRANSLATE_NOOP("tequichain-core", "Error loading wallet %s. Duplicate -wallet filename specified."),
    QT_TRANSLATE_NOOP("tequichain-core", "Error opening block database"),
    QT_TRANSLATE_NOOP("tequichain-core", "Error reading from database, shutting down."),
    QT_TRANSLATE_NOOP("tequichain-core", "Error upgrading chainstate database"),
    QT_TRANSLATE_NOOP("tequichain-core", "Error upgrading evo database"),
    QT_TRANSLATE_NOOP("tequichain-core", "Error"),
    QT_TRANSLATE_NOOP("tequichain-core", "Error: A fatal internal error occurred, see debug.log for details"),
    QT_TRANSLATE_NOOP("tequichain-core", "Error: Disk space is low!"),
    QT_TRANSLATE_NOOP("tequichain-core", "Error: failed to add socket to epollfd (epoll_ctl returned error %s)"),
    QT_TRANSLATE_NOOP("tequichain-core", "Error: failed to add socket to kqueuefd (kevent returned error %s)"),
    QT_TRANSLATE_NOOP("tequichain-core", "Exceeded max tries."),
    QT_TRANSLATE_NOOP("tequichain-core", "Failed to clear fulfilled requests cache at"),
    QT_TRANSLATE_NOOP("tequichain-core", "Failed to clear governance cache at"),
    QT_TRANSLATE_NOOP("tequichain-core", "Failed to clear smartnode cache at"),
    QT_TRANSLATE_NOOP("tequichain-core", "Failed to commit EvoDB"),
    QT_TRANSLATE_NOOP("tequichain-core", "Failed to create backup %s!"),
    QT_TRANSLATE_NOOP("tequichain-core", "Failed to create backup, error: %s"),
    QT_TRANSLATE_NOOP("tequichain-core", "Failed to delete backup, error: %s"),
    QT_TRANSLATE_NOOP("tequichain-core", "Failed to find mixing queue to join"),
    QT_TRANSLATE_NOOP("tequichain-core", "Failed to listen on any port. Use -listen=0 if you want this."),
    QT_TRANSLATE_NOOP("tequichain-core", "Failed to load fulfilled requests cache from"),
    QT_TRANSLATE_NOOP("tequichain-core", "Failed to load governance cache from"),
    QT_TRANSLATE_NOOP("tequichain-core", "Failed to load smartnode cache from"),
    QT_TRANSLATE_NOOP("tequichain-core", "Failed to load sporks cache from"),
    QT_TRANSLATE_NOOP("tequichain-core", "Failed to rescan the wallet during initialization"),
    QT_TRANSLATE_NOOP("tequichain-core", "Failed to start a new mixing queue"),
    QT_TRANSLATE_NOOP("tequichain-core", "Found enough users, signing ( waiting %s )"),
    QT_TRANSLATE_NOOP("tequichain-core", "Found enough users, signing ..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Importing..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Incompatible mode."),
    QT_TRANSLATE_NOOP("tequichain-core", "Incompatible version."),
    QT_TRANSLATE_NOOP("tequichain-core", "Incorrect -rescan mode, falling back to default value"),
    QT_TRANSLATE_NOOP("tequichain-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
    QT_TRANSLATE_NOOP("tequichain-core", "Information"),
    QT_TRANSLATE_NOOP("tequichain-core", "Initialization sanity check failed. %s is shutting down."),
    QT_TRANSLATE_NOOP("tequichain-core", "Input is not valid."),
    QT_TRANSLATE_NOOP("tequichain-core", "Inputs vs outputs size mismatch."),
    QT_TRANSLATE_NOOP("tequichain-core", "Insufficient funds."),
    QT_TRANSLATE_NOOP("tequichain-core", "Invalid -onion address or hostname: '%s'"),
    QT_TRANSLATE_NOOP("tequichain-core", "Invalid -proxy address or hostname: '%s'"),
    QT_TRANSLATE_NOOP("tequichain-core", "Invalid amount for -%s=<amount>: '%s'"),
    QT_TRANSLATE_NOOP("tequichain-core", "Invalid amount for -discardfee=<amount>: '%s'"),
    QT_TRANSLATE_NOOP("tequichain-core", "Invalid amount for -fallbackfee=<amount>: '%s'"),
    QT_TRANSLATE_NOOP("tequichain-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
    QT_TRANSLATE_NOOP("tequichain-core", "Invalid smartnodeblsprivkey. Please see documentation."),
    QT_TRANSLATE_NOOP("tequichain-core", "Invalid minimum number of spork signers specified with -minsporkkeys"),
    QT_TRANSLATE_NOOP("tequichain-core", "Invalid netmask specified in -whitelist: '%s'"),
    QT_TRANSLATE_NOOP("tequichain-core", "Invalid script detected."),
    QT_TRANSLATE_NOOP("tequichain-core", "Invalid spork address specified with -sporkaddr"),
    QT_TRANSLATE_NOOP("tequichain-core", "It has been replaced by -disablegovernance."),
    QT_TRANSLATE_NOOP("tequichain-core", "Its replacement -disablegovernance has been forced instead."),
    QT_TRANSLATE_NOOP("tequichain-core", "Keypool ran out, please call keypoolrefill first"),
    QT_TRANSLATE_NOOP("tequichain-core", "Last queue was created too recently."),
    QT_TRANSLATE_NOOP("tequichain-core", "Last successful action was too recent."),
    QT_TRANSLATE_NOOP("tequichain-core", "Loading P2P addresses..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Loading banlist..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Loading block index..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Loading fulfilled requests cache..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Loading governance cache..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Loading smartnode cache..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Loading sporks cache..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Loading wallet... (%3.2f %%)"),
    QT_TRANSLATE_NOOP("tequichain-core", "Loading wallet..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Lock is already in place."),
    QT_TRANSLATE_NOOP("tequichain-core", "Smartnode queue is full."),
    QT_TRANSLATE_NOOP("tequichain-core", "Smartnode:"),
    QT_TRANSLATE_NOOP("tequichain-core", "Missing input transaction information."),
    QT_TRANSLATE_NOOP("tequichain-core", "Mixing in progress..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Need to specify a port with -whitebind: '%s'"),
    QT_TRANSLATE_NOOP("tequichain-core", "No Smartnodes detected."),
    QT_TRANSLATE_NOOP("tequichain-core", "No compatible Smartnode found."),
    QT_TRANSLATE_NOOP("tequichain-core", "No errors detected."),
    QT_TRANSLATE_NOOP("tequichain-core", "No matching denominations found for mixing."),
    QT_TRANSLATE_NOOP("tequichain-core", "Not compatible with existing transactions."),
    QT_TRANSLATE_NOOP("tequichain-core", "Not enough file descriptors available."),
    QT_TRANSLATE_NOOP("tequichain-core", "Not enough funds to mix."),
    QT_TRANSLATE_NOOP("tequichain-core", "Not in the Smartnode list."),
    QT_TRANSLATE_NOOP("tequichain-core", "Prune cannot be configured with a negative value."),
    QT_TRANSLATE_NOOP("tequichain-core", "Prune mode is incompatible with -disablegovernance=false."),
    QT_TRANSLATE_NOOP("tequichain-core", "Prune mode is incompatible with -txindex."),
    QT_TRANSLATE_NOOP("tequichain-core", "Pruning blockstore..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Reducing -maxconnections from %d to %d, because of system limitations."),
    QT_TRANSLATE_NOOP("tequichain-core", "Replaying blocks..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Rescanning..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Session not complete!"),
    QT_TRANSLATE_NOOP("tequichain-core", "Session timed out."),
    QT_TRANSLATE_NOOP("tequichain-core", "Signing transaction failed"),
    QT_TRANSLATE_NOOP("tequichain-core", "Specified -walletdir \"%s\" does not exist"),
    QT_TRANSLATE_NOOP("tequichain-core", "Specified -walletdir \"%s\" is a relative path"),
    QT_TRANSLATE_NOOP("tequichain-core", "Specified -walletdir \"%s\" is not a directory"),
    QT_TRANSLATE_NOOP("tequichain-core", "Specified blocks directory \"%s\" does not exist."),
    QT_TRANSLATE_NOOP("tequichain-core", "Starting network threads..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Submitted to smartnode, waiting in queue %s"),
    QT_TRANSLATE_NOOP("tequichain-core", "Synchronization finished"),
    QT_TRANSLATE_NOOP("tequichain-core", "Synchronizing blockchain..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Synchronizing governance objects..."),
    QT_TRANSLATE_NOOP("tequichain-core", "The source code is available from %s."),
    QT_TRANSLATE_NOOP("tequichain-core", "The transaction amount is too small to pay the fee"),
    QT_TRANSLATE_NOOP("tequichain-core", "The wallet will avoid paying less than the minimum relay fee."),
    QT_TRANSLATE_NOOP("tequichain-core", "This is expected because you are running a pruned node."),
    QT_TRANSLATE_NOOP("tequichain-core", "This is experimental software."),
    QT_TRANSLATE_NOOP("tequichain-core", "This is the minimum transaction fee you pay on every transaction."),
    QT_TRANSLATE_NOOP("tequichain-core", "This is the transaction fee you will pay if you send a transaction."),
    QT_TRANSLATE_NOOP("tequichain-core", "Transaction amount too small"),
    QT_TRANSLATE_NOOP("tequichain-core", "Transaction amounts must not be negative"),
    QT_TRANSLATE_NOOP("tequichain-core", "Transaction created successfully."),
    QT_TRANSLATE_NOOP("tequichain-core", "Transaction fees are too high."),
    QT_TRANSLATE_NOOP("tequichain-core", "Transaction has too long of a mempool chain"),
    QT_TRANSLATE_NOOP("tequichain-core", "Transaction must have at least one recipient"),
    QT_TRANSLATE_NOOP("tequichain-core", "Transaction not valid."),
    QT_TRANSLATE_NOOP("tequichain-core", "Transaction too large for fee policy"),
    QT_TRANSLATE_NOOP("tequichain-core", "Transaction too large"),
    QT_TRANSLATE_NOOP("tequichain-core", "Trying to connect..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Unable to bind to %s on this computer (bind returned error %s)"),
    QT_TRANSLATE_NOOP("tequichain-core", "Unable to bind to %s on this computer. %s is probably already running."),
    QT_TRANSLATE_NOOP("tequichain-core", "Unable to generate initial keys"),
    QT_TRANSLATE_NOOP("tequichain-core", "Unable to locate enough mixed funds for this transaction."),
    QT_TRANSLATE_NOOP("tequichain-core", "Unable to locate enough non-denominated funds for this transaction."),
    QT_TRANSLATE_NOOP("tequichain-core", "Unable to sign spork message, wrong key?"),
    QT_TRANSLATE_NOOP("tequichain-core", "Unable to start HTTP server. See debug log for details."),
    QT_TRANSLATE_NOOP("tequichain-core", "Unknown network specified in -onlynet: '%s'"),
    QT_TRANSLATE_NOOP("tequichain-core", "Unknown response."),
    QT_TRANSLATE_NOOP("tequichain-core", "Unknown state: id = %u"),
    QT_TRANSLATE_NOOP("tequichain-core", "Unsupported argument -benchmark ignored, use -debug=bench."),
    QT_TRANSLATE_NOOP("tequichain-core", "Unsupported argument -debugnet ignored, use -debug=net."),
    QT_TRANSLATE_NOOP("tequichain-core", "Unsupported argument -tor found, use -onion."),
    QT_TRANSLATE_NOOP("tequichain-core", "Unsupported logging category %s=%s."),
    QT_TRANSLATE_NOOP("tequichain-core", "Upgrading UTXO database"),
    QT_TRANSLATE_NOOP("tequichain-core", "User Agent comment (%s) contains unsafe characters."),
    QT_TRANSLATE_NOOP("tequichain-core", "Verifying blocks..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Verifying wallet(s)..."),
    QT_TRANSLATE_NOOP("tequichain-core", "Very low number of keys left: %d"),
    QT_TRANSLATE_NOOP("tequichain-core", "Wallet %s resides outside wallet directory %s"),
    QT_TRANSLATE_NOOP("tequichain-core", "Wallet is locked."),
    QT_TRANSLATE_NOOP("tequichain-core", "Wallet needed to be rewritten: restart %s to complete"),
    QT_TRANSLATE_NOOP("tequichain-core", "Warning"),
    QT_TRANSLATE_NOOP("tequichain-core", "Warning: %s is deprecated, please use %s instead"),
    QT_TRANSLATE_NOOP("tequichain-core", "Warning: can't use %s and %s together, will prefer %s"),
    QT_TRANSLATE_NOOP("tequichain-core", "Warning: incorrect parameter %s, path must exist! Using default path."),
    QT_TRANSLATE_NOOP("tequichain-core", "Warning: unknown new rules activated (versionbit %i)"),
    QT_TRANSLATE_NOOP("tequichain-core", "Wasn't able to create wallet backup folder %s!"),
    QT_TRANSLATE_NOOP("tequichain-core", "Will retry..."),
    QT_TRANSLATE_NOOP("tequichain-core", "You are starting with governance validation disabled."),
    QT_TRANSLATE_NOOP("tequichain-core", "You can not disable governance validation on a smartnode."),
    QT_TRANSLATE_NOOP("tequichain-core", "You can not start a smartnode with wallet enabled."),
    QT_TRANSLATE_NOOP("tequichain-core", "You need to rebuild the database using -reindex to change -addressindex"),
    QT_TRANSLATE_NOOP("tequichain-core", "You need to rebuild the database using -reindex to change -spentindex"),
    QT_TRANSLATE_NOOP("tequichain-core", "You need to rebuild the database using -reindex to change -txindex"),
    QT_TRANSLATE_NOOP("tequichain-core", "Your entries added successfully."),
    QT_TRANSLATE_NOOP("tequichain-core", "Zapping all transactions from wallet..."),
    QT_TRANSLATE_NOOP("tequichain-core", "no mixing available."),
    QT_TRANSLATE_NOOP("tequichain-core", "see debug.log for details."),
};
