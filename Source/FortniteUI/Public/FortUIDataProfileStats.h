#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "FortUIStatStyle.h"
#include "FortUIDataProfileStats.generated.h"

UCLASS(Blueprintable, Config=Game)
class UFortUIDataProfileStats : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FFortUIStatStyle> ProfileStatStyles;
    
    UFortUIDataProfileStats();
};

