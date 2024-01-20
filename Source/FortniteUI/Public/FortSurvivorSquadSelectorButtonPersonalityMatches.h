#pragma once
#include "CoreMinimal.h"
#include "FortMultiSizeBrush.h"
#include "FortSurvivorSquadSelectorButtonPersonalityMatches.generated.h"

USTRUCT(BlueprintType)
struct FFortSurvivorSquadSelectorButtonPersonalityMatches {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPersonalityMatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalNonLeaderSquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HavePersonalityIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMultiSizeBrush PersonalityIcons;
    
    FORTNITEUI_API FFortSurvivorSquadSelectorButtonPersonalityMatches();
};

