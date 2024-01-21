using UnrealBuildTool;

public class FortniteGame : ModuleRules {
	public FortniteGame(ReadOnlyTargetRules Target) : base(Target) {
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
			"Core",
			"CoreUObject",
			"Engine",
			"EpicGameplayStatsRuntime",
			"Foliage",
			"GameSubCatalog",
			"GameplayAbilities",
			"GameplayTags",
			"GameplayTasks",
			"Gauntlet",
			"HeadMountedDisplay",
			"Hotfix",
			"InputCore",
			"JsonUtilities",
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
			"UMG",
			"WebBrowser",
		});
		
		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"GameplayAbilities", 
			"GameplayTags", 
			"GameplayTasks", 
			"AnimationBudgetAllocator", 
			"McpProfileSys", 
			"Slate", 
			"SlateCore", 
			"UMG"
		});
	}
}