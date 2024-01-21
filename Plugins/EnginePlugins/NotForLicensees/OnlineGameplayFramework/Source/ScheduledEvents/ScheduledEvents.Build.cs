using UnrealBuildTool;

public class ScheduledEvents : ModuleRules {
    public ScheduledEvents(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "JsonUtilities",
        });
    }
}
