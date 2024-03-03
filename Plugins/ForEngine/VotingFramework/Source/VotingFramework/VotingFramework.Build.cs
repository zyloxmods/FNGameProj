using UnrealBuildTool;

public class VotingFramework : ModuleRules {
    public VotingFramework(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioMixer",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "MeshNetwork",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "ReplicationGraph",
        });
    }
}
