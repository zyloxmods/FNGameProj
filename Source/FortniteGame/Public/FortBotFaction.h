#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortBotFaction.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FFortBotFaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FactionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> BotPlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> NoneParticipantPlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> AllBotPlayerStates;
    
    FORTNITEGAME_API FFortBotFaction();
};

