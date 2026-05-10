// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ObstacleAssaultProj : ModuleRules
{
	public ObstacleAssaultProj(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ObstacleAssaultProj",
			"ObstacleAssaultProj/Variant_Platforming",
			"ObstacleAssaultProj/Variant_Platforming/Animation",
			"ObstacleAssaultProj/Variant_Combat",
			"ObstacleAssaultProj/Variant_Combat/AI",
			"ObstacleAssaultProj/Variant_Combat/Animation",
			"ObstacleAssaultProj/Variant_Combat/Gameplay",
			"ObstacleAssaultProj/Variant_Combat/Interfaces",
			"ObstacleAssaultProj/Variant_Combat/UI",
			"ObstacleAssaultProj/Variant_SideScrolling",
			"ObstacleAssaultProj/Variant_SideScrolling/AI",
			"ObstacleAssaultProj/Variant_SideScrolling/Gameplay",
			"ObstacleAssaultProj/Variant_SideScrolling/Interfaces",
			"ObstacleAssaultProj/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
