using UnrealBuildTool;

public class FortniteGameTarget : TargetRules {
	public FortniteGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"AnalyticsBlueprintLibrary",
			"ArsenicCoreRuntime",
			"ArsenicCoreUI",
			"ArsenicRuntime",
			"ArsenicUI",
			"CommonDialogueRuntime",
			"EasyAntiCheatCommon",
			"FortniteConversationRuntime",
			"FortniteConversationUI",
			"FortniteEngineLoadingScreen",
			"FortniteGame",
			"FortniteUI",
			"LauncherSocialDefaults",
			"LocalNotifications",
		});
		RegisterModulesCreatedByRider();
	}

	private void RegisterModulesCreatedByRider()
	{
		ExtraModuleNames.AddRange(new string[] { "FortniteVersion" });
	}
}
