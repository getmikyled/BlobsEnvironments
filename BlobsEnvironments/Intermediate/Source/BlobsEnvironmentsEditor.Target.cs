using UnrealBuildTool;

public class BlobsEnvironmentsEditorTarget : TargetRules
{
	public BlobsEnvironmentsEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("BlobsEnvironments");
	}
}
