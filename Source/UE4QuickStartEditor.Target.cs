// UE4 C++ Quick Start Tutorials - copyright 2015-2016 S�bastien Rombauts - distributed under the MIT License

using UnrealBuildTool;
using System.Collections.Generic;

public class UE4QuickStartEditorTarget : TargetRules
{
	public UE4QuickStartEditorTarget(TargetInfo Target)
	{
		Type = TargetType.Editor;
	}

	//
	// TargetRules interface.
	//

	public override void SetupBinaries(
		TargetInfo Target,
		ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
		ref List<string> OutExtraModuleNames
		)
	{
		OutExtraModuleNames.AddRange( new string[] { "UE4QuickStart" } );
	}
}
