package states;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;

class PlayState extends FlxState
{
	var text:FlxText;

	override public function create()
	{
		super.create();
		text = new FlxText(0, 0, FlxG.width, "Hello Haxe Flixel", 64);
		text.setFormat(null, 64, FlxColor.WHITE, FlxTextAlign.CENTER);
		add(text);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
