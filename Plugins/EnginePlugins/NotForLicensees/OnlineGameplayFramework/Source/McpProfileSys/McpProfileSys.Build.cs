using UnrealBuildTool;

public class McpProfileSys : ModuleRules {
    public McpProfileSys(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "JsonUtilities",
        });
    }
}
