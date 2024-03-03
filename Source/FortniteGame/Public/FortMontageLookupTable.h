#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MontageLookupData.h"
#include "FortMontageLookupTable.generated.h"

UCLASS(Blueprintable)
class UFortMontageLookupTable : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMontageLookupData> MontageLookupDataArray;
    
public:
    UFortMontageLookupTable();
};

