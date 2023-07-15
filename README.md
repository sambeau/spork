# Spork

_"Half spoon, half Zork"_

Spork is a small interpreter for a text adventure language. It's basically a slightly updated design of a language I first created when I was 19. I've had a number of attempts at it over the years first in C with Lex & Yacc, next in Go with Goyacc, this time I'm using Tree-sitter and javascript as I'd quite like a web version for people to try.

The language is more programmery than the new wave of prose-based langauges and is heavily object-oriented (well, object, location, item-oriented), though I'd like to pretend it's entity-oriented.

The working subset of the language currently looks like this, though the final language is far richer…

    game scarbarrow-incident [

    title {The Scarbarrow Incident}
    by {Sam Phillips}

    version 0.1
    created {{today}}

    {
    	# Welcome
    }
    {
    	It is a lovely day in the quaint village of Scarbarrow.
    	The sun is shining and the birds are singing
    }

    it is sunny, warm
    it is not raining
    bells are not ringing
    dogs are barking
    basement is not light

    start in shed

    object dogs (dogs) [
    	they are not barking
    	{Somewhere in the distance a dog is barking}
    ]

    object bells (bells) [
    	they are ringing
    	{Somewhere in the distance a bell is ringing}
    ]

    location shed [

    	it is dull, dusty, ramshackle
    	{
    		a ramshackle garden shed
    	}
    	object crowbar (crowbar)[
    		{a hefty iron crowbar}
    	]
    	object ship-in-bottle (bottle)[

    		it is not broken
    		it is not clean

    		{an ancient glass bottle covered in years of dust}

    		on((drop|break|smash) it)[
    			it is broken
    			{It smashes into a thousand pieces to reveal
    				a tangled mess of wood, thread and paper}
    		]
    		on((wipe|clean|rub|polish) it (with sleeve))[
    			it is clean
    			{You remove the dust to revel the contents of
    				the bottle—an intricate model ship with sails and rigging}
    		]
    		on ((open|uncork) it)[
    			{You'd need a corkscrew for that}
    		]
    	]

    	exits
    		south to garden
    ]

    location garden [
    	{
    		a slighty overgrown kitchen garden
    	}

    	object flowers (flowers) [

    		they are wilted

    		{slightly wilted roses}

    		on((smell|sniff) it)[
    			{they smell of flowers}
    		]
    		on((get|pick) it)[
    			{ouch! They are too prickly to pick}
    		]
    	]

    	object garden-gnome (gnome) [

    		it is not broken

    		{a brightly painted garden gnome carrying a fishing rod}

    		on(talk to it)[
    			{he stares back at you without moving}
    		]
    		on(break|smash|kick)[
    			{the poor gnome shatters into pieces.
    				That was a bit violent. Are you feeling better now?}
    		]
    	]

    	object watering-can (watering-can) [
    		{a rusty, green watering can}
    	]

    	exits
    		south to kitchen,
    		north to shed,
    		west to pond,
    		east to tree
    ]
    :
