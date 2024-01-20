using UnrealBuildTool;

public class FortniteGameTarget : TargetRules {
	public FortniteGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"AnalyticsBlueprintLibrary",
			"EasyAntiCheatCommon",
			"FortniteEngineLoadingScreen",
			"FortniteGame",
			"LauncherSocialDefaults",
			"FortniteUI"
		});
	}
}