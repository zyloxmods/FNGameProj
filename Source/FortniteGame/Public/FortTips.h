#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortTips.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortTips : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Tips;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideTips;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DisplayOnPlatforms;
    
public:
    UFortTips();
};

