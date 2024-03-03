#pragma once
#include "CoreMinimal.h"
#include "EFortPlayspaceMatchmakingRules.h"
#include "FortPlayspaceMatchmakingSettings.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayspaceMatchmakingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayspaceMatchmakingRules MatchmakingRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SpecificPlaylists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExcludedPlaylists;
    
    FORTNITEGAME_API FFortPlayspaceMatchmakingSettings();
};

