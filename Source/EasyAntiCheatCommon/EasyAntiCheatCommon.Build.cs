using UnrealBuildTool;

public class EasyAntiCheatCommon : ModuleRules {
    public EasyAntiCheatCommon(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
