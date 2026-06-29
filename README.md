# Grand Theft Auto: Hyrule Town

A chaos sandbox built on Ocarina of Time. Forget the storybook kingdom. This is Hyrule
with the gloss scraped off: mud and trash in the gutters, dope deals in the alleys
behind the shops, guards on the take, and a market square one bad day from a riot. The
land of legend turned into a hood, and you came up out of it.

You came up out of Kokiri, the block that raised you, the only crew that ever had your
back. You outgrew it and left for the big city with a .38 and a bad attitude. The plan
is to run these streets, stack rupees, put together a crew, and take the whole kingdom
block by block until Hyrule answers to you. The gun is just how you introduce yourself.

This is a living plan, not a finished design. Anything below is fair game to change,
expand, or throw out.

## The come up

This is the spine of it. Nobody respects the new kid holding a pistol. You earn the
streets:

- Build a rep. Pull jobs, win fights, leave a body count, and watch how the town's
  attitude toward you shifts as your name gets heavy.
- Get a crew. Recruit, arm, and roll deep, so you are not always the only one with a
  gun in the room.
- Run rackets. Shake down shops, muscle in on whoever is already eating, and turn
  corners into your corners.
- Climb the ladder. Go from a nobody with a .38 to the name that runs Hyrule's
  underworld, with the kingdom's so-called bosses standing in your way.

## The arsenal

A real gun rack, building from a sidearm up to hardware that clears a block. The .38 is
where it starts, not where it ends:

- Pistols for the casual threat, then full-auto. An SMG that empties into a crowd and
  turns a market square into a stampede.
- Heavy iron. A shotgun that drops anything point blank, a rifle for reaching across
  the field, something explosive for when subtlety is off the table.
- Fire rate, spread, recoil, and stopping power that actually differ weapon to weapon,
  so each one changes how a fight and a panic play out.
- Grenades and planted charges for area work, plus a grappling line to slide out when
  the block turns against you.

Escalation is the point. Every new piece should raise the ceiling on how much of Hyrule
you can light up at once.

## The streets run themselves

Right now Hyrule ignores you or runs a canned line. The goal is a street that notices,
reacts, and remembers. Everybody out here already has their own hustle and their own
beef:

- Civilians with real instincts. Panic, flee, duck into doorways, cower behind stalls,
  or bolt down an alley depending on how close the heat is.
- A world that turns on itself. The peace was always fake. Push and let NPCs settle old
  scores, jump each other, loot the stalls, and scatter into the back streets.
- Witnesses and snitches. Some coward runs to fetch the guards. What you do, and who is
  watching when you do it, follows you.
- A wrong side of the tracks. Sketchy corners, fences who buy what you lift, and locals
  who would rather not see a thing.

## Heat and turf

Make enough noise and the kingdom comes for you. Push back and take what is theirs:

- A wanted system. Cause enough trouble and the guards roll up. Keep going and it gets
  serious, all the way up to Hyrule's heaviest hitters kicking in your door.
- Turf war. The map is carved up. Gerudo, Gorons, Zora, castle guards, each one a crew
  with its own block, its own beef, and its own piece worth taking.
- Set them on each other. Light the fuse between rival crews and let them thin
  themselves out while you walk off with the spoils.

## A city worth robbing

The deeper ambition is to make the chaos sit on top of real systems, not one-off gags:

- An economy worth abusing. Rupees as cash, shops worth sticking up, a black market for
  what falls off the back of a cart.
- Time and place that change the game. The streets run different at night, crowds thin
  and thicken, and there are moments to strike and moments to lay low.
- Getaways. Snatch a horse that is not yours and ride out while the block screams behind
  you. The law on your tail, dust in the air.

## Mayhem dials

On top of the simulation, a layer of pure nonsense you can crank for fun: exaggerated
physics, absurd damage, crowds that lose it, set pieces that get more unhinged the
harder you lean. The simulation gives it weight. The dials make it a toy.

## The whole idea

Every piece feeds the same loop: do something reckless, watch the block react, and let
it snowball into a bigger mess than you started. Build a name off that chaos until the
kingdom is yours. Emergent mayhem over scripted events. The fun is in the dominoes.

## Building and running

Use the included Makefile:

    make        # first time: configure, generate assets, build
    make build  # rebuild after changes
    make run    # launch

The first launch asks for a compatible Ocarina of Time ROM. See
docs/supportedHashes.json for accepted versions.
