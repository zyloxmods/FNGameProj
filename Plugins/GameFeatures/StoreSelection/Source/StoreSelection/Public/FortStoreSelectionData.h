#pragma once
#include "CoreMinimal.h"
#include "FortGameFeatureData.h"
#include "FortStoreSelectionData.generated.h"

class UFortStoreSelectionScreen;

UCLASS(Blueprintable)
class UFortStoreSelectionData : public UFortGameFeatureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortStoreSelectionScreen> StoreSelectionScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RegularStoreSelectedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NonRegularStoreSelectedText;
    
    UFortStoreSelectionData();
};

