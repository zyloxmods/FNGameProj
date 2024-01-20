using UnrealBuildTool;

public class FortniteUI : ModuleRules {
	public FortniteUI(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
		PublicDependencyModuleNames.AddRange(new string[] {
			"AIModule",
			"Account",
			"AnimGraphRuntime",
			"AnimationBudgetAllocator",
			"AnimationCore",
			"AnimationSharing",
			"AudioMixer",
			"BlueprintContext",
			"CinematicCamera",
			"ClientPilot",
			"ClothingSystemRuntime",
			"ClothingSystemRuntimeInterface",
			"CommonInput",
			"CommonUI",
			"Core",
			"CoreUObject",
			"Engine",
			"EpicCMSUIFramework",
			"EpicGameplayStatsRuntime",
			"Foliage",
			"FortniteGame",
			"GameSubCatalog",
			"GameplayAbilities",
			"GameplayTags",
			"GameplayTasks",
			"Gauntlet",
			"HeadMountedDisplay",
			"Hotfix",
			"InputCore",
			"JsonUtilities",
			"LauncherSocialDefaults",
			"LauncherSocialTypes",
			"Lobby",
			"McpProfileSys",
			"MediaAssets",
			"MediaUtils",
			"MeshNetwork",
			"MovieScene",
			"MovieSceneTracks",
			"NavigationSystem",
			"Niagara",
			"NiagaraCore",
			"NiagaraShader",
			"OnlineSubsystem",
			"OnlineSubsystemUtils",
			"Overlay",
			"Paper2D",
			"Party",
			"PhysXVehicles",
			"PropertyPath",
			"Rejoin",
			"ReplicationGraph",
			"SidecarSys",
			"SignificanceManager",
			"Slate",
			"SlateCore",
			"SocialUMG",
			"SubtitlesWidgets",
			"UMG",
			"WebBrowser",
		});
		
		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Slate", 
			"SlateCore", 
			"UMG"
		});
	}
}