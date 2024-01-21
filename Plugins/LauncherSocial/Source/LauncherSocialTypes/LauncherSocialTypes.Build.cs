using UnrealBuildTool;

public class LauncherSocialTypes : ModuleRules {
    public LauncherSocialTypes(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "SlateCore",
        });
    }
}
