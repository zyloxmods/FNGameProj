using UnrealBuildTool;

public class GameSubCatalog : ModuleRules {
    public GameSubCatalog(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "JsonUtilities",
            "McpProfileSys",
        });
    }
}
