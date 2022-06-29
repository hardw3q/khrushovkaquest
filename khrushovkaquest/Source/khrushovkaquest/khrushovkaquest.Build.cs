// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class khrushovkaquest : ModuleRules
{
	public khrushovkaquest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
