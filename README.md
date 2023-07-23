# Spork

_"Half spoon, half Zork"_

Spork is a small interpreter for a text adventure language. It's basically a slightly updated design of a language I first created when I was 19. I've had a number of attempts at it over the years first in C with Lex & Yacc, next in Go with Goyacc, this time I'm using Tree-sitter and javascript as I'd quite like a web version for people to try.

The language is more programmery than the new wave of prose-based languages and is heavily object-oriented (well, object, location, item-oriented), though I'd like to pretend it's entity-oriented.

The working subset of the language currently looks like this, though the final language is designed to be far richer…

	game scarbarrow-incident [

		title {The Scarbarrow Incident}
		by {Sam Phillips}

		version 0.1
		created {today}

		{
			# Welcome
		}
		{
			It is a lovely day in the quaint village of Scarbarrow.
			The sun is shining and the birds are singing
		}

		it is sunny, warm, not raining
		basement is dark

		start in shed

		object dogs (dogs) [
			they are not barking
			describe
				dogs as (dogs|hounds),
				barking as (barking|howling|whining)
			{Somewhere in the distance (dogs) are (barking)}
		]
		object gardener(gardener) [
			he is not angry
		]
		location shed [

			describe shed as (garden shed|wooden shack)
			{
				a (messy|ramshackle) (shed)
			}

			add object crowbar (crowbar)[
				{a (hefty|sturdy) (iron|metal) crowbar}
			]

			object broken-glass (glass)[
				{a pile of broken glass and the remains of a model boat}
			]
			add object ship-bottle (bottle)[

				it is not broken

				{an (old|ancient) glass bottle covered with (dust|grime)}


				on((drop|break|smash) it)[
					it is broken
					remove ship-bottle
					add broken-glass
					{It smashes into a thousand pieces to reveal
						a tangled mess of wood, thread and paper}
				]
				on((wipe|clean|rub|polish) it (with sleeve))[
					it is clean
					{You remove the dust to revel the contents of
						the bottle—an intricate model ship with sails and rigging}
				]
				on ((open|uncork) it)[
					{You'd need (a corkscrew|an opener) for that}
					// (25% chance of) [ // (1/3 of, 0.5 of)
					// 	drop it!
					// ]
				]
				// on (examine it)[
				// 	describe it
				// 	wipe it!
				// ]
			]

			exits
				south to garden
		]

		location garden [
			{
				a (slightly|somewhat|rather) overgrown kitchen garden
			}

			add object flowers (flowers) [
				they are wilted
				{[
					if (they are wilted)[
						{slightly wilted roses}
					] else [
						{perky red roses}
					]
				]}
				on((smell|sniff) them)[
					if(they are not wilted)[
						{they smell of flowers}
					] else [
						{they smell dried-out}
					]
				]
				on((get|pick) them)[
					{ouch! They are too prickly to pick}
				]
				on(water (them|roses))[
					{they seem to immediately spring back to life}
					they are not wilted
				]
			]

			object shards (shards)[
				it is broken
				{a pile of colourful clay shards. They may once have been a garden gnome}
				on((talk|chat) to it)[
					{are you really going to talk to a pile of broken pottery?}
				]
			]

			add object garden-gnome (gnome) [
				{a brightly painted garden gnome carrying a fishing rod}

				on((talk|chat) to it)[
					{he stares back at you without moving}
				]
				on((break|smash|kick|kill) it)[
					it is broken
					gardener is angry
					remove garden-gnome
					add shards
					{ the poor gnome shatters into pieces.
						That was a bit violent.
						Are you feeling better now? }
				]
			]

			add object watering-can (watering-can) [
				{a rusty, green watering can}
			]

			exits
				south to kitchen,
				north to shed,
				west to pond,
				east to tree
		]

		:
