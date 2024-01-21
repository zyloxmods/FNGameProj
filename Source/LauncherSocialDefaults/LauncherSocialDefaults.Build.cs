using UnrealBuildTool;

public class LauncherSocialDefaults : ModuleRules {
	public LauncherSocialDefaults(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"LauncherSocialTypes",
			"SlateCore",
		});
	}
}