using UnrealBuildTool;

public class FortniteEditorTarget : TargetRules {
	public FortniteEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
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
			"FortniteEditor",
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
