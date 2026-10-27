# Outfit Recommendation App

A console-based C++ app that generates random outfit suggestions based on season and dress code, with an admin mode for managing the wardrobe.

## Features
- **Two modes:** Admin (wardrobe management) and User (outfit generation)
- **Outfit generator:** choose a season (Summer, Winter, Spring, Fall), then Formal or Casual, then how many outfits you want
- **Seasonal logic:** outfits are built from season-appropriate pieces, e.g. jackets and sweaters for winter, light uppers for fall
- **Optional accessories:** add a random accessory (or a watch for formal outfits) to any outfit
- **Admin tools:** protected by an Admin ID key, with options to add, remove, and view items
- **13 wardrobe categories:** formal/casual jackets, shirts, pants, winter pants, shoes, sweaters, light uppers, and accessories
- **Alphabetical sorting:** items are sorted when viewed or after adding new ones
- **History log:** every generated outfit is saved to `HISTORY_Record.txt`

## Technical Details
- Written in C++ using dynamic arrays (`new`/`delete[]`), pointers, and references
- Uses `<fstream>` for file handling and `<ctime>` with `rand()` for random selection
- Wardrobe data lives in memory and resets on each run; only the history log persists

## Build & Run
- Compile: `g++ main.cpp -o outfit_app`
- Run: `./outfit_app`
- Uses `system("cls")`, so it targets Windows. On Linux/macOS, change it to `system("clear")`.
