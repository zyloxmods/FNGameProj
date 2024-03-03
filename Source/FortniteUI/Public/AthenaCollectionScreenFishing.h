#pragma once
#include "CoreMinimal.h"
#include "AthenaCollectionScreenBase.h"
#include "AthenaCollectionScreenFishing.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionScreenFishing : public UAthenaCollectionScreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RequiresProFishingRodText;
    
public:
    UAthenaCollectionScreenFishing();
};

