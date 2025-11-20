// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MultiplayerProject : ModuleRules
{
	public MultiplayerProject(ReadOnlyTargetRules Target) : base(Target)
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
			"MultiplayerProject",
			"MultiplayerProject/Variant_Platforming",
			"MultiplayerProject/Variant_Platforming/Animation",
			"MultiplayerProject/Variant_Combat",
			"MultiplayerProject/Variant_Combat/AI",
			"MultiplayerProject/Variant_Combat/Animation",
			"MultiplayerProject/Variant_Combat/Gameplay",
			"MultiplayerProject/Variant_Combat/Interfaces",
			"MultiplayerProject/Variant_Combat/UI",
			"MultiplayerProject/Variant_SideScrolling",
			"MultiplayerProject/Variant_SideScrolling/AI",
			"MultiplayerProject/Variant_SideScrolling/Gameplay",
			"MultiplayerProject/Variant_SideScrolling/Interfaces",
			"MultiplayerProject/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
