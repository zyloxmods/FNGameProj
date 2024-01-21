using UnrealBuildTool;

public class FacialAnimSystem : ModuleRules {
    public FacialAnimSystem(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "LiveLink",
            "LiveLinkInterface"
        });
    }
}
