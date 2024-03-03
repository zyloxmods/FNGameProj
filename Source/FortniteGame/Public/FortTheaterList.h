#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortTheaterList.generated.h"

class UFortTheaterInfo;

UCLASS(Blueprintable)
class UFortTheaterList : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortTheaterInfo>> ActiveTheatersList;
    
    UFortTheaterList();
};

