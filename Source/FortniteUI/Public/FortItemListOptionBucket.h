#pragma once
#include "CoreMinimal.h"
#include "FortItemListOptionBucket.generated.h"

class UFortItemListOptionProxy;

USTRUCT(BlueprintType)
struct FFortItemListOptionBucket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortItemListOptionProxy*> ItemOptionData;
    
    FORTNITEUI_API FFortItemListOptionBucket();
};

