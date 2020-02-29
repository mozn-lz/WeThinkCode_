# Issue the following from the terminal to tap the official 'MongoDB Homebrew Tap' -> "https://github.com/mongodb/homebrew-brew" 
brew tap mongodb/brew

# install mongodb-community@4.2
brew install mongodb-community@4.2

# To run MongoDB (i.e. the mongod process) as a macOS service, issue the following:
brew services start mongodb-community@4.2
