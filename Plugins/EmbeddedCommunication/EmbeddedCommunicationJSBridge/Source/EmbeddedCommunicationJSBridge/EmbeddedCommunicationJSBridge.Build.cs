using UnrealBuildTool;

public class EmbeddedCommunicationJSBridge : ModuleRules {
    public EmbeddedCommunicationJSBridge(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "WebBrowser",
        });
    }
}
