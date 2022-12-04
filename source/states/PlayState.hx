package states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.tweens.FlxTween;
import flixel.ui.FlxButton;
import main.AssetPaths;

class PlayState extends FlxState
{
	var sprite:FlxSprite;

	override public function create()
	{
		super.create();
		sprite = new FlxSprite();
		sprite.loadGraphic(AssetPaths.bf__png);
		sprite.x = 100;
		sprite.y = 0;
		add(sprite);

		FlxTween.tween(sprite, {
			x: FlxG.width - sprite.width,
			y: FlxG.height - sprite.height,
			angle: 360.0
		}, 5, {type: FlxTweenType.PINGPONG});
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
