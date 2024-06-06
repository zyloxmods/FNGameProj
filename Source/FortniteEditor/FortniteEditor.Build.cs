// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class FortniteEditor : ModuleRules
{
    public FortniteEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[]
            {
                "FortniteEditor/Public"
            });
        PrivateIncludePaths.AddRange(
            new string[]
            {
                "FortniteEditor/Private"
            });

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "FortniteGame",
            "UnrealEd",
            "AssetTools",
            "GameplayTags",
            "Slate",
            "SlateCore",
            "ApplicationCore"
        });

    }
}
