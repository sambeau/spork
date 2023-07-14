# Spork

_"Half spoon, half Zork"_

Spork is a small interpreter for a text adventure language. It's basically a slightly updated design of a language I first created when I was 19. I've had a number of attempts at it over the years first in C with Lex & Yacc, next in Go with Goyacc, this time I'm using Tree-sitter and javascript as I'd quite like a web version for people to try.

The language is more programmery than the new wave of prose-based langauges and is heavily object-oriented (well, object, location, item-oriented), though I'd like to pretend it's entity-oriented.

The working subset of the language currently looks like this, though the final language is far richer…

	game scarbarrow-incident [
	
	title {The Scarbarrow Incident 2}
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
	
	start in shed
	
	location shed [
	
		it is dull, dusty
		{
			a ramshackle garden shed
		}
		object crowbar (crowbar)[
			{a hefty iron crowbar}
		]
		object ship-in-bottle (bottle)[
			{a clear glass bottle with a model ship inside}
		]
		ship-in-bottle is here
	
		exits
			south to garden
	]
	
	location garden [
		{
			a slighty overgrown kitchen garden
		}
		object flowers (flowers) [
			{scented roses}
		]
		object garden-gnome (garden-gnome) [
			{a brightly painted garden gnome carrying a fishing rod}
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
