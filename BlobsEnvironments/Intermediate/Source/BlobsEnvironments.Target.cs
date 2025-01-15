using UnrealBuildTool;

public class BlobsEnvironmentsTarget : TargetRules
{
	public BlobsEnvironmentsTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("BlobsEnvironments");
	}
}
