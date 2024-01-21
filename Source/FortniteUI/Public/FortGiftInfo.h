#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GiftBoxInfo.h"
#include "FortGiftInfo.generated.h"

UCLASS(Blueprintable)
class UFortGiftInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGiftBoxInfo GiftBoxInfo;
    
    UFortGiftInfo();
};

