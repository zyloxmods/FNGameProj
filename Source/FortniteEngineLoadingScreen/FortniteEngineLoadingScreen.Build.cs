using UnrealBuildTool;

public class FortniteEngineLoadingScreen : ModuleRules {
	public FortniteEngineLoadingScreen(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
		});
	}
}