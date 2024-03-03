#pragma once
#include "CoreMinimal.h"
#include "PartyMemberFrontendEmote.generated.h"

class UFortMontageItemDefinitionBase;

USTRUCT(BlueprintType)
struct FPartyMemberFrontendEmote {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMontageItemDefinitionBase> EmoteItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EmoteEKey;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 EmoteSection;
    
    FORTNITEGAME_API FPartyMemberFrontendEmote();
};

