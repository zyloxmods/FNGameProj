#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortCollectedResourceItem.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable)
class UFortCollectedResourceItem : public UFortAccountItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double stored_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString last_updated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* PayoutResource;
    
    UFortCollectedResourceItem();
};

