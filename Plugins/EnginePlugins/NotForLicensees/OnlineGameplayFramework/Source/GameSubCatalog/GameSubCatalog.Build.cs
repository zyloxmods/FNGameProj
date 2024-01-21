using UnrealBuildTool;

public class GameSubCatalog : ModuleRules {
    public GameSubCatalog(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "JsonUtilities",
            "McpProfileSys",
        });
    }
}
