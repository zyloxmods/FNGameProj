using UnrealBuildTool;

public class SmartObjectsModule : ModuleRules {
    public SmartObjectsModule(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Chaos",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayBehaviorsModule",
            "GameplayTags",
            "GameplayTasks",
            "MovieScene",
            "NavigationSystem",
            "PhysicsCore",
        });
    }
}
