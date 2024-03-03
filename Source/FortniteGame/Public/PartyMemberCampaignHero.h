#pragma once
#include "CoreMinimal.h"
#include "PartyMemberCampaignHero.generated.h"

class UFortHeroType;

USTRUCT(BlueprintType)
struct FPartyMemberCampaignHero {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HeroItemInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortHeroType> HeroType;
    
    FORTNITEGAME_API FPartyMemberCampaignHero();
};

