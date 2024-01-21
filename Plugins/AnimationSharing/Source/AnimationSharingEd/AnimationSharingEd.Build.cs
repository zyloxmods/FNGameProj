// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AnimationSharingEd : ModuleRules
{
	public AnimationSharingEd(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
        PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreUObject",
				"Engine",
                "UnrealEd",
                "AssetTools",
                "AnimationSharing",
                "Slate",
                "SlateCore",
                "PropertyEditor",
                "EditorStyle"
            }
		);

        PrivateIncludePaths.AddRange(
            new string[] {
                "AnimationSharingEd/Private"
         });       
    }

}
