// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class FortniteServerTarget : TargetRules
{
	public FortniteServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;

		ExtraModuleNames.AddRange( new string[] { "FortniteGame", "FortniteEditor", "FortniteUI" } );
    }
}
