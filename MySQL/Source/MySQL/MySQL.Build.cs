// Copyright 2018-2019, Sameek Kundu. All Rights Reserved. 

using UnrealBuildTool;
using System.IO;

public class MySQL: ModuleRules
{
    public string ProjectDirectory
    {
        get
        {
            return Path.GetFullPath(
                  Path.Combine(ModuleDirectory, "../../../../")
            );
        }
    }

    private void CopyToBinaries(string Filepath, ReadOnlyTargetRules Target)
    {
        string binariesDir = Path.Combine(ProjectDirectory, "Binaries", Target.Platform.ToString());

        string filename = Path.GetFileName(Filepath);

        if (!Directory.Exists(binariesDir))
            Directory.CreateDirectory(binariesDir);

        if (!File.Exists(Path.Combine(binariesDir, filename)))
            File.Copy(Filepath, Path.Combine(binariesDir, filename), true);

        RuntimeDependencies.Add(Path.Combine(binariesDir, filename));

    }

    public MySQL(ReadOnlyTargetRules Target) : base(Target)
    {

        PrivateIncludePaths.AddRange(new string[]
        {
            "MySQL/Private"
               
        });

        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new [] { "Core", "CoreUObject", "Engine", "InputCore" , "Projects" });

        PrivateDependencyModuleNames.AddRange(new[] {"XmlParser" , "Core", "ImageWrapper", "Engine"});

        string BaseDirectory = Path.GetFullPath(Path.Combine(ModuleDirectory, "..", ".."));
        string SQLDirectory = Path.Combine(BaseDirectory, "SQLLib");
        string PlatformString = (Target.Platform == UnrealTargetPlatform.Win64) ? "x64" : "x86";

        PublicIncludePaths.Add(Path.Combine(SQLDirectory, PlatformString));
        PublicIncludePaths.Add(Path.Combine(SQLDirectory, PlatformString));

        RuntimeDependencies.Add(Path.Combine(SQLDirectory, PlatformString , "SQL.dll"));
        RuntimeDependencies.Add(Path.Combine(SQLDirectory, PlatformString, "MySql.Data.dll"));

        //CopyToBinaries(Path.Combine(SQLDirectory, PlatformString , "MySql.Data.dll"), Target);


    }
}