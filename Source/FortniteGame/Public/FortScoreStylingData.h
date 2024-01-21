#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortUIScoreType.h"
#include "FortScoreStylingInfo.h"
#include "FortScoreStylingData.generated.h"

UCLASS(Blueprintable)
class UFortScoreStylingData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortScoreStylingInfo ScoreStyles[6];
    
    UFortScoreStylingData();
    UFUNCTION(BlueprintCallable)
    static bool GetScoreStylingData(TEnumAsByte<EFortUIScoreType::Type> Rarity, FFortScoreStylingInfo& ScoreStylingInfo);
    
};

