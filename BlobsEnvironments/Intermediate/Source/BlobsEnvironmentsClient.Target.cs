using UnrealBuildTool;

public class BlobsEnvironmentsClientTarget : TargetRules
{
	public BlobsEnvironmentsClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("BlobsEnvironments");
	}
}