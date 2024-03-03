#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AthenaMemoryCostRegister.generated.h"

class UCustomCharacterPart;

UCLASS(Blueprintable)
class UAthenaMemoryCostRegister : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UCustomCharacterPart>> ExtraCharacterParts;
    
    UPROPERTY(EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    TMap<FName, uint32> TotalResKBIncPerAsset;
    
public:
    UAthenaMemoryCostRegister();
};

