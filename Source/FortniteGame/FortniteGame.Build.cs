// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class FortniteGame : ModuleRules
{
    public FortniteGame(ReadOnlyTargetRules Target) : base(Target)
    {
        PrivatePCHHeaderFile = "Public/FortniteGame.h";

        PublicDependencyModuleNames.AddRange(
            new string[] {
                "Core",
                "CoreUObject",
                "Engine",
                "GameplayTags",
                "GameplayAbilities",
                "InputCore",
                "Niagara"
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


    }
}
