#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortHardcoreModifierItem.generated.h"

UCLASS(Blueprintable)
class UFortHardcoreModifierItem : public UFortAccountItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_enabled;
    
public:
    UFortHardcoreModifierItem();
};

