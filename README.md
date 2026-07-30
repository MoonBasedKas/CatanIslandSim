# CatanIslandSim
To answer a question that is already answered.

Catan has a series of "base" maps that are usually recommended for the first time playing in the manual. I wanted to see where the best places to settle on each basemap were by running a simulation of how many resources are gained by 10,000 rolls.

This is fairly easy to answer without simulating: avoid settling near plots of land that have uncommon rolls and have a decent variety of resources. All resources but sheep can be argued to be of high importance but I'd say wood and brick are the most important since early game expansion is super important. However Wheat and stone can be important since cities double the production of a city and a great city could beat a few okay settlements.

Ideally this simulation would continue until I'm able to implement some form of AI to see how it plays a full game see what the best AI would do.

## The Map
Since Catan is a hex tile map each node will have 6 edges. House locations will be stored in a list of pointers and each pointer pointing to a location in a universal list. Hex tiles will be stored in a matrix but for dice rolls it'll be accessed through a hashmap where each entry stores a pointer to its intended location. The map will be read via a file where each element is the tile type with its number.

## The players
this will later change but for now each house will be considered a player which will be a struct that contains their resources and have a list of pointers that's a pointer to their settlement.

## The End
at the end of each game the result will be written into a file for each players total resources.
