using UnrealBuildTool;

public class CommonInput : ModuleRules {
    public CommonInput(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "UMG",
            "InputCore",
            "Slate",
            "SlateCore",
        });
    }
}
