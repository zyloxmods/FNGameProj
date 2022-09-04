// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FortniteGame : ModuleRules
{
	public FortniteGame(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[] {
                "Core",
                "CoreUObject",
                "Engine",
                "GameplayTags",
                "GameplayAbilities",
                "InputCore",
                "Niagara",
                "FortniteEditor"
    }
);

        PrivateDependencyModuleNames.AddRange(
            new string[] {
                "Slate",
                "SlateCore",
                "InputCore",
                "MoviePlayer",
                "GameplayAbilities",
                "GameplayTags",
                "GameplayTasks",
                "Niagara"
            }
        );

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
