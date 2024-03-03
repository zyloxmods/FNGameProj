using UnrealBuildTool;

public class SocialUMG : ModuleRules {
    public SocialUMG(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioMixer",
            "CommonInput",
            "CommonUI",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "InputCore",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "Party",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
