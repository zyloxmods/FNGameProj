using UnrealBuildTool;

public class MeshNetwork : ModuleRules {
    public MeshNetwork(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioMixer",
            "Core",
            "CoreUObject",
            "Engine",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "ReplicationGraph",
        });
    }
}
