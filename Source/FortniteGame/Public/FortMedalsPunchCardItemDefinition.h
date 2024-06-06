#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortPersistableItemDefinition.h"
#include "FortMedalsPunchCardItemDefinition.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMedalsPunchCardItemDefinition : public UFortPersistableItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPunches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMedalReplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PunchCardXpRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PunchCardRestXp;
    
    UFortMedalsPunchCardItemDefinition(const FObjectInitializer& ObjectInitializer);
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("MedalsPunchCard", GetFName());
    }
};

