#pragma once
#include "CoreMinimal.h"
#include "FortToastDisplayInfo.h"
#include "StoreCallout.generated.h"

USTRUCT(BlueprintType)
struct FStoreCallout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortToastDisplayInfo ToastDisplayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemSet;
    
    FORTNITEUI_API FStoreCallout();
};

