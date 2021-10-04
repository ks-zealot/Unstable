// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Unstable : ModuleRules
{
	public Unstable(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
