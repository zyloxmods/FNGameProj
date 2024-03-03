#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortReceivedItemLootInfo.h"
#include "FortPresentationItemLootInfo.generated.h"

UCLASS(Blueprintable)
class UFortPresentationItemLootInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortReceivedItemLootInfo ItemReceivedInfo;
    
    UFortPresentationItemLootInfo();
};

