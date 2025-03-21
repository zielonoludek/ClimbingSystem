// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ClimbingProject : ModuleRules
{
	public ClimbingProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
