using UnrealBuildTool;

public class SocialUMG : ModuleRules {
    public SocialUMG(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioMixer",
            "CommonInput",
            "CommonUI",
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
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
