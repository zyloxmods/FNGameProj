// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class FortniteGameTarget : TargetRules
{
	public FortniteGameTarget (TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;
        ExtraModuleNames.AddRange( new string[] { "FortniteGame", "FortniteVersion" } );

        if (bBuildEditor)
        {
            ExtraModuleNames.AddRange(
                new string[]
                {
                    "FortniteEditor"
                });
        }
    }
}
