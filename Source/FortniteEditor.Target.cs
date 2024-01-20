using UnrealBuildTool;

public class FortniteEditorTarget : TargetRules {
	public FortniteEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			"FortniteGame",
			"FortniteEditor",
			"FortniteEngineLoadingScreen",
			"FortniteUI"
		});
	}
}