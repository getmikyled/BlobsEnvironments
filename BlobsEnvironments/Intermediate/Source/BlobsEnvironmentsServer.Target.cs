using UnrealBuildTool;

public class BlobsEnvironmentsServerTarget : TargetRules
{
	public BlobsEnvironmentsServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("BlobsEnvironments");
	}
}
