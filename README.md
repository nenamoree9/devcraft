# devcraft

How to download and start playing Devcraft:

1. Choose what version to download
2. Download the release by clicking blue text in bold
3. Extract Devcraft version file in any place
4. Open Devcraft version folder
5. Click the Devcraft executable
6. Enjoy!

How to mod/reskin Devcraft:

Disclaimer: All re-skins or mods you make have to be OPEN SOURCE. Do not make your re-skins/mods closed source.

----Minecraft Week (0.1)----

There are 2 folders in the root of the Devcraft version folder;
- Res
- Shaders

The "Res" folder is where all the assets are stored in. 
Shaders is where the shaders are stored in.

There are 3 folders inside the Res folder;
- Blocks
- Fonts
- Textures

The "Blocks" folder is where block metadata is stored in. The blocks' metadata file format is a ".block" file.
The "Fonts" folder is where all the fonts are stored in. Usually, the fonts are .ttf files. (Note: When editing or replacing fonts, they SHOULD always have the name "rs.ttf".
The "Textures" folder is where all the game's textures are stored in.

----HopsonCraft (0.2 - Alpha 1.2)----

In HopsonCraft, the Res and Shaders folders that were in the root of the version folder were now merged to become the Data folder.
From 0.2 to 0.3, there are 5 folders;
- Blocks
- Fonts
- Music
- Shaders
- Textures

An additional folder was added in 0.4 called "WorldGen".
So there are now 6 folders;
- Blocks
- Fonts
- Music
- Shaders
- Textures
- WorldGen

The Blocks folder is where block metadata is stored in. From 0.2 to 0.3, The blocks' metadata file format was a .json file. In 0.4 and later, it was reverted to a .block file just like in 0.1. 

The Fonts folder is where fonts are stored in. Just like in 0.1, they SHOULD ALWAYS have the name "rs.ttf". The Music folder is where all the music files are stored in. 

The Shaders folder is where all the shaders are stored in. 

The Textures folder is where all of the games textures are stored in, everything from the block atlases, to the GUI. In Alpha 1.0, there are more texture atlases than what there was before. 

The WorldGen folder is where terrain generation stuff is stored in.

----Crumble (>Alpha 1.2)----

The Data folder that was in HopsonCraft was renamed to assets.
Inside the assets folder are 5 folders;
- custom
- fonts
- generated
- images
- shaders

The "custom" folder is where miscellaneous assets are stored in. The things that are stored in this folder are;
- blockFormats.yaml
- craftingRecipes.yaml
- mobFormats.yaml (unused)
- terrainNoise.yaml

By the way, .yaml files can be editied using a text editor.
"blockFormats.yaml" is where block metadata is stored in. Usually, blocks have an ID. "craftingRecipes.yaml" is where crafting recipe metadata is stored in. "terrainNoise.yaml" is where the terrain noise is stored in.

The "fonts" folder is where fonts are stored in. By default, they should have the name "Minecraft.ttf". This can be changed in the code.

The "gene






