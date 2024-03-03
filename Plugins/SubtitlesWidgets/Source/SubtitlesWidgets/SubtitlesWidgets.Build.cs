using UnrealBuildTool;

public class SubtitlesWidgets : ModuleRules {
    public SubtitlesWidgets(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioMixer",
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "Overlay",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
