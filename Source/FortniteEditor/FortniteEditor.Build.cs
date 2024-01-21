// Fill out your copyright notice in the Description page of Project Settings.

/* Taken from https://github.com/SizzyFNBR/FortniteEditor */
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

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "FortniteGame" });

        PrivateDependencyModuleNames.AddRange(new string[] { "UnrealEd" });

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
         PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
